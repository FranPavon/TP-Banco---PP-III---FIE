/***************************************************************
 * Name:      Banco_P_PMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Horacio Patricelli & Francisco Pavon (pavonfrancisco@gmail.com)
 * Created:   2020-10-25
 * Copyright: Horacio Patricelli & Francisco Pavon (https://github.com/CTPavon)
 * License:
 **************************************************************/

#include "Banco_P_PMain.h"
#include "AppPrincipal.h"
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
const long Banco_P_PFrame::ID_STATICTEXT1 = wxNewId();
const long Banco_P_PFrame::ID_STATICBITMAP1 = wxNewId();
const long Banco_P_PFrame::ID_MENUINGRESAR = wxNewId();
const long Banco_P_PFrame::idMenuQuit = wxNewId();
const long Banco_P_PFrame::idMenuAbout = wxNewId();
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

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(438,470));
    SetBackgroundColour(wxColour(32,32,32));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Bienvenido al Banco P and P"), wxPoint(104,8), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(0,128,128));
    wxFont StaticText1Font(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\Pancho\\Desktop\\PP III\\TP-Banco---PP-III---FIE\\Banco_P_P\\banco_P_P.jpg"))), wxPoint(40,48), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuIngresar = new wxMenuItem(Menu1, ID_MENUINGRESAR, _("Ingresar"), _("Ingresar a la aplicación"), wxITEM_NORMAL);
    Menu1->Append(MenuIngresar);
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Salir\tAlt-F4"), _("Salir de la aplicación"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&Archivo"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("Sobre\tF1"), _("Muestra la información de la aplicación"), wxITEM_NORMAL);
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

    Connect(ID_MENUINGRESAR,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Banco_P_PFrame::OnMenuIngresarSelected);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Banco_P_PFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Banco_P_PFrame::OnAbout);
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
    wxString msg = "Aplicación realizada con Code:Blocks 20.03 y wxWidgets 3.1";
    wxMessageBox(msg, _("Bienvenido al Banco P&P"));
}

void Banco_P_PFrame::OnMenuIngresarSelected(wxCommandEvent& event)
{
    AppPrincipal *frm = new AppPrincipal (this);
    frm->Show();
}
