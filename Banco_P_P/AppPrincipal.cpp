#include "AppPrincipal.h"
#include "AgregarCliente.h"
#include "BajaCliente.h"
#include "ModificarCliente.h"
#include "AgregarCuenta.h"
#include "BajaCuenta.h"
#include "Movimientos.h"
#include "Cuenta.h"
#include "Cliente.h"
#include "Movimiento.h"
#include <iomanip>
#include <wx/msgdlg.h>

//(*InternalHeaders(AppPrincipal)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(AppPrincipal)
const long AppPrincipal::ID_STATICBOX1 = wxNewId();
const long AppPrincipal::ID_STATICBOX2 = wxNewId();
const long AppPrincipal::ID_BUTTONAGREGARCLIENTE = wxNewId();
const long AppPrincipal::ID_BUTTONMODIFICARCLIENTE = wxNewId();
const long AppPrincipal::ID_BUTTONBAJACLIENTE = wxNewId();
const long AppPrincipal::ID_BUTTONAGREGARCUENTA = wxNewId();
const long AppPrincipal::ID_BUTTONBAJACUENTA = wxNewId();
const long AppPrincipal::ID_BUTTONMOV = wxNewId();
const long AppPrincipal::ID_STATICTEXT1 = wxNewId();
const long AppPrincipal::ID_STATICBOX3 = wxNewId();
const long AppPrincipal::ID_BUTTON1 = wxNewId();
const long AppPrincipal::ID_BUTTON2 = wxNewId();
const long AppPrincipal::ID_BUTTON3 = wxNewId();
const long AppPrincipal::ID_BUTTON4 = wxNewId();
const long AppPrincipal::ID_BUTTON5 = wxNewId();
const long AppPrincipal::ID_BUTTON6 = wxNewId();
const long AppPrincipal::ID_BUTTON7 = wxNewId();
const long AppPrincipal::ID_BUTTON8 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AppPrincipal,wxFrame)
	//(*EventTable(AppPrincipal)
	//*)
END_EVENT_TABLE()

AppPrincipal::AppPrincipal(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(AppPrincipal)
	Create(parent, wxID_ANY, _("Banco P&P"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(1064,380));
	Hide();
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(32,32,32));
	StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Clientes"), wxPoint(32,48), wxSize(456,144), 0, _T("ID_STATICBOX1"));
	StaticBox1->SetForegroundColour(wxColour(255,255,255));
	StaticBox1->SetBackgroundColour(wxColour(96,96,96));
	wxFont StaticBox1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox1->SetFont(StaticBox1Font);
	StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Cuentas"), wxPoint(568,48), wxSize(464,144), 0, _T("ID_STATICBOX2"));
	StaticBox2->SetForegroundColour(wxColour(255,255,255));
	StaticBox2->SetBackgroundColour(wxColour(96,96,96));
	wxFont StaticBox2Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox2->SetFont(StaticBox2Font);
	ButtonAgregarCliente = new wxButton(this, ID_BUTTONAGREGARCLIENTE, _("Agregar"), wxPoint(56,80), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTONAGREGARCLIENTE"));
	ButtonAgregarCliente->SetForegroundColour(wxColour(0,0,0));
	ButtonAgregarCliente->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonAgregarClienteFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonAgregarCliente->SetFont(ButtonAgregarClienteFont);
	ButtonModificarCliente = new wxButton(this, ID_BUTTONMODIFICARCLIENTE, _("Modificar"), wxPoint(328,80), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTONMODIFICARCLIENTE"));
	ButtonModificarCliente->SetForegroundColour(wxColour(0,0,0));
	ButtonModificarCliente->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonModificarClienteFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonModificarCliente->SetFont(ButtonModificarClienteFont);
	ButtonBajaCliente = new wxButton(this, ID_BUTTONBAJACLIENTE, _("Baja"), wxPoint(192,136), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTONBAJACLIENTE"));
	ButtonBajaCliente->SetForegroundColour(wxColour(0,0,0));
	ButtonBajaCliente->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonBajaClienteFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonBajaCliente->SetFont(ButtonBajaClienteFont);
	ButtonAgregarCuenta = new wxButton(this, ID_BUTTONAGREGARCUENTA, _("Agregar"), wxPoint(592,80), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTONAGREGARCUENTA"));
	ButtonAgregarCuenta->SetForegroundColour(wxColour(0,0,0));
	ButtonAgregarCuenta->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonAgregarCuentaFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonAgregarCuenta->SetFont(ButtonAgregarCuentaFont);
	ButtonBajaCuenta = new wxButton(this, ID_BUTTONBAJACUENTA, _("Baja"), wxPoint(656,136), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTONBAJACUENTA"));
	ButtonBajaCuenta->SetForegroundColour(wxColour(0,0,0));
	ButtonBajaCuenta->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonBajaCuentaFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonBajaCuenta->SetFont(ButtonBajaCuentaFont);
	ButtonMovimientos = new wxButton(this, ID_BUTTONMOV, _("Movimientos"), wxPoint(800,80), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTONMOV"));
	ButtonMovimientos->SetForegroundColour(wxColour(0,0,0));
	ButtonMovimientos->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonMovimientosFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonMovimientos->SetFont(ButtonMovimientosFont);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Sistema de administración de clientes, cuentas y moviemientos - Banco P and P"), wxPoint(224,8), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticBoxListados = new wxStaticBox(this, ID_STATICBOX3, _("Listados"), wxPoint(32,216), wxSize(1000,136), 0, _T("ID_STATICBOX3"));
	StaticBoxListados->SetForegroundColour(wxColour(255,255,255));
	StaticBoxListados->SetBackgroundColour(wxColour(96,96,96));
	wxFont StaticBoxListadosFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBoxListados->SetFont(StaticBoxListadosFont);
	ButtonClientes = new wxButton(this, ID_BUTTON1, _("Clientes"), wxPoint(56,248), wxSize(136,31), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	ButtonClientes->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonClientesFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonClientes->SetFont(ButtonClientesFont);
	ButtonCA = new wxButton(this, ID_BUTTON2, _("Cajas de Ahorro"), wxPoint(328,248), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	ButtonCA->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonCAFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonCA->SetFont(ButtonCAFont);
	ButtonCC = new wxButton(this, ID_BUTTON3, _("Cuentas Corrientes"), wxPoint(600,248), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	ButtonCC->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonCCFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonCC->SetFont(ButtonCCFont);
	ButtonMov = new wxButton(this, ID_BUTTON4, _("Movimientos"), wxPoint(872,248), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	ButtonMov->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonMovFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonMov->SetFont(ButtonMovFont);
	ButtonSDeudor = new wxButton(this, ID_BUTTON5, _("CC Saldo Deudor"), wxPoint(192,296), wxSize(136,31), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	ButtonSDeudor->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonSDeudorFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSDeudor->SetFont(ButtonSDeudorFont);
	ButtonSAcreedor = new wxButton(this, ID_BUTTON6, _("Saldo Acreedor"), wxPoint(464,296), wxSize(136,31), 0, wxDefaultValidator, _T("ID_BUTTON6"));
	ButtonSAcreedor->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonSAcreedorFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSAcreedor->SetFont(ButtonSAcreedorFont);
	ButtonCSC = new wxButton(this, ID_BUTTON7, _("Cuentas Saldo 0"), wxPoint(736,296), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTON7"));
	ButtonCSC->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonCSCFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonCSC->SetFont(ButtonCSCFont);
	ButtonCalcIntereses = new wxButton(this, ID_BUTTON8, _("Calcular Intereses"), wxPoint(880,136), wxSize(128,32), 0, wxDefaultValidator, _T("ID_BUTTON8"));
	ButtonCalcIntereses->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonCalcInteresesFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonCalcIntereses->SetFont(ButtonCalcInteresesFont);
	Center();

	Connect(ID_BUTTONAGREGARCLIENTE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonAgregarClienteClick);
	Connect(ID_BUTTONMODIFICARCLIENTE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonModificarClienteClick);
	Connect(ID_BUTTONBAJACLIENTE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonBajaClienteClick);
	Connect(ID_BUTTONAGREGARCUENTA,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonAgregarCuentaClick);
	Connect(ID_BUTTONBAJACUENTA,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonBajaCuentaClick);
	Connect(ID_BUTTONMOV,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonMovimientosClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonClientesClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonCAClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonCCClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonMovClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonSDeudorClick);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonSAcreedorClick);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonCSCClick);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonCalcInteresesClick);
	//*)
}

AppPrincipal::~AppPrincipal()
{
	//(*Destroy(AppPrincipal)
	//*)
}


void AppPrincipal::OnButtonAgregarClienteClick(wxCommandEvent& event)
{
    AgregarCliente *frm = new AgregarCliente (this);
    frm->Show();
}

void AppPrincipal::OnButtonBajaClienteClick(wxCommandEvent& event)
{
    BajaCliente *dlg = new BajaCliente (this);
    dlg-> Show();
}

void AppPrincipal::OnButtonAgregarCuentaClick(wxCommandEvent& event)
{
    AgregarCuenta *dlg = new AgregarCuenta (this);
    dlg-> Show();
}

void AppPrincipal::OnButtonBajaCuentaClick(wxCommandEvent& event)
{
    BajaCuenta *dlg = new BajaCuenta (this);
    dlg-> Show();
}

void AppPrincipal::OnButtonModificarClienteClick(wxCommandEvent& event)
{
    ModificarCliente *dlg = new ModificarCliente (this);
    dlg-> Show();
}

void AppPrincipal::OnButtonMovimientosClick(wxCommandEvent& event)
{
    Movimientos *dlg = new Movimientos(this);
    dlg-> Show();
}

void AppPrincipal::OnButtonClientesClick(wxCommandEvent& event)
{
    fstream arch;
    arch.open("Clientes.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Alta de cliente - Banco P&P"));
    }
    arch.close();
    arch.open("Clientes.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Alta de cliente - Banco P&P"));
    }
    ofstream archt;
    Cliente reg;
    archt.open("Clientes.txt",ios::out);
    if(!archt)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Alta de cliente - Banco P&P"));
    }
    archt<<left<<setw(10)<<"DNI"<<setw(25)<<"Nombre"<<setw(25)<<"Apellido"<<setw(40)<<"Dirección"<<setw(10)<<"Telefono"<<endl;

    arch.seekg(0);
    arch.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    while(!arch.eof())
    {
        archt<<left<<setw(10)<<reg.getDni()<<setw(25)<<reg.getNombre()<<setw(25)<<reg.getApellido()<<setw(40)<<reg.getDireccion()<<setw(10)<<reg.getTelefono()<<endl;
        arch.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    }
    archt.close();
    arch.close();
    wxString msg = "Abriendo lista de clientes...";
    wxMessageBox(msg, _("Listados de Banco P&P"));
    system("Clientes.txt");
}

void AppPrincipal::OnButtonCAClick(wxCommandEvent& event)
{
    Cuenta reg;
    fstream arch;
    arch.open("Cuentas.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados- Banco P&P"));
    }
    arch.close();
    arch.open("Cuentas.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
    }

    ofstream archca;
    archca.open("Cajas_de_Ahorro.txt",ios::out);
    if(!archca)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
    }
    archca<<left<<setw(15)<<"Nro de Cuenta"<<setw(15)<<"DNI Titular"<<setw(15)<<"Saldo"<<setw(15)<<"Interes"<<endl;

    ofstream archcc;
    archcc.open("Cuentas_Corrientes.txt",ios::out);
    if(!archca)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
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
    wxString msg = "Abriendo lista de cajas de ahorro...";
    wxMessageBox(msg, _("Listados de Banco P&P"));
    system("Cajas_de_Ahorro.txt");
}

void AppPrincipal::OnButtonCCClick(wxCommandEvent& event)
{
    Cuenta reg;
    fstream arch;
    arch.open("Cuentas.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados- Banco P&P"));
    }
    arch.close();
    arch.open("Cuentas.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
    }

    ofstream archca;
    archca.open("Cajas_de_Ahorro.txt",ios::out);
    if(!archca)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
    }
    archca<<left<<setw(15)<<"Nro de Cuenta"<<setw(15)<<"DNI Titular"<<setw(15)<<"Saldo"<<setw(15)<<"Interes"<<endl;

    ofstream archcc;
    archcc.open("Cuentas_Corrientes.txt",ios::out);
    if(!archca)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
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

    wxString msg = "Abriendo lista de cuentas corrientes...";
    wxMessageBox(msg, _("Listados de Banco P&P"));
    system("Cuentas_Corrientes.txt");
}

void AppPrincipal::OnButtonMovClick(wxCommandEvent& event)
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

    wxString msg = "Abriendo lista de movimientos...";
    wxMessageBox(msg, _("Listados de Banco P&P"));
    system("Movimientos.txt");
}

void AppPrincipal::OnButtonCSCClick(wxCommandEvent& event)
{
    Cuenta reg;
    fstream arch;
    arch.open("Cuentas.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados- Banco P&P"));
    }
    arch.close();
    arch.open("Cuentas.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
    }

    ofstream archT;
    archT.open("Cuentas_Saldo_0.txt",ios::out);
    if(!archT)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
    }
    archT<<left<<setw(15)<<"Nro de Cuenta"<<setw(15)<<"DNI Titular"<<setw(15)<<"Tipo de cuenta"<<endl;

    arch.seekg(0);
    arch.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    while(!arch.eof())
    {

        if (reg.getSaldo()==0)
        {
            const char * TC= (reg.getTipo())?"Caja de Ahorro":"Cuenta Corriente";
            archT<<left<<setw(15)<<reg.getNroCuenta()<<setw(15)<<reg.getDniTitular()<<setw(15)<<TC<<endl;
        }
        arch.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    }
    archT.close();
    arch.close();

    wxString msg = "Abriendo lista de cuentas con saldo 0...";
    wxMessageBox(msg, _("Listados de Banco P&P"));
    system("Cuentas_Saldo_0.txt");
}

void AppPrincipal::OnButtonSAcreedorClick(wxCommandEvent& event)
{
    Cuenta reg;
    fstream arch;
    arch.open("Cuentas.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados- Banco P&P"));
    }
    arch.close();
    arch.open("Cuentas.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
    }

    ofstream archT;
    archT.open("Cuentas_Saldo_Acreedor.txt",ios::out);
    if(!archT)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
    }
    archT<<left<<setw(15)<<"Nro de Cuenta"<<setw(15)<<"DNI Titular"<<setw(20)<<"Tipo de cuenta"<<setw(20)<<"Saldo"<<endl;

    arch.seekg(0);
    arch.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    while(!arch.eof())
    {

        if (reg.getSaldo()>0)
        {
            const char * TC= (reg.getTipo())?"Caja de Ahorro":"Cuenta Corriente";
            archT<<left<<setw(15)<<reg.getNroCuenta()<<setw(15)<<reg.getDniTitular()<<setw(20)<<TC<<setw(20)<<reg.getSaldo()<<endl;
        }
        arch.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    }
    archT.close();
    arch.close();

    wxString msg = "Abriendo lista de cuentas con saldo acreedor...";
    wxMessageBox(msg, _("Listados de Banco P&P"));
    system("Cuentas_Saldo_Acreedor.txt");
}

void AppPrincipal::OnButtonSDeudorClick(wxCommandEvent& event)
{
    Cuenta reg;
    fstream arch;
    arch.open("Cuentas.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados- Banco P&P"));
    }
    arch.close();
    arch.open("Cuentas.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
    }

    ofstream archT;
    archT.open("Cuentas_Corriente_Saldo_Deudor.txt",ios::out);
    if(!archT)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Listados - Banco P&P"));
    }
    archT<<left<<setw(15)<<"Nro de Cuenta"<<setw(15)<<"DNI Titular"<<setw(15)<<setw(15)<<"Saldo"<<endl;

    arch.seekg(0);
    arch.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    while(!arch.eof())
    {
        if (reg.getSaldo()<0 && !reg.getTipo())
            archT<<left<<setw(15)<<reg.getNroCuenta()<<setw(15)<<reg.getDniTitular()<<setw(15)<<reg.getSaldo()<<endl;
        arch.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    }
    archT.close();
    arch.close();

    wxString msg = "Abriendo lista de cuentas con saldo deudor...";
    wxMessageBox(msg, _("Listados de Banco P&P"));
    system("Cuentas_Corriente_Saldo_Deudor.txt");
}

void AppPrincipal::OnButtonCalcInteresesClick(wxCommandEvent& event)
{
    Cuenta reg;
    fstream arch;
    arch.open("Cuentas.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Cálculo de intereses - Banco P&P"));
    }
    arch.close();
    arch.open("Cuentas.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Cálculo de intereses - Banco P&P"));
    }

    ofstream archca;
    archca.open("Cajas_de_Ahorro.txt",ios::out);
    if(!archca)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Alta de Cuentas - Banco P&P"));
    }
    archca<<left<<setw(15)<<"Nro de Cuenta"<<setw(15)<<"DNI Titular"<<setw(15)<<"Saldo"<<setw(15)<<"Interes"<<endl;

    ofstream archcc;
    archcc.open("Cuentas_Corrientes.txt",ios::out);
    if(!archca)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Alta de Cuentas - Banco P&P"));
    }
    archcc<<left<<setw(15)<<"Nro de Cuenta"<<setw(15)<<"DNI Titular"<<setw(15)<<"Saldo"<<setw(15)<<"Interes"<<endl;


    arch.seekg(0);
    arch.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));

    while(!arch.eof())
    {
        double s = reg.getSaldo()*reg.getInteres();
        reg.setSaldo(s);
        if (reg.getTipo())
            archca<<left<<setw(15)<<reg.getNroCuenta()<<setw(15)<<reg.getDniTitular()<<setw(15)<<reg.getSaldo()<<setw(15)<<reg.getInteres()<<endl;
        else
            archcc<<left<<setw(15)<<reg.getNroCuenta()<<setw(15)<<reg.getDniTitular()<<setw(15)<<reg.getSaldo()<<setw(15)<<reg.getInteres()<<endl;

        arch.seekg(-sizeof(Cuenta),ios::cur);
        arch.write(reinterpret_cast<const char *>(&reg),sizeof(Cuenta));
        arch.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    }
    archca.close();
    archcc.close();
    arch.close();
    wxString msg = "Calculando intereses...";
    wxMessageBox(msg, _("Cálculo de intereses - Banco P&P"));

}
