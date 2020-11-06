#include "BajaCliente.h"
#include "Cliente.h"
#include <fstream>
#include <wx/msgdlg.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

//(*InternalHeaders(BajaCliente)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(BajaCliente)
const long BajaCliente::ID_STATICTEXT1 = wxNewId();
const long BajaCliente::ID_BUTTONCONFIRMAR = wxNewId();
const long BajaCliente::ID_BUTTONSALIR = wxNewId();
const long BajaCliente::ID_STATICTEXT2 = wxNewId();
const long BajaCliente::ID_TEXTCTRL1 = wxNewId();
const long BajaCliente::ID_BUTTON1 = wxNewId();
const long BajaCliente::ID_STATICTEXT3 = wxNewId();
const long BajaCliente::ID_STATICTEXT4 = wxNewId();
const long BajaCliente::ID_STATICTEXT5 = wxNewId();
const long BajaCliente::ID_STATICTEXT6 = wxNewId();
const long BajaCliente::ID_STATICTEXT7 = wxNewId();
const long BajaCliente::ID_STATICTEXT8 = wxNewId();
//*)

BEGIN_EVENT_TABLE(BajaCliente,wxDialog)
	//(*EventTable(BajaCliente)
	//*)
END_EVENT_TABLE()

BajaCliente::BajaCliente(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(BajaCliente)
	Create(parent, id, _("Baja de Cliente"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(400,256));
	Move(wxDefaultPosition);
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(48,48,48));
	wxFont thisFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Desea eliminar al cliente, con todas sus cuentas\?"), wxPoint(64,32), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->Hide();
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	ButtonConfirmar = new wxButton(this, ID_BUTTONCONFIRMAR, _("Confirmar"), wxPoint(56,200), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTONCONFIRMAR"));
	ButtonConfirmar->Hide();
	ButtonConfirmar->SetForegroundColour(wxColour(0,0,0));
	ButtonConfirmar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonConfirmarFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonConfirmar->SetFont(ButtonConfirmarFont);
	ButtonSalir = new wxButton(this, ID_BUTTONSALIR, _("Salir"), wxPoint(208,200), wxSize(136,31), 0, wxDefaultValidator, _T("ID_BUTTONSALIR"));
	ButtonSalir->SetForegroundColour(wxColour(0,0,0));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonSalirFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonSalir->SetFont(ButtonSalirFont);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Ingrese el DNI del cliente a dar de BAJA:"), wxPoint(104,16), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	TextCtrlDNI = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(88,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	ButtonBuscar = new wxButton(this, ID_BUTTON1, _("Buscar"), wxPoint(208,56), wxSize(112,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	ButtonBuscar->SetBackgroundColour(wxColour(0,128,128));
	wxFont ButtonBuscarFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	ButtonBuscar->SetFont(ButtonBuscarFont);
	StaticTextDNI = new wxStaticText(this, ID_STATICTEXT3, _("DNI"), wxPoint(184,88), wxSize(136,21), 0, _T("ID_STATICTEXT3"));
	StaticTextDNI->Hide();
	wxFont StaticTextDNIFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextDNI->SetFont(StaticTextDNIFont);
	StaticTextNombre = new wxStaticText(this, ID_STATICTEXT4, _("Nombre"), wxPoint(184,120), wxSize(136,21), 0, _T("ID_STATICTEXT4"));
	StaticTextNombre->Hide();
	wxFont StaticTextNombreFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextNombre->SetFont(StaticTextNombreFont);
	StaticTextApellido = new wxStaticText(this, ID_STATICTEXT5, _("Apellido"), wxPoint(184,152), wxSize(136,21), 0, _T("ID_STATICTEXT5"));
	StaticTextApellido->Hide();
	wxFont StaticTextApellidoFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticTextApellido->SetFont(StaticTextApellidoFont);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT6, _("DNI:"), wxPoint(72,88), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	StaticText3->Hide();
	StaticText4 = new wxStaticText(this, ID_STATICTEXT7, _("Nombre:"), wxPoint(72,120), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	StaticText4->Hide();
	StaticText5 = new wxStaticText(this, ID_STATICTEXT8, _("Apellido:"), wxPoint(72,152), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	StaticText5->Hide();

	Connect(ID_BUTTONCONFIRMAR,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BajaCliente::OnButtonConfirmarClick);
	Connect(ID_BUTTONSALIR,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BajaCliente::OnButtonSalirClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BajaCliente::OnButtonBuscarClick);
	//*)
}

BajaCliente::~BajaCliente()
{
	//(*Destroy(BajaCliente)
	//*)
}


void BajaCliente::OnButtonSalirClick(wxCommandEvent& event)
{
    fstream arch;
    arch.open("Clientes.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Baja de cliente - Banco P&P"));
    }
    arch.close();
    arch.open("Clientes.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Baja de cliente - Banco P&P"));
    }

    fstream archCopia;
    archCopia.open("ClientesCopia.dat",ios::app|ios::binary);
    if(!archCopia)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Baja de cliente - Banco P&P"));
    }
    archCopia.close();
    archCopia.open("ClientesCopia.dat",ios::in|ios::out |ios::binary);
    if(!archCopia)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Baja de cliente - Banco P&P"));
    }
    ofstream archt;
    Cliente reg;
    archt.open("Clientes.txt",ios::out);
    if(!archt)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Baja de cliente - Banco P&P"));
    }
    archt<<left<<setw(10)<<"DNI"<<setw(25)<<"Nombre"<<setw(25)<<"Apellido"<<setw(40)<<"Dirección"<<setw(10)<<"Telefono"<<endl;

    arch.seekg(0);
    arch.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    while(!arch.eof())
    {
        if(!reg.getBorrado())
        {
            archt<<left<<setw(10)<<reg.getDni()<<setw(25)<<reg.getNombre()<<setw(25)<<reg.getApellido()<<setw(40)<<reg.getDireccion()<<setw(10)<<reg.getTelefono()<<endl;
            archCopia.write(reinterpret_cast<const char *>(&reg),sizeof(Cliente));
        }
        arch.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    }
    archt.close();
    arch.close();
    archCopia.close();
    char nombreViejo[]="ClientesCopia.dat";
    char nombreNuevo[]="Clientes.dat";
    remove(nombreNuevo);
    rename(nombreViejo,nombreNuevo);
    Close ();
}


void BajaCliente::OnButtonBuscarClick(wxCommandEvent& event)
{
    Cliente reg,cli;
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
        wxMessageBox(msg, _("Baja de cliente - Banco P&P"));
    }
    wxString str = TextCtrlDNI->GetValue();
    int d = wxAtoi(str);
    cli.setDni(d);
    cli.buscar(arch);
    if(!arch.eof())//SI EXISTE PUEDO CARGAR LA INFORMACION
    {
        arch.seekg(-sizeof(Cliente),ios::cur);
        arch.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));

        TextCtrlDNI->Hide();
        StaticText2->Hide();
        ButtonBuscar->Hide();

        ButtonConfirmar->Show();
        StaticText1->Show();
        StaticText3->Show();
        StaticText4->Show();
        StaticText5->Show();

        StaticTextDNI->Show();
        StaticTextDNI->SetLabel(str);
        StaticTextNombre->Show();
        StaticTextNombre->SetLabel(reg.getNombre());
        StaticTextApellido->Show();
        StaticTextApellido->SetLabel(reg.getApellido());

    }
    else //si no existe reintento
    {
        wxString msg = "Cliente inexistente, reintente.";
        wxMessageBox(msg, _("Baja de cliente - Banco P&P"));
        TextCtrlDNI->Clear();
    }
    arch.close();
}

void BajaCliente::OnButtonConfirmarClick(wxCommandEvent& event)
{
    Cliente reg,cli;
    fstream arch;
    arch.open("Clientes.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Baja de cliente - Banco P&P"));
    }
    wxString str = StaticTextDNI->GetLabel();
    int d = wxAtoi(str);
    cli.setDni(d);
    cli.buscar(arch);
    arch.seekg(-sizeof(Cliente),ios::cur);
    arch.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    reg.setBorrado(true);
    arch.seekg(-sizeof(Cliente),ios::cur);
    arch.write(reinterpret_cast<const char *>(&reg),sizeof(Cliente));
    arch.close();

    wxString msg = "Baja exitosa";
    wxMessageBox(msg, _("Baja de cliente - Banco P&P"));

    TextCtrlDNI->Show();
    TextCtrlDNI->Clear();
    StaticText2->Show();
    ButtonBuscar->Show();

    ButtonConfirmar->Hide();
    StaticText1->Hide();
    StaticText3->Hide();
    StaticText4->Hide();
    StaticText5->Hide();
    StaticTextDNI->Hide();
    StaticTextApellido->Hide();
    StaticTextNombre->Hide();

}

