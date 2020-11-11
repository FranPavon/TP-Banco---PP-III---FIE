#include "BajaCuenta.h"
#include "Cuenta.h"
#include <fstream>
#include <wx/msgdlg.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

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
	StaticTextT2 = new wxStaticText(this, ID_STATICTEXT1, _("Desea dar de baja la siguiente cuenta\?"), wxPoint(80,32), wxSize(248,40), 0, _T("ID_STATICTEXT1"));
	StaticTextT2->Hide();
	wxFont StaticTextT2Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextT2->SetFont(StaticTextT2Font);
	StaticTextD = new wxStaticText(this, ID_STATICTEXT2, _("DNI titular: "), wxPoint(40,88), wxSize(72,16), 0, _T("ID_STATICTEXT2"));
	StaticTextD->Hide();
	wxFont StaticTextDFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextD->SetFont(StaticTextDFont);
	StaticTextNC = new wxStaticText(this, ID_STATICTEXT3, _("Nro cuenta: "), wxPoint(40,128), wxSize(40,16), 0, _T("ID_STATICTEXT3"));
	StaticTextNC->Hide();
	wxFont StaticTextNCFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextNC->SetFont(StaticTextNCFont);
	StaticTextDNI = new wxStaticText(this, ID_STATICTEXT4, _("xxxxxxxx"), wxPoint(128,88), wxSize(120,21), 0, _T("ID_STATICTEXT4"));
	StaticTextDNI->Hide();
	wxFont StaticTextDNIFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextDNI->SetFont(StaticTextDNIFont);
	StaticTextNroCuenta = new wxStaticText(this, ID_STATICTEXT5, _("xxxxxxxx"), wxPoint(128,128), wxSize(120,21), 0, _T("ID_STATICTEXT5"));
	StaticTextNroCuenta->Hide();
	wxFont StaticTextNroCuentaFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextNroCuenta->SetFont(StaticTextNroCuentaFont);
	StaticTextTC = new wxStaticText(this, ID_STATICTEXT6, _("Tipo de cuenta:"), wxPoint(40,168), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	StaticTextTC->Hide();
	wxFont StaticTextTCFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextTC->SetFont(StaticTextTCFont);
	StaticTextTipoCuenta = new wxStaticText(this, ID_STATICTEXT7, _("xxxxxxxx"), wxPoint(128,168), wxSize(120,16), 0, _T("ID_STATICTEXT7"));
	StaticTextTipoCuenta->Hide();
	wxFont StaticTextTipoCuentaFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextTipoCuenta->SetFont(StaticTextTipoCuentaFont);
	StaticTextT1 = new wxStaticText(this, ID_STATICTEXT8, _("Ingrese el numero de cuenta a dar de baja:"), wxPoint(80,24), wxSize(248,21), 0, _T("ID_STATICTEXT8"));
	wxFont StaticTextT1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextT1->SetFont(StaticTextT1Font);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(80,64), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	ButtonBuscar = new wxButton(this, ID_BUTTON1, _("Buscar"), wxPoint(208,64), wxSize(112,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	ButtonBuscar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonBuscarFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonBuscar->SetFont(ButtonBuscarFont);

	Connect(ID_BUTTONSALIR,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BajaCuenta::OnButtonSalirClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BajaCuenta::OnButtonBuscarClick);
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

void BajaCuenta::OnButtonBuscarClick(wxCommandEvent& event)
{
    Cuenta cuenta;
    fstream arch;
    int nc;

    arch.open("Cuentas.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Baja de Cuentas - Banco P&P"));
    }
    wxString ncs = TextCtrl1->GetValue();
    nc = wxAtoi(ncs);
    cuenta.setNroCuenta(nc);
    cuenta.buscar(arch);
    if(!arch.eof())
    {
        arch.seekg(-sizeof(Cuenta),ios::cur);
        arch.read(reinterpret_cast<char *>(&cuenta),sizeof(Cuenta));

        TextCtrl1->Hide();
        ButtonBuscar->Hide();
        StaticTextT1->Hide();

        StaticTextT2->Show();
        StaticTextD->Show();
        StaticTextDNI->Show();
        string d = to_string(cuenta.getDniTitular());
        StaticTextDNI->SetLabel(d);
        StaticTextNC->Show();
        StaticTextNroCuenta->SetLabel(ncs);
        StaticTextNroCuenta->Show();
        StaticTextTC->Show();
        if (cuenta.getTipo())
            StaticTextTipoCuenta->SetLabel("Caja de Ahorro");
        else
            StaticTextTipoCuenta->SetLabel("Cuenta Corriente");
        StaticTextTipoCuenta->Show();
    }
    else
    {
        wxString msg = "Cuenta inexistente, reintente";
        wxMessageBox(msg, _("Baja de cuenta - Banco P&P"));
    }
    arch.close();
    TextCtrl1->Clear();
}


