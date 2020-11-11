#include "AppPrincipal.h"
#include "AgregarCliente.h"
#include "BajaCliente.h"
#include "ModificarCliente.h"
#include "AgregarCuenta.h"
#include "BajaCuenta.h"
#include "Movimientos.h"
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
//*)

BEGIN_EVENT_TABLE(AppPrincipal,wxFrame)
	//(*EventTable(AppPrincipal)
	//*)
END_EVENT_TABLE()

AppPrincipal::AppPrincipal(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(AppPrincipal)
	Create(parent, wxID_ANY, _("Banco P&P"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(1053,340));
	Hide();
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(32,32,32));
	StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Clientes"), wxPoint(32,48), wxSize(456,144), 0, _T("ID_STATICBOX1"));
	StaticBox1->SetForegroundColour(wxColour(255,255,255));
	StaticBox1->SetBackgroundColour(wxColour(96,96,96));
	wxFont StaticBox1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox1->SetFont(StaticBox1Font);
	StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Cuentas"), wxPoint(576,48), wxSize(448,144), 0, _T("ID_STATICBOX2"));
	StaticBox2->SetForegroundColour(wxColour(255,255,255));
	StaticBox2->SetBackgroundColour(wxColour(96,96,96));
	wxFont StaticBox2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox2->SetFont(StaticBox2Font);
	ButtonAgregarCliente = new wxButton(this, ID_BUTTONAGREGARCLIENTE, _("Agregar"), wxPoint(80,80), wxSize(128,32), 0, wxDefaultValidator, _T("ID_BUTTONAGREGARCLIENTE"));
	ButtonAgregarCliente->SetForegroundColour(wxColour(0,0,0));
	ButtonAgregarCliente->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonAgregarClienteFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonAgregarCliente->SetFont(ButtonAgregarClienteFont);
	ButtonModificarCliente = new wxButton(this, ID_BUTTONMODIFICARCLIENTE, _("Modificar"), wxPoint(304,80), wxSize(128,32), 0, wxDefaultValidator, _T("ID_BUTTONMODIFICARCLIENTE"));
	ButtonModificarCliente->SetForegroundColour(wxColour(0,0,0));
	ButtonModificarCliente->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonModificarClienteFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonModificarCliente->SetFont(ButtonModificarClienteFont);
	ButtonBajaCliente = new wxButton(this, ID_BUTTONBAJACLIENTE, _("Baja"), wxPoint(192,136), wxSize(128,32), 0, wxDefaultValidator, _T("ID_BUTTONBAJACLIENTE"));
	ButtonBajaCliente->SetForegroundColour(wxColour(0,0,0));
	ButtonBajaCliente->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonBajaClienteFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonBajaCliente->SetFont(ButtonBajaClienteFont);
	ButtonAgregarCuenta = new wxButton(this, ID_BUTTONAGREGARCUENTA, _("Agregar"), wxPoint(624,80), wxSize(128,32), 0, wxDefaultValidator, _T("ID_BUTTONAGREGARCUENTA"));
	ButtonAgregarCuenta->SetForegroundColour(wxColour(0,0,0));
	ButtonAgregarCuenta->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonAgregarCuentaFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonAgregarCuenta->SetFont(ButtonAgregarCuentaFont);
	ButtonBajaCuenta = new wxButton(this, ID_BUTTONBAJACUENTA, _("Baja"), wxPoint(736,136), wxSize(128,32), 0, wxDefaultValidator, _T("ID_BUTTONBAJACUENTA"));
	ButtonBajaCuenta->SetForegroundColour(wxColour(0,0,0));
	ButtonBajaCuenta->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonBajaCuentaFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonBajaCuenta->SetFont(ButtonBajaCuentaFont);
	ButtonMovimientos = new wxButton(this, ID_BUTTONMOV, _("Movimientos"), wxPoint(848,80), wxSize(128,32), 0, wxDefaultValidator, _T("ID_BUTTONMOV"));
	ButtonMovimientos->SetForegroundColour(wxColour(0,0,0));
	ButtonMovimientos->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonMovimientosFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonMovimientos->SetFont(ButtonMovimientosFont);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Sistema de administración de clientes, cuentas y moviemientos - Banco P and P"), wxPoint(304,8), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticBoxListados = new wxStaticBox(this, ID_STATICBOX3, _("Listados"), wxPoint(32,216), wxSize(992,88), 0, _T("ID_STATICBOX3"));
	StaticBoxListados->SetForegroundColour(wxColour(255,255,255));
	StaticBoxListados->SetBackgroundColour(wxColour(96,96,96));
	wxFont StaticBoxListadosFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBoxListados->SetFont(StaticBoxListadosFont);
	ButtonClientes = new wxButton(this, ID_BUTTON1, _("Clientes"), wxPoint(96,248), wxSize(128,31), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	ButtonClientes->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonClientesFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonClientes->SetFont(ButtonClientesFont);
	ButtonCA = new wxButton(this, ID_BUTTON2, _("Cajas de Ahorro"), wxPoint(344,248), wxSize(128,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	ButtonCA->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonCAFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonCA->SetFont(ButtonCAFont);
	ButtonCC = new wxButton(this, ID_BUTTON3, _("Cuentas Corriente"), wxPoint(592,248), wxSize(128,32), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	ButtonCC->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonCCFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonCC->SetFont(ButtonCCFont);
	ButtonMov = new wxButton(this, ID_BUTTON4, _("Movimientos"), wxPoint(840,248), wxSize(128,32), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	ButtonMov->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonMovFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonMov->SetFont(ButtonMovFont);
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
    wxString msg = "Abriendo lista de clientes...";
    wxMessageBox(msg, _("Listados de Banco P&P"));
    system("Clientes.txt");
}

void AppPrincipal::OnButtonCAClick(wxCommandEvent& event)
{
    wxString msg = "Abriendo lista de cajas de ahorro...";
    wxMessageBox(msg, _("Listados de Banco P&P"));
    system("Cajas_de_Ahorro.txt");
}

void AppPrincipal::OnButtonCCClick(wxCommandEvent& event)
{
    wxString msg = "Abriendo lista de cuentas corrientes...";
    wxMessageBox(msg, _("Listados de Banco P&P"));
    system("Cuentas_Corrientes.txt");
}
