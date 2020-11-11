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
	ButtonConfimar = new wxButton(this, ID_BUTTON2, _("Confirmar"), wxPoint(56,344), wxSize(119,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	ButtonConfimar->Hide();
	ButtonConfimar->SetBackgroundColour(wxColour(0,128,128));
	ButtonSalir = new wxButton(this, ID_BUTTON3, _("Salir"), wxPoint(224,344), wxSize(120,32), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	TextCtrlMonto = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(56,296), wxSize(296,33), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrlMonto->Hide();
	wxFont TextCtrlMontoFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	TextCtrlMonto->SetFont(TextCtrlMontoFont);
	ChoiceMov = new wxChoice(this, ID_CHOICE1, wxPoint(232,216), wxSize(124,32), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	ChoiceMov->Append(_("Extracción"));
	ChoiceMov->Append(_("Depósito"));
	ChoiceMov->Hide();
	wxFont ChoiceMovFont(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	ChoiceMov->SetFont(ChoiceMovFont);
	StaticTextTM = new wxStaticText(this, ID_STATICTEXT2, _("Tipo de movimiento:"), wxPoint(56,216), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticTextTM->Hide();
	StaticText1D = new wxStaticText(this, ID_STATICTEXT3, _("DNI Titular:"), wxPoint(56,48), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText1D->Hide();
	StaticTextNC = new wxStaticText(this, ID_STATICTEXT4, _("Nro Cuenta:"), wxPoint(56,104), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticTextNC->Hide();
	StaticTextTC = new wxStaticText(this, ID_STATICTEXT5, _("Tipo de cuenta:"), wxPoint(56,160), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticTextTC->Hide();
	StaticTextDNI = new wxStaticText(this, ID_STATICTEXT6, _("Label"), wxPoint(192,48), wxSize(176,25), 0, _T("ID_STATICTEXT6"));
	StaticTextDNI->Hide();
	StaticTextNroCuenta = new wxStaticText(this, ID_STATICTEXT7, _("Label"), wxPoint(192,104), wxSize(176,25), 0, _T("ID_STATICTEXT7"));
	StaticTextNroCuenta->Hide();
	StaticTextTipoCuenta = new wxStaticText(this, ID_STATICTEXT8, _("Label"), wxPoint(192,160), wxSize(160,25), 0, _T("ID_STATICTEXT8"));
	StaticTextTipoCuenta->Hide();
	StaticTextM = new wxStaticText(this, ID_STATICTEXT9, _("Ingrese el monto (entre 1 y 1000000):"), wxPoint(56,264), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	StaticTextM->Hide();

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
    mov.setFecha();
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
    StaticTextM->Hide();
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
    archTM<<left<<setw(5)<<"Día"<<setw(5)<<"Mes"<<setw(5)<<"Año"<<setw(15)<<"Hora"<<setw(15)<<"Nro Cuenta"<<setw(15)<<"DNI"<<setw(15)<<"Apellido"<<setw(15)<<"Nombre"<<setw(5)<<"T Cta"<<setw(5)<<"T Op"<<setw(5)<<"Monto"<<endl;

    archMov.seekg(0);
    archMov.read(reinterpret_cast<char *>(&mov),sizeof(Movimiento));
    while(!archTM.eof())
    {
        const char* TC = (mov.getTipoCuenta())?"CA":"CC";
        const char* TM = (mov.getTipoMovimiento())?"E":"D";
        tm * fecha = mov.getFecha();
        archTM<<left<<setw(5)<<fecha->tm_mday<<setw(5)<<fecha->tm_mon<<setw(5)<<fecha->tm_year<<setw(15)<<fecha->tm_hour<<setw(15)<<mov.getNroCuenta()<<setw(15)<<mov.getDniTitular()<<setw(15)<<mov.getApellido()<<setw(15)<<mov.getNombre()<<setw(5)<<TC<<setw(5)<<TM<<setw(5)<<mov.getMonto()<<endl;
        archMov.read(reinterpret_cast<char *>(&mov),sizeof(Movimiento));
    }
    archTM.close();
    archMov.close();

    Cuenta reg;
    fstream arch;
    arch.open("Cuentas.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos- Banco P&P"));
    }
    arch.close();
    arch.open("Cuentas.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }

    ofstream archca;
    archca.open("Cajas_de_Ahorro.txt",ios::out);
    if(!archca)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }
    archca<<left<<setw(15)<<"Nro de Cuenta"<<setw(15)<<"DNI Titular"<<setw(15)<<"Saldo"<<setw(15)<<"Interes"<<endl;

    ofstream archcc;
    archcc.open("Cuentas_Corrientes.txt",ios::out);
    if(!archca)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Movimientos - Banco P&P"));
    }
    archcc<<left<<setw(15)<<"Nro de Cuenta"<<setw(15)<<"DNI Titular"<<setw(15)<<"Saldo"<<setw(15)<<"Interes"<<endl;


    arch.seekg(0);
    arch.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    while(!arch.eof())
    {
        if (reg.getTipo())
            archca<<left<<setw(15)<<reg.getNroCuenta()<<setw(15)<<reg.getDniTitular()<<setw(15)<<reg.getSaldo()<<setw(15)<<reg.getInteres()<<endl;
        else
            archcc<<left<<setw(15)<<reg.getNroCuenta()<<setw(15)<<reg.getDniTitular()<<setw(15)<<reg.getSaldo()<<setw(15)<<reg.getInteres()<<endl;
        arch.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    }
    archca.close();
    archcc.close();
    arch.close();
    Close();

}
