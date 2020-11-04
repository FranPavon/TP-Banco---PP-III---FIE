#include "BajaCliente.h"

//(*InternalHeaders(BajaCliente)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(BajaCliente)
const long BajaCliente::ID_STATICTEXT1 = wxNewId();
const long BajaCliente::ID_BUTTONCONFIRMAR = wxNewId();
const long BajaCliente::ID_BUTTONSALIR = wxNewId();
const long BajaCliente::ID_STATICTEXT2 = wxNewId();
const long BajaCliente::ID_TEXTCTRL1 = wxNewId();
const long BajaCliente::ID_BUTTON1 = wxNewId();
const long BajaCliente::ID_STATICTEXT3 = wxNewId();
const long BajaCliente::ID_STATICTEXT4 = wxNewId();
const long BajaCliente::ID_STATICTEXT5 = wxNewId();
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
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Desea eliminar al cliente, con todas sus cuentas\?"), wxPoint(64,32), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->Hide();
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	ButtonConfirmar = new wxButton(this, ID_BUTTONCONFIRMAR, _("Confirmar"), wxPoint(56,200), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTONCONFIRMAR"));
	ButtonConfirmar->Hide();
	ButtonConfirmar->SetForegroundColour(wxColour(0,0,0));
	ButtonConfirmar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonConfirmarFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonConfirmar->SetFont(ButtonConfirmarFont);
	ButtonSalir = new wxButton(this, ID_BUTTONSALIR, _("Salir"), wxPoint(208,200), wxSize(136,31), 0, wxDefaultValidator, _T("ID_BUTTONSALIR"));
	ButtonSalir->SetForegroundColour(wxColour(0,0,0));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonSalirFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSalir->SetFont(ButtonSalirFont);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Ingrese el DNI del cliente a dar de BAJA:"), wxPoint(104,16), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	TextCtrlDNI = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(88,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	ButtonBuscar = new wxButton(this, ID_BUTTON1, _("Buscar"), wxPoint(208,56), wxSize(112,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	ButtonBuscar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonBuscarFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonBuscar->SetFont(ButtonBuscarFont);
	StaticTextDNI = new wxStaticText(this, ID_STATICTEXT3, _("DNI"), wxPoint(88,88), wxSize(232,21), 0, _T("ID_STATICTEXT3"));
	StaticTextDNI->Hide();
	wxFont StaticTextDNIFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextDNI->SetFont(StaticTextDNIFont);
	StaticTextNombre = new wxStaticText(this, ID_STATICTEXT4, _("Nombre"), wxPoint(88,120), wxSize(232,21), 0, _T("ID_STATICTEXT4"));
	StaticTextNombre->Hide();
	wxFont StaticTextNombreFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextNombre->SetFont(StaticTextNombreFont);
	StaticTextApellido = new wxStaticText(this, ID_STATICTEXT5, _("Apellido"), wxPoint(88,152), wxSize(232,21), 0, _T("ID_STATICTEXT5"));
	StaticTextApellido->Hide();
	wxFont StaticTextApellidoFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextApellido->SetFont(StaticTextApellidoFont);

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
