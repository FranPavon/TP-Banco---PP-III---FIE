#include "BajaCuenta.h"

//(*InternalHeaders(BajaCuenta)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(BajaCuenta)
const long BajaCuenta::ID_BUTTONCONFIRMAR = wxNewId();
const long BajaCuenta::ID_BUTTONSALIR = wxNewId();
const long BajaCuenta::ID_STATICTEXT1 = wxNewId();
const long BajaCuenta::ID_STATICTEXT2 = wxNewId();
const long BajaCuenta::ID_STATICTEXT3 = wxNewId();
const long BajaCuenta::ID_STATICTEXT4 = wxNewId();
const long BajaCuenta::ID_STATICTEXT5 = wxNewId();
const long BajaCuenta::ID_STATICTEXT6 = wxNewId();
const long BajaCuenta::ID_STATICTEXT7 = wxNewId();
const long BajaCuenta::ID_STATICTEXT8 = wxNewId();
const long BajaCuenta::ID_TEXTCTRL1 = wxNewId();
const long BajaCuenta::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(BajaCuenta,wxDialog)
	//(*EventTable(BajaCuenta)
	//*)
END_EVENT_TABLE()

BajaCuenta::BajaCuenta(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(BajaCuenta)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(404,288));
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(48,48,48));
	ButtonConfirmar = new wxButton(this, ID_BUTTONCONFIRMAR, _("Confirmar"), wxPoint(48,208), wxSize(128,40), 0, wxDefaultValidator, _T("ID_BUTTONCONFIRMAR"));
	ButtonConfirmar->Hide();
	ButtonConfirmar->SetForegroundColour(wxColour(0,0,0));
	ButtonConfirmar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonConfirmarFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonConfirmar->SetFont(ButtonConfirmarFont);
	ButtonSalir = new wxButton(this, ID_BUTTONSALIR, _("Salir"), wxPoint(216,208), wxSize(120,40), 0, wxDefaultValidator, _T("ID_BUTTONSALIR"));
	ButtonSalir->SetForegroundColour(wxColour(0,0,0));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonSalirFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSalir->SetFont(ButtonSalirFont);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Desea dar de baja la siguiente cuenta\?"), wxPoint(80,32), wxSize(248,40), 0, _T("ID_STATICTEXT1"));
	StaticText1->Hide();
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("DNI titular: "), wxPoint(40,88), wxSize(72,16), 0, _T("ID_STATICTEXT2"));
	StaticText2->Hide();
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Nro cuenta: "), wxPoint(40,128), wxSize(40,16), 0, _T("ID_STATICTEXT3"));
	StaticText3->Hide();
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticTextDNI = new wxStaticText(this, ID_STATICTEXT4, _("xxxxxxxx"), wxPoint(128,88), wxSize(120,21), 0, _T("ID_STATICTEXT4"));
	StaticTextDNI->Hide();
	wxFont StaticTextDNIFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextDNI->SetFont(StaticTextDNIFont);
	StaticTextNroCuenta = new wxStaticText(this, ID_STATICTEXT5, _("xxxxxxxx"), wxPoint(128,128), wxSize(120,21), 0, _T("ID_STATICTEXT5"));
	StaticTextNroCuenta->Hide();
	wxFont StaticTextNroCuentaFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextNroCuenta->SetFont(StaticTextNroCuentaFont);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Tipo de cuenta:"), wxPoint(40,168), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	StaticText6->Hide();
	wxFont StaticText6Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	StaticTextTipoCuenta = new wxStaticText(this, ID_STATICTEXT7, _("xxxxxxxx"), wxPoint(128,168), wxSize(120,16), 0, _T("ID_STATICTEXT7"));
	StaticTextTipoCuenta->Hide();
	wxFont StaticTextTipoCuentaFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextTipoCuenta->SetFont(StaticTextTipoCuentaFont);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Ingrese el numero de cuenta a dar de baja:"), wxPoint(80,24), wxSize(248,21), 0, _T("ID_STATICTEXT8"));
	wxFont StaticText8Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText8->SetFont(StaticText8Font);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(80,64), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Buscar"), wxPoint(208,64), wxSize(112,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetBackgroundColour(wxColour(0,128,128));
	wxFont Button1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);

	Connect(ID_BUTTONSALIR,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BajaCuenta::OnButtonSalirClick);
	//*)
}

BajaCuenta::~BajaCuenta()
{
	//(*Destroy(BajaCuenta)
	//*)
}


void BajaCuenta::OnButtonSalirClick(wxCommandEvent& event)
{
    Close();
}
