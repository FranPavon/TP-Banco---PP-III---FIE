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
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Ingrese el monto a extraer"), wxPoint(48,88), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(224,88), wxSize(144,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->SetMaxLength(7);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Debe ser entre 1 y 1.000.000"), wxPoint(224,136), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	ButtonConfirmar = new wxButton(this, ID_BUTTONCONFIRMAR, _("CONFIRMAR"), wxPoint(88,200), wxSize(104,39), 0, wxDefaultValidator, _T("ID_BUTTONCONFIRMAR"));
	ButtonConfirmar->SetForegroundColour(wxColour(255,255,255));
	ButtonConfirmar->SetBackgroundColour(wxColour(96,96,96));
	wxFont ButtonConfirmarFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonConfirmar->SetFont(ButtonConfirmarFont);
	ButtonSalir = new wxButton(this, ID_BUTTONSALIR, _("SALIR"), wxPoint(224,200), wxSize(104,39), 0, wxDefaultValidator, _T("ID_BUTTONSALIR"));
	ButtonSalir->SetForegroundColour(wxColour(255,255,255));
	ButtonSalir->SetBackgroundColour(wxColour(96,96,96));
	wxFont ButtonSalirFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSalir->SetFont(ButtonSalirFont);

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

