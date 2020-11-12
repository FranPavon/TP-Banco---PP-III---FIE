#include "AgregarCliente.h"
#include "Cliente.h"
#include <fstream>
#include <wx/msgdlg.h>
#include <iomanip>

//(*InternalHeaders(AgregarCliente)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(AgregarCliente)
const long AgregarCliente::ID_STATICTEXT1 = wxNewId();
const long AgregarCliente::ID_TEXTCTRL1 = wxNewId();
const long AgregarCliente::ID_STATICTEXT2 = wxNewId();
const long AgregarCliente::ID_TEXTCTRL2 = wxNewId();
const long AgregarCliente::ID_STATICTEXT3 = wxNewId();
const long AgregarCliente::ID_TEXTCTRL3 = wxNewId();
const long AgregarCliente::ID_STATICTEXT4 = wxNewId();
const long AgregarCliente::ID_TEXTCTRL4 = wxNewId();
const long AgregarCliente::ID_STATICTEXT5 = wxNewId();
const long AgregarCliente::ID_TEXTCTRL5 = wxNewId();
const long AgregarCliente::ID_STATICTEXT6 = wxNewId();
const long AgregarCliente::ID_BUTTONAGREGAR = wxNewId();
const long AgregarCliente::ID_BUTTONSALIR = wxNewId();
//*)

BEGIN_EVENT_TABLE(AgregarCliente,wxFrame)
	//(*EventTable(AgregarCliente)
	//*)
END_EVENT_TABLE()

AgregarCliente::AgregarCliente(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(AgregarCliente)
	Create(parent, id, _("Agregar Cliente"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(480,394));
	Move(wxDefaultPosition);
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(48,48,48));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("DNI"), wxPoint(120,48), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	TextCtrlDNI = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(160,48), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Nombre"), wxPoint(96,96), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	TextCtrlNombre = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(160,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Apellido"), wxPoint(96,144), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	TextCtrlApellido = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(160,144), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Dirección"), wxPoint(88,192), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	TextCtrlDireccion = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxPoint(160,192), wxSize(288,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Teléfono"), wxPoint(96,240), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	TextCtrlTelefono = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxPoint(160,240), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Todos los campos son obligatorios"), wxPoint(128,280), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	ButtonAgregar = new wxButton(this, ID_BUTTONAGREGAR, _("Agregar"), wxPoint(80,328), wxSize(128,32), 0, wxDefaultValidator, _T("ID_BUTTONAGREGAR"));
	ButtonAgregar->SetForegroundColour(wxColour(0,0,0));
	ButtonAgregar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonAgregarFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonAgregar->SetFont(ButtonAgregarFont);
	ButtonSalir = new wxButton(this, ID_BUTTONSALIR, _("Salir"), wxPoint(264,328), wxSize(128,31), 0, wxDefaultValidator, _T("ID_BUTTONSALIR"));
	ButtonSalir->SetForegroundColour(wxColour(0,0,0));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonSalirFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSalir->SetFont(ButtonSalirFont);
	Center();

	Connect(ID_BUTTONAGREGAR,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AgregarCliente::OnButtonAgregarClick);
	Connect(ID_BUTTONSALIR,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AgregarCliente::OnButtonSalirClick);
	//*)
}

AgregarCliente::~AgregarCliente()
{
	//(*Destroy(AgregarCliente)
	//*)
}


void AgregarCliente::OnButtonSalirClick(wxCommandEvent& event)
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
    Close ();
}

void AgregarCliente::OnButtonAgregarClick(wxCommandEvent& event)
{
    Cliente reg,cli;
    fstream arch;
    int d;
    int tel;
    wxString nom;
    wxString ape;
    wxString dir;

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
    wxString str = TextCtrlDNI->GetValue();
    d = wxAtoi(str);
    nom = TextCtrlNombre->GetValue();
    ape = TextCtrlApellido->GetValue();
    dir = TextCtrlDireccion->GetValue();
    str = TextCtrlTelefono->GetValue();
    tel = wxAtoi(str);
    cli.setDni(d);
    cli.buscar(arch);
    if(!arch.eof())
    {
        wxString msg = "Cliente existente, vaya a modificar cliente o revise el ingreso";
        wxMessageBox(msg, _("Alta de cliente - Banco P&P"));
    }
    else
    {
        arch.clear();
        reg.setDni(d);
        reg.setNombre(nom.ToStdString());
        reg.setApellido(ape.ToStdString());
        reg.setDireccion(dir.ToStdString());
        reg.setTelefono(tel);
        reg.setBorrado(0);
        arch.seekp(0,ios::end);
        arch.write(reinterpret_cast<const char *>(&reg),sizeof(Cliente));
        wxString msg = "Alta exitosa";
        wxMessageBox(msg, _("Alta de cliente - Banco P&P"));
    }
     arch.close();
     TextCtrlDNI->Clear();
     TextCtrlNombre->Clear();
     TextCtrlApellido->Clear();
     TextCtrlDireccion->Clear();
     TextCtrlTelefono->Clear();
}
