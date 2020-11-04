#include "AgregarCuenta.h"

//(*InternalHeaders(AgregarCuenta)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(AgregarCuenta)
const long AgregarCuenta::ID_STATICTEXT1 = wxNewId();
const long AgregarCuenta::ID_STATICTEXT2 = wxNewId();
const long AgregarCuenta::ID_STATICTEXT3 = wxNewId();
const long AgregarCuenta::ID_CHOICE1 = wxNewId();
const long AgregarCuenta::ID_STATICTEXT4 = wxNewId();
const long AgregarCuenta::ID_STATICTEXT5 = wxNewId();
const long AgregarCuenta::ID_STATICTEXT6 = wxNewId();
const long AgregarCuenta::ID_TEXTCTRL1 = wxNewId();
const long AgregarCuenta::ID_BUTTONCONFIRMAR = wxNewId();
const long AgregarCuenta::ID_BUTTONSALIR = wxNewId();
const long AgregarCuenta::ID_STATICTEXT7 = wxNewId();
const long AgregarCuenta::ID_TEXTCTRL2 = wxNewId();
const long AgregarCuenta::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AgregarCuenta,wxDialog)
	//(*EventTable(AgregarCuenta)
	//*)
END_EVENT_TABLE()

AgregarCuenta::AgregarCuenta(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(AgregarCuenta)
	Create(parent, id, _("Agregar Cuenta"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(400,292));
	Move(wxDefaultPosition);
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(48,48,48));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Nro Cuenta"), wxPoint(104,72), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->Hide();
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Label"), wxPoint(200,72), wxSize(96,25), 0, _T("ID_STATICTEXT2"));
	StaticText2->Hide();
	wxFont StaticText2Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Tipo"), wxPoint(144,120), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText3->Hide();
	wxFont StaticText3Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	Choice1 = new wxChoice(this, ID_CHOICE1, wxPoint(200,120), wxSize(136,23), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	Choice1->Append(_("Caja de ahorro"));
	Choice1->Append(_("Cuenta corriente"));
	Choice1->Hide();
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("DNI Titular"), wxPoint(112,24), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText4->Hide();
	wxFont StaticText4Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Label"), wxPoint(200,24), wxSize(96,25), 0, _T("ID_STATICTEXT5"));
	StaticText5->Hide();
	wxFont StaticText5Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Saldo"), wxPoint(136,168), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	StaticText6->Hide();
	wxFont StaticText6Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(200,168), wxSize(136,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->Hide();
	ButtonConfirmar = new wxButton(this, ID_BUTTONCONFIRMAR, _("Confirmar"), wxPoint(24,224), wxSize(160,48), 0, wxDefaultValidator, _T("ID_BUTTONCONFIRMAR"));
	ButtonConfirmar->Hide();
	ButtonConfirmar->SetForegroundColour(wxColour(0,0,0));
	ButtonConfirmar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonConfirmarFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonConfirmar->SetFont(ButtonConfirmarFont);
	ButtonSalir = new wxButton(this, ID_BUTTONSALIR, _("Salir"), wxPoint(208,224), wxSize(152,48), 0, wxDefaultValidator, _T("ID_BUTTONSALIR"));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonSalirFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSalir->SetFont(ButtonSalirFont);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Ingrese el DNI del titular de la cuenta:"), wxPoint(112,24), wxSize(200,21), 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	TextCtrlDNI = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(80,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Buscar"), wxPoint(208,56), wxSize(112,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetBackgroundColour(wxColour(0,128,128));
	wxFont Button1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	Center();

	Connect(ID_BUTTONSALIR,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AgregarCuenta::OnButtonSalirClick);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&AgregarCuenta::OnInit);
	//*)
}

AgregarCuenta::~AgregarCuenta()
{
	//(*Destroy(AgregarCuenta)
	//*)
}


void AgregarCuenta::OnInit(wxInitDialogEvent& event)
{
}


void AgregarCuenta::OnButtonSalirClick(wxCommandEvent& event)
{
    Close();
}
