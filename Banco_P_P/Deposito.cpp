#include "Deposito.h"

//(*InternalHeaders(Deposito)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Deposito)
const long Deposito::ID_STATICTEXT1 = wxNewId();
const long Deposito::ID_TEXTCTRL1 = wxNewId();
const long Deposito::ID_STATICTEXT2 = wxNewId();
const long Deposito::ID_BUTTONCONFIRMAR = wxNewId();
const long Deposito::ID_BUTTONSALIR = wxNewId();
const long Deposito::ID_STATICTEXT3 = wxNewId();
const long Deposito::ID_STATICTEXT4 = wxNewId();
const long Deposito::ID_STATICTEXT5 = wxNewId();
const long Deposito::ID_TEXTCTRL2 = wxNewId();
const long Deposito::ID_BUTTON1 = wxNewId();
const long Deposito::ID_STATICTEXT6 = wxNewId();
const long Deposito::ID_STATICTEXT7 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Deposito,wxDialog)
	//(*EventTable(Deposito)
	//*)
END_EVENT_TABLE()

Deposito::Deposito(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Deposito)
	Create(parent, id, _("Deposito"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(400,224));
	Move(wxDefaultPosition);
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(48,48,48));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Ingrese el monto a depositar"), wxPoint(24,112), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->Hide();
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(208,112), wxSize(144,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->SetMaxLength(10);
	TextCtrl1->Hide();
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Debe ser entre 1 y 1.000.000"), wxPoint(208,144), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText2->Hide();
	wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	ButtonConfirmar = new wxButton(this, ID_BUTTONCONFIRMAR, _("Confirmar"), wxPoint(56,168), wxSize(120,32), 0, wxDefaultValidator, _T("ID_BUTTONCONFIRMAR"));
	ButtonConfirmar->Hide();
	ButtonConfirmar->SetForegroundColour(wxColour(0,0,0));
	ButtonConfirmar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonConfirmarFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonConfirmar->SetFont(ButtonConfirmarFont);
	ButtonSalir = new wxButton(this, ID_BUTTONSALIR, _("Salir"), wxPoint(208,168), wxSize(120,32), 0, wxDefaultValidator, _T("ID_BUTTONSALIR"));
	ButtonSalir->SetForegroundColour(wxColour(0,0,0));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonSalirFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSalir->SetFont(ButtonSalirFont);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Ingrese la cuenta de deposito:"), wxPoint(104,16), wxSize(168,21), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Nro de cuenta:"), wxPoint(24,48), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText4->Hide();
	wxFont StaticText4Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("DNI:"), wxPoint(24,80), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticText5->Hide();
	wxFont StaticText5Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(72,48), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	ButtonBuscar = new wxButton(this, ID_BUTTON1, _("Buscar"), wxPoint(208,48), wxSize(112,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	ButtonBuscar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonBuscarFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonBuscar->SetFont(ButtonBuscarFont);
	StaticTextDNI = new wxStaticText(this, ID_STATICTEXT6, _("Label"), wxPoint(144,80), wxSize(128,25), 0, _T("ID_STATICTEXT6"));
	StaticTextDNI->Hide();
	wxFont StaticTextDNIFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextDNI->SetFont(StaticTextDNIFont);
	StaticTextNroCuenta = new wxStaticText(this, ID_STATICTEXT7, _("Label"), wxPoint(144,48), wxSize(136,25), 0, _T("ID_STATICTEXT7"));
	StaticTextNroCuenta->Hide();
	wxFont StaticTextNroCuentaFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextNroCuenta->SetFont(StaticTextNroCuentaFont);

	Connect(ID_BUTTONSALIR,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Deposito::OnButtonSalirClick);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&Deposito::OnInit);
	//*)
}

Deposito::~Deposito()
{
	//(*Destroy(Deposito)
	//*)
}


void Deposito::OnInit(wxInitDialogEvent& event)
{
}

void Deposito::OnButtonSalirClick(wxCommandEvent& event)
{
    Close();
}


