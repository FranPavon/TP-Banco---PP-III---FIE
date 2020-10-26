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
	ButtonConfirmar->SetForegroundColour(wxColour(0,0,0));
	ButtonConfirmar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonConfirmarFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonConfirmar->SetFont(ButtonConfirmarFont);
	ButtonSalir = new wxButton(this, ID_BUTTONSALIR, _("Salir"), wxPoint(216,208), wxSize(120,40), 0, wxDefaultValidator, _T("ID_BUTTONSALIR"));
	ButtonSalir->SetForegroundColour(wxColour(0,0,0));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonSalirFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSalir->SetFont(ButtonSalirFont);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Desea dar de baja la siguiente cuenta\?"), wxPoint(88,48), wxSize(272,48), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("DNI titular: "), wxPoint(40,104), wxSize(72,16), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Nro cuenta: "), wxPoint(40,144), wxSize(40,16), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("xxxxxxxx"), wxPoint(136,104), wxSize(120,21), 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("xxxxxxxx"), wxPoint(136,144), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);

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
