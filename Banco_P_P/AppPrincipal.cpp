#include "AppPrincipal.h"
#include "AgregarCliente.h"
#include "BajaCliente.h"
#include "AgregarCuenta.h"
#include "Deposito.h"
#include "Extraccion.h"

//(*InternalHeaders(AppPrincipal)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(AppPrincipal)
const long AppPrincipal::ID_STATICBOX1 = wxNewId();
const long AppPrincipal::ID_STATICBOX2 = wxNewId();
const long AppPrincipal::ID_STATICBOX3 = wxNewId();
const long AppPrincipal::ID_BUTTONAGREGARCLIENTE = wxNewId();
const long AppPrincipal::ID_BUTTONMODIFICARCLIENTE = wxNewId();
const long AppPrincipal::ID_BUTTONBAJACLIENTE = wxNewId();
const long AppPrincipal::ID_BUTTONAGREGARCUENTA = wxNewId();
const long AppPrincipal::ID_BUTTONBAJACUENTA = wxNewId();
const long AppPrincipal::ID_BUTTONEXTRACCION = wxNewId();
const long AppPrincipal::ID_BUTTONDEPOSITO = wxNewId();
const long AppPrincipal::ID_LISTVIEW1 = wxNewId();
const long AppPrincipal::ID_LISTCTRL1 = wxNewId();
const long AppPrincipal::ID_LISTVIEW2 = wxNewId();
const long AppPrincipal::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AppPrincipal,wxFrame)
	//(*EventTable(AppPrincipal)
	//*)
END_EVENT_TABLE()

AppPrincipal::AppPrincipal(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(AppPrincipal)
	Create(parent, wxID_ANY, _("Banco P&P"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(1053,468));
	Hide();
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(32,32,32));
	StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Clientes"), wxPoint(32,48), wxSize(456,400), 0, _T("ID_STATICBOX1"));
	StaticBox1->SetForegroundColour(wxColour(255,255,255));
	StaticBox1->SetBackgroundColour(wxColour(96,96,96));
	wxFont StaticBox1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox1->SetFont(StaticBox1Font);
	StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Cuentas"), wxPoint(584,48), wxSize(432,184), 0, _T("ID_STATICBOX2"));
	StaticBox2->SetForegroundColour(wxColour(255,255,255));
	StaticBox2->SetBackgroundColour(wxColour(96,96,96));
	wxFont StaticBox2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox2->SetFont(StaticBox2Font);
	StaticBox3 = new wxStaticBox(this, ID_STATICBOX3, _("Movimientos"), wxPoint(584,248), wxSize(432,200), 0, _T("ID_STATICBOX3"));
	StaticBox3->SetForegroundColour(wxColour(255,255,255));
	StaticBox3->SetBackgroundColour(wxColour(96,96,96));
	wxFont StaticBox3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox3->SetFont(StaticBox3Font);
	ButtonAgregarCliente = new wxButton(this, ID_BUTTONAGREGARCLIENTE, _("Agregar"), wxPoint(64,88), wxSize(104,32), 0, wxDefaultValidator, _T("ID_BUTTONAGREGARCLIENTE"));
	ButtonAgregarCliente->SetForegroundColour(wxColour(0,0,0));
	ButtonAgregarCliente->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonAgregarClienteFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonAgregarCliente->SetFont(ButtonAgregarClienteFont);
	ButtonModificarCliente = new wxButton(this, ID_BUTTONMODIFICARCLIENTE, _("Modificar"), wxPoint(208,88), wxSize(104,32), 0, wxDefaultValidator, _T("ID_BUTTONMODIFICARCLIENTE"));
	ButtonModificarCliente->SetForegroundColour(wxColour(0,0,0));
	ButtonModificarCliente->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonModificarClienteFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonModificarCliente->SetFont(ButtonModificarClienteFont);
	ButtonBajaCliente = new wxButton(this, ID_BUTTONBAJACLIENTE, _("Baja"), wxPoint(344,88), wxSize(104,32), 0, wxDefaultValidator, _T("ID_BUTTONBAJACLIENTE"));
	ButtonBajaCliente->SetForegroundColour(wxColour(0,0,0));
	ButtonBajaCliente->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonBajaClienteFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonBajaCliente->SetFont(ButtonBajaClienteFont);
	ButtonAgregarCuenta = new wxButton(this, ID_BUTTONAGREGARCUENTA, _("Agregar"), wxPoint(616,72), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTONAGREGARCUENTA"));
	ButtonAgregarCuenta->SetForegroundColour(wxColour(0,0,0));
	ButtonAgregarCuenta->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonAgregarCuentaFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonAgregarCuenta->SetFont(ButtonAgregarCuentaFont);
	ButtonBajaCuenta = new wxButton(this, ID_BUTTONBAJACUENTA, _("Baja"), wxPoint(728,72), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTONBAJACUENTA"));
	ButtonBajaCuenta->SetForegroundColour(wxColour(0,0,0));
	ButtonBajaCuenta->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonBajaCuentaFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonBajaCuenta->SetFont(ButtonBajaCuentaFont);
	ButtonExtraccion = new wxButton(this, ID_BUTTONEXTRACCION, _("Extracción"), wxPoint(728,272), wxSize(76,32), 0, wxDefaultValidator, _T("ID_BUTTONEXTRACCION"));
	ButtonExtraccion->SetForegroundColour(wxColour(0,0,0));
	ButtonExtraccion->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonExtraccionFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonExtraccion->SetFont(ButtonExtraccionFont);
	ButtonDeposito = new wxButton(this, ID_BUTTONDEPOSITO, _("Depósito"), wxPoint(616,272), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTONDEPOSITO"));
	ButtonDeposito->SetForegroundColour(wxColour(0,0,0));
	ButtonDeposito->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonDepositoFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonDeposito->SetFont(ButtonDepositoFont);
	ListView1 = new wxListView(this, ID_LISTVIEW1, wxPoint(64,136), wxSize(392,280), wxLC_LIST, wxDefaultValidator, _T("ID_LISTVIEW1"));
	ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxPoint(608,112), wxSize(384,96), wxLC_LIST, wxDefaultValidator, _T("ID_LISTCTRL1"));
	ListView2 = new wxListView(this, ID_LISTVIEW2, wxPoint(608,320), wxSize(384,104), wxLC_LIST, wxDefaultValidator, _T("ID_LISTVIEW2"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Sistema de administración de clientes, cuentas y moviemientos - Banco P and P"), wxPoint(304,8), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	Center();

	Connect(ID_BUTTONAGREGARCLIENTE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonAgregarClienteClick);
	Connect(ID_BUTTONMODIFICARCLIENTE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButton2Click);
	Connect(ID_BUTTONBAJACLIENTE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonBajaClienteClick);
	Connect(ID_BUTTONAGREGARCUENTA,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonAgregarCuentaClick);
	Connect(ID_BUTTONEXTRACCION,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonExtraccionClick);
	Connect(ID_BUTTONDEPOSITO,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButtonDepositoClick);
	//*)
}

AppPrincipal::~AppPrincipal()
{
	//(*Destroy(AppPrincipal)
	//*)
}


void AppPrincipal::OnButton1Click(wxCommandEvent& event)
{
}

void AppPrincipal::OnButton2Click(wxCommandEvent& event)
{
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

void AppPrincipal::OnButtonDepositoClick(wxCommandEvent& event)
{
    Deposito *dlg = new Deposito(this);
    dlg-> Show();
}

void AppPrincipal::OnButtonExtraccionClick(wxCommandEvent& event)
{
    Extraccion *dlg = new Extraccion(this);
    dlg-> Show();
}
