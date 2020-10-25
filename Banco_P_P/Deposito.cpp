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
const long Deposito::ID_BUTTON1 = wxNewId();
const long Deposito::ID_BUTTON2 = wxNewId();
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
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Ingrese el monto a depositar"), wxPoint(24,80), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(208,80), wxSize(144,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->SetMaxLength(10);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Debe ser entre 1 y 1.000.000"), wxPoint(208,120), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	Button1 = new wxButton(this, ID_BUTTON1, _("CONFIRMAR"), wxPoint(56,168), wxSize(120,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetForegroundColour(wxColour(255,255,255));
	Button1->SetBackgroundColour(wxColour(96,96,96));
	wxFont Button1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	Button2 = new wxButton(this, ID_BUTTON2, _("SALIR"), wxPoint(208,168), wxSize(120,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button2->SetForegroundColour(wxColour(255,255,255));
	Button2->SetBackgroundColour(wxColour(96,96,96));
	wxFont Button2Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);

	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Deposito::OnButton2Click);
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

void Deposito::OnButton2Click(wxCommandEvent& event)
{
    Close();
}
