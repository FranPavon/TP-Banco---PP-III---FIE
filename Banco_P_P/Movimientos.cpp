#include "Movimientos.h"
#include "Movimiento.h"
#include "Cuenta.h"
#include "Cliente.h"
#include <ctime>
#include <fstream>
#include <wx/msgdlg.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

//(*InternalHeaders(Movimientos)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Movimientos)
const long Movimientos::ID_STATICTEXT1 = wxNewId();
const long Movimientos::ID_BUTTON1 = wxNewId();
const long Movimientos::ID_TEXTCTRL1 = wxNewId();
const long Movimientos::ID_BUTTON2 = wxNewId();
const long Movimientos::ID_BUTTON3 = wxNewId();
const long Movimientos::ID_TEXTCTRL2 = wxNewId();
const long Movimientos::ID_CHOICE1 = wxNewId();
const long Movimientos::ID_STATICTEXT2 = wxNewId();
const long Movimientos::ID_STATICTEXT3 = wxNewId();
const long Movimientos::ID_STATICTEXT4 = wxNewId();
const long Movimientos::ID_STATICTEXT5 = wxNewId();
const long Movimientos::ID_STATICTEXT6 = wxNewId();
const long Movimientos::ID_STATICTEXT7 = wxNewId();
const long Movimientos::ID_STATICTEXT8 = wxNewId();
const long Movimientos::ID_STATICTEXT9 = wxNewId();
const long Movimientos::ID_STATICTEXT10 = wxNewId();
const long Movimientos::ID_STATICTEXT11 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Movimientos,wxDialog)
	//(*EventTable(Movimientos)
	//*)
END_EVENT_TABLE()

Movimientos::Movimientos(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Movimientos)
	Create(parent, id, _("Movimientos"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(400,398));
	Move(wxDefaultPosition);
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(32,32,32));
	wxFont thisFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	StaticTextTitulo = new wxStaticText(this, ID_STATICTEXT1, _("Ingrese el número de cuenta:"), wxPoint(104,32), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticTextTituloFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextTitulo->SetFont(StaticTextTituloFont);
	ButtonBuscar = new wxButton(this, ID_BUTTON1, _("Buscar"), wxPoint(232,88), wxSize(120,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	ButtonBuscar->SetBackgroundColour(wxColour(0,128,128));
	TextCtrlCuenta = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(88,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	wxFont TextCtrlCuentaFont(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	TextCtrlCuenta->SetFont(TextCtrlCuentaFont);
	ButtonConfimar = new wxButton(this, ID_BUTTON2, _("Confirmar"), wxPoint(56,352), wxSize(119,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	ButtonConfimar->Hide();
	ButtonConfimar->SetBackgroundColour(wxColour(0,128,128));
	ButtonSalir = new wxButton(this, ID_BUTTON3, _("Salir"), wxPoint(224,352), wxSize(120,32), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	TextCtrlMonto = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(232,304), wxSize(112,33), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrlMonto->Hide();
	wxFont TextCtrlMontoFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	TextCtrlMonto->SetFont(TextCtrlMontoFont);
	ChoiceMov = new wxChoice(this, ID_CHOICE1, wxPoint(232,232), wxSize(124,32), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	ChoiceMov->Append(_("Extracción"));
	ChoiceMov->Append(_("Depósito"));
	ChoiceMov->Hide();
	wxFont ChoiceMovFont(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	ChoiceMov->SetFont(ChoiceMovFont);
	StaticTextTM = new wxStaticText(this, ID_STATICTEXT2, _("Tipo de movimiento:"), wxPoint(56,232), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticTextTM->Hide();
	StaticText1D = new wxStaticText(this, ID_STATICTEXT3, _("DNI Titular:"), wxPoint(56,40), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText1D->Hide();
	StaticTextNC = new wxStaticText(this, ID_STATICTEXT4, _("Nro Cuenta:"), wxPoint(56,88), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticTextNC->Hide();
	StaticTextTC = new wxStaticText(this, ID_STATICTEXT5, _("Tipo de cuenta:"), wxPoint(56,136), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticTextTC->Hide();
	StaticTextDNI = new wxStaticText(this, ID_STATICTEXT6, _("Label"), wxPoint(192,40), wxSize(176,25), 0, _T("ID_STATICTEXT6"));
	StaticTextDNI->Hide();
	StaticTextNroCuenta = new wxStaticText(this, ID_STATICTEXT7, _("Label"), wxPoint(192,88), wxSize(176,25), 0, _T("ID_STATICTEXT7"));
	StaticTextNroCuenta->Hide();
	StaticTextTipoCuenta = new wxStaticText(this, ID_STATICTEXT8, _("Label"), wxPoint(192,136), wxSize(160,25), 0, _T("ID_STATICTEXT8"));
	StaticTextTipoCuenta->Hide();
	StaticTextM = new wxStaticText(this, ID_STATICTEXT9, _("Ingrese el monto (entre 1 y 1000000):"), wxPoint(56,272), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	StaticTextM->Hide();
	StaticTextS = new wxStaticText(this, ID_STATICTEXT10, _("Saldo:"), wxPoint(56,184), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	StaticTextS->Hide();
	StaticTextSaldo = new wxStaticText(this, ID_STATICTEXT11, _("Label"), wxPoint(192,184), wxSize(160,25), 0, _T("ID_STATICTEXT11"));
	StaticTextSaldo->Hide();
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Movimientos::OnButtonBuscarClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Movimientos::OnButtonConfimarClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Movimientos::OnButtonSalirClick);
	//*)
}

Movimientos::~Movimientos()
{
	//(*Destroy(Movimientos)
	//*)
}


void Movimientos::OnButtonBuscarClick(wxCommandEvent& event)
{
    Cuenta cuenta;
    fstream arch;
    int nc;

    arch.open("Cuentas.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }
    arch.close();
    arch.open("Cuentas.dat",ios::in|ios::out|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }

    wxString ncs = TextCtrlCuenta->GetValue();
    nc = wxAtoi(ncs);
    cuenta.setNroCuenta(nc);
    cuenta.buscar(arch);
    if(!arch.eof())
    {
        arch.seekg(-sizeof(Cuenta),ios::cur);
        arch.read(reinterpret_cast<char *>(&cuenta),sizeof(Cuenta));

        TextCtrlCuenta->Hide();
        ButtonBuscar->Hide();
        StaticTextTitulo->Hide();

        ButtonConfimar->Show();
        StaticText1D->Show();
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
        string s = to_string(cuenta.getSaldo());
        StaticTextSaldo->SetLabel(s);
        StaticTextSaldo->Show();
        StaticTextS->Show();
        StaticTextTM->Show();
        ChoiceMov->Show();
        TextCtrlMonto->Show();
        StaticTextM->Show();
    }
    else
    {
        wxString msg = "Cuenta inexistente, reintente";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }
    arch.close();
    TextCtrlCuenta->Clear();
}

void Movimientos::OnButtonConfimarClick(wxCommandEvent& event)
{
    Cuenta cuenta;
    Cliente cliente;
    Movimiento mov;

    fstream archCuenta;
    archCuenta.open("Cuentas.dat",ios::app|ios::binary);
    if(!archCuenta)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }
    archCuenta.close();
    archCuenta.open("Cuentas.dat",ios::in|ios::out |ios::binary);
    if(!archCuenta)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }

    fstream archClientes;
    archClientes.open("Clientes.dat",ios::app|ios::binary);
    if(!archClientes)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }
    archClientes.close();
    archClientes.open("Clientes.dat",ios::in|ios::out |ios::binary);
    if(!archClientes)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }

    fstream archMov;
    archMov.open("Movimientos.dat",ios::app|ios::binary);
    if(!archMov)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }
    archMov.close();
    archMov.open("Movimientos.dat",ios::in|ios::out |ios::binary);
    if(!archMov)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }

    wxString strM = TextCtrlMonto->GetValue();
    double m;
    strM.ToDouble(&m);
    if (m<1 || m>999999)
    {
        wxString msg = "Ingreso inválido, debe ser entre 1 y 10000000. Reintente";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
        archMov.close();
        archCuenta.close();
        archClientes.close();
        Close();
    }

    wxString strD = StaticTextDNI->GetLabel();
    int d = wxAtoi(strD);
    cliente.setDni(d);
    cliente.buscar(archClientes);
    archClientes.seekg(-sizeof(Cliente),ios::cur);
    archClientes.read(reinterpret_cast<char *>(&cliente),sizeof(Cliente));

    wxString strNC = StaticTextNroCuenta->GetLabel();
    int nc = wxAtoi(strNC);
    cuenta.setNroCuenta(nc);
    cuenta.buscar(archCuenta);
    archCuenta.seekg(-sizeof(Cuenta),ios::cur);
    archCuenta.read(reinterpret_cast<char *>(&cuenta),sizeof(Cuenta));

    mov.setNroCuenta(nc);
    mov.setDniTitular(d);
    mov.setTipoCuenta(cuenta.getTipo());
    mov.setApellido(cliente.getApellido());
    mov.setNombre(cliente.getNombre());
    mov.setMonto(m);
    bool tipoMov = (ChoiceMov->GetSelection()==0)?true:false;
    mov.setTipoMovimiento(tipoMov);

    if (tipoMov) //esta realizando una extraccion
    {
        double st = cuenta.getSaldo()- m;
        if (cuenta.getTipo())
        {
            if (st>0) //es CA, no puede ser negativo
                cuenta.setSaldo(st);
            else
            {
                wxString msg = "No puede retirar tanto dinero de su CA. Reintente";
                wxMessageBox(msg, _("Movimientos - Banco P&P"));
                archMov.close();
                archCuenta.close();
                archClientes.close();
                Close();
            }
        }
        else //es CC
        {
            if (st>-5000) //saldo en descubierto de la CC
                cuenta.setSaldo(st);
            else
            {
                wxString msg = "No puede retirar tanto dinero de su CC. Reintente";
                wxMessageBox(msg, _("Movimientos - Banco P&P"));
                archMov.close();
                archCuenta.close();
                archClientes.close();
                Close();
            }
        }
    }
    else //realiza un deposito
    {
        cuenta.setSaldo(cuenta.getSaldo()+ m);
    }

    archCuenta.seekg(-sizeof(Cuenta),ios::cur);
    archCuenta.write(reinterpret_cast<const char *>(&cuenta),sizeof(Cuenta));
    archMov.seekg (0, ios::end);
    archMov.write(reinterpret_cast<const char *>(&mov),sizeof(Movimiento));

    archMov.close();
    archCuenta.close();
    archClientes.close();

    TextCtrlCuenta->Show();
    ButtonBuscar->Show();
    StaticTextTitulo->Show();

    ButtonConfimar->Hide();
    StaticText1D->Hide();
    StaticTextDNI->Hide();
    StaticTextNC->Hide();
    StaticTextNroCuenta->Hide();
    StaticTextTC->Hide();
    StaticTextTipoCuenta->Hide();
    StaticTextTM->Hide();
    ChoiceMov->Hide();
    TextCtrlMonto->Hide();
    TextCtrlMonto->Clear();
    StaticTextM->Hide();
    StaticTextSaldo->Hide();
    StaticTextS->Hide();
}

void Movimientos::OnButtonSalirClick(wxCommandEvent& event)
{
    Movimiento mov;
    fstream archMov;
    archMov.open("Movimientos.dat",ios::app|ios::binary);
    if(!archMov)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }
    archMov.close();
    archMov.open("Movimientos.dat",ios::in|ios::out |ios::binary);
    if(!archMov)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }

    ofstream archTM;
    archTM.open("Movimientos.txt",ios::out);
    if(!archTM)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Moviemientos - Banco P&P"));
    }
    archTM<<left<<setw(15)<<"Nro Cuenta"<<setw(15)<<"DNI"<<setw(15)<<"Apellido"<<setw(15)<<"Nombre"<<setw(8)<<"T Cta"<<setw(8)<<"T Op"<<setw(8)<<"Monto"<<endl;

    archMov.seekg(0);
    archMov.read(reinterpret_cast<char *>(&mov),sizeof(Movimiento));
    while(!archMov.eof())
    {
        const char * TC = (mov.getTipoCuenta())?"CA":"CC";
        const char * TM = (mov.getTipoMovimiento())?"E":"D";
        archTM<<left<<setw(15)<<mov.getNroCuenta()<<setw(15)<<mov.getDniTitular()<<setw(15)<<mov.getApellido()<<setw(15)<<mov.getNombre()<<setw(8)<<TC<<setw(8)<<TM<<setw(8)<<mov.getMonto()<<endl;
        archMov.read(reinterpret_cast<char *>(&mov),sizeof(Movimiento));
    }
    archTM.close();
    archMov.close();
    Close();

}
