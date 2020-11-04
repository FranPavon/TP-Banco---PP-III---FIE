#include "Extraccion.h"

//(*InternalHeaders(Extraccion)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Extraccion)
const long Extraccion::ID_STATICTEXT1 = wxNewId();
const long Extraccion::ID_TEXTCTRL1 = wxNewId();
const long Extraccion::ID_STATICTEXT2 = wxNewId();
const long Extraccion::ID_BUTTONCONFIRMAR = wxNewId();
const long Extraccion::ID_BUTTONSALIR = wxNewId();
const long Extraccion::ID_STATICTEXT3 = wxNewId();
const long Extraccion::ID_STATICTEXT4 = wxNewId();
const long Extraccion::ID_STATICTEXT5 = wxNewId();
const long Extraccion::ID_STATICTEXT6 = wxNewId();
const long Extraccion::ID_STATICTEXT7 = wxNewId();
const long Extraccion::ID_STATICTEXT8 = wxNewId();
const long Extraccion::ID_STATICTEXT9 = wxNewId();
const long Extraccion::ID_TEXTCTRL2 = wxNewId();
const long Extraccion::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Extraccion,wxDialog)
	//(*EventTable(Extraccion)
	//*)
END_EVENT_TABLE()

Extraccion::Extraccion(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Extraccion)
	Create(parent, wxID_ANY, _("Extracciones"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(400,303));
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(48,48,48));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Ingrese el monto a extraer:"), wxPoint(48,184), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->Hide();
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(224,184), wxSize(144,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->SetMaxLength(7);
	TextCtrl1->Hide();
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Debe ser entre 1 y 1.000.000"), wxPoint(224,208), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText2->Hide();
	wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	ButtonConfirmar = new wxButton(this, ID_BUTTONCONFIRMAR, _("Confirmar"), wxPoint(88,232), wxSize(104,39), 0, wxDefaultValidator, _T("ID_BUTTONCONFIRMAR"));
	ButtonConfirmar->Hide();
	ButtonConfirmar->SetForegroundColour(wxColour(0,0,0));
	ButtonConfirmar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonConfirmarFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonConfirmar->SetFont(ButtonConfirmarFont);
	ButtonSalir = new wxButton(this, ID_BUTTONSALIR, _("Salir"), wxPoint(224,232), wxSize(104,39), 0, wxDefaultValidator, _T("ID_BUTTONSALIR"));
	ButtonSalir->SetForegroundColour(wxColour(0,0,0));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonSalirFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSalir->SetFont(ButtonSalirFont);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Nro de cuenta:"), wxPoint(48,64), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText3->Hide();
	wxFont StaticText3Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Saldo:"), wxPoint(48,144), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText4->Hide();
	wxFont StaticText4Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Ingrese el numero de cuenta para realizar la extracción:"), wxPoint(56,16), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("DNI:"), wxPoint(48,104), wxSize(32,25), 0, _T("ID_STATICTEXT6"));
	StaticText6->Hide();
	wxFont StaticText6Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Label"), wxPoint(160,104), wxSize(136,16), 0, _T("ID_STATICTEXT7"));
	StaticText7->Hide();
	wxFont StaticText7Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Label"), wxPoint(160,144), wxSize(136,16), 0, _T("ID_STATICTEXT8"));
	StaticText8->Hide();
	wxFont StaticText8Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText8->SetFont(StaticText8Font);
	StaticTextNroCuenta = new wxStaticText(this, ID_STATICTEXT9, _("Label"), wxPoint(160,64), wxSize(136,25), 0, _T("ID_STATICTEXT9"));
	StaticTextNroCuenta->Hide();
	wxFont StaticTextNroCuentaFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextNroCuenta->SetFont(StaticTextNroCuentaFont);
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(80,48), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	ButtonBuscar = new wxButton(this, ID_BUTTON1, _("Buscar"), wxPoint(208,48), wxSize(112,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	ButtonBuscar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonBuscarFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonBuscar->SetFont(ButtonBuscarFont);

	Connect(ID_BUTTONCONFIRMAR,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Extraccion::OnButton1Click);
	Connect(ID_BUTTONSALIR,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Extraccion::OnButtonSalirClick);
	//*)
}

Extraccion::~Extraccion()
{
	//(*Destroy(Extraccion)
	//*)
}

void Extraccion::OnButtonSalirClick(wxCommandEvent& event)
{
    Close();
}

void Extraccion::OnButton1Click(wxCommandEvent& event)
{
}

