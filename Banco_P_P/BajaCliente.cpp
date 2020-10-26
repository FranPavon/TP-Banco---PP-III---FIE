#include "BajaCliente.h"

//(*InternalHeaders(BajaCliente)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(BajaCliente)
const long BajaCliente::ID_STATICTEXT1 = wxNewId();
const long BajaCliente::ID_BUTTONCONFIRMAR = wxNewId();
const long BajaCliente::ID_LISTVIEW1 = wxNewId();
const long BajaCliente::ID_BUTTONSALIR = wxNewId();
//*)

BEGIN_EVENT_TABLE(BajaCliente,wxDialog)
	//(*EventTable(BajaCliente)
	//*)
END_EVENT_TABLE()

BajaCliente::BajaCliente(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(BajaCliente)
	Create(parent, id, _("Baja de Cliente"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(400,256));
	Move(wxDefaultPosition);
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(48,48,48));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Desea eliminar al cliente, con todas sus cuentas\?"), wxPoint(56,40), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	ButtonConfirmar = new wxButton(this, ID_BUTTONCONFIRMAR, _("Confirmar"), wxPoint(56,184), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTONCONFIRMAR"));
	ButtonConfirmar->SetForegroundColour(wxColour(0,0,0));
	ButtonConfirmar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonConfirmarFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonConfirmar->SetFont(ButtonConfirmarFont);
	ListView1 = new wxListView(this, ID_LISTVIEW1, wxPoint(56,88), wxSize(288,56), wxLC_LIST, wxDefaultValidator, _T("ID_LISTVIEW1"));
	ButtonSalir = new wxButton(this, ID_BUTTONSALIR, _("Salir"), wxPoint(208,184), wxSize(136,31), 0, wxDefaultValidator, _T("ID_BUTTONSALIR"));
	ButtonSalir->SetForegroundColour(wxColour(0,0,0));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonSalirFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSalir->SetFont(ButtonSalirFont);

	Connect(ID_BUTTONSALIR,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BajaCliente::OnButtonSalirClick);
	//*)
}

BajaCliente::~BajaCliente()
{
	//(*Destroy(BajaCliente)
	//*)
}


void BajaCliente::OnButtonSalirClick(wxCommandEvent& event)
{
    Close();
}
