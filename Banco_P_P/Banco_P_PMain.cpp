/***************************************************************
 * Name:      Banco_P_PMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Horacio Patricelli & Francisco Pavon (pavonfrancisco@gmail.com)
 * Created:   2020-10-23
 * Copyright: Horacio Patricelli & Francisco Pavon (https://github.com/CTPavon)
 * License:
 **************************************************************/

#include "Banco_P_PMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Banco_P_PFrame)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Banco_P_PFrame)
const long Banco_P_PFrame::ID_STATICBITMAP1 = wxNewId();
const long Banco_P_PFrame::ID_STATICTEXT1 = wxNewId();
const long Banco_P_PFrame::idMenuIngresar = wxNewId();
const long Banco_P_PFrame::idMenuSalir = wxNewId();
const long Banco_P_PFrame::idMenuAyuda = wxNewId();
const long Banco_P_PFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Banco_P_PFrame,wxFrame)
    //(*EventTable(Banco_P_PFrame)
    //*)
END_EVENT_TABLE()

Banco_P_PFrame::Banco_P_PFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Banco_P_PFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(436,450));
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\Pancho\\Desktop\\PP III\\TP-Banco---PP-III---FIE\\Banco_P_P\\banco_P_P.jpg")).Rescale(wxSize(359,320).GetWidth(),wxSize(359,320).GetHeight())), wxDLG_UNIT(this,wxPoint(23,30)), wxSize(359,320), 0, _T("ID_STATICBITMAP1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Bienvenidos al Banco P-P"), wxPoint(104,16), wxSize(232,35), 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem3 = new wxMenuItem(Menu1, idMenuIngresar, _("Ingresar"), _("Ingresar a la aplicación"), wxITEM_NORMAL);
    Menu1->Append(MenuItem3);
    MenuItem1 = new wxMenuItem(Menu1, idMenuSalir, _("Salir\tAlt-F4"), _("Salir de la aplicación"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("Archivo"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAyuda, _("Información\tF1"), _("Muestra la información de la aplicación"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Ayuda"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Center();

    Connect(idMenuSalir,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Banco_P_PFrame::OnQuit);
    Connect(idMenuAyuda,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Banco_P_PFrame::OnAbout);
    //*)
}

Banco_P_PFrame::~Banco_P_PFrame()
{
    //(*Destroy(Banco_P_PFrame)
    //*)
}

void Banco_P_PFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Banco_P_PFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = ("Aplicación realizada en C++ con Code::Blocks 20.03 y wxWidgets 3.1");
    wxMessageBox(msg, _("Bienvenido al Banco P&P"));
}
