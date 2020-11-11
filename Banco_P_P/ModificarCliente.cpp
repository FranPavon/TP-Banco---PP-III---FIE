#include "ModificarCliente.h"
#include "Cliente.h"
#include <fstream>
#include <wx/msgdlg.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

//(*InternalHeaders(ModificarCliente)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ModificarCliente)
const long ModificarCliente::ID_STATICTEXT1 = wxNewId();
const long ModificarCliente::ID_TEXTCTRL1 = wxNewId();
const long ModificarCliente::ID_BUTTON1 = wxNewId();
const long ModificarCliente::ID_CHOICE1 = wxNewId();
const long ModificarCliente::ID_STATICTEXT2 = wxNewId();
const long ModificarCliente::ID_TEXTCTRL2 = wxNewId();
const long ModificarCliente::ID_STATICTEXT3 = wxNewId();
const long ModificarCliente::ID_STATICTEXT4 = wxNewId();
const long ModificarCliente::ID_BUTTON2 = wxNewId();
const long ModificarCliente::ID_BUTTON3 = wxNewId();
const long ModificarCliente::ID_STATICTEXT5 = wxNewId();
const long ModificarCliente::ID_STATICTEXT6 = wxNewId();
const long ModificarCliente::ID_STATICTEXT7 = wxNewId();
const long ModificarCliente::ID_STATICTEXT8 = wxNewId();
const long ModificarCliente::ID_STATICTEXT9 = wxNewId();
const long ModificarCliente::ID_STATICTEXT10 = wxNewId();
const long ModificarCliente::ID_STATICTEXT11 = wxNewId();
const long ModificarCliente::ID_STATICTEXT12 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ModificarCliente,wxDialog)
	//(*EventTable(ModificarCliente)
	//*)
END_EVENT_TABLE()

ModificarCliente::ModificarCliente(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(ModificarCliente)
	Create(parent, id, _("Modificar Cliente"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(400,312));
	Move(wxDefaultPosition);
	SetForegroundColour(wxColour(0,128,128));
	SetBackgroundColour(wxColour(32,32,32));
	wxFont thisFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Inserte el DNI del cliente a MODIFICAR:"), wxPoint(88,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	TextCtrlDNI = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(64,64), wxSize(120,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	wxFont TextCtrlDNIFont(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	TextCtrlDNI->SetFont(TextCtrlDNIFont);
	ButtonBuscar = new wxButton(this, ID_BUTTON1, _("Buscar"), wxPoint(208,64), wxSize(120,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	ButtonBuscar->SetBackgroundColour(wxColour(0,128,128));
	Choice1 = new wxChoice(this, ID_CHOICE1, wxPoint(248,184), wxSize(144,26), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	Choice1->Append(_("Dirección"));
	Choice1->Append(_("Telefono"));
	Choice1->Hide();
	wxFont Choice1Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	Choice1->SetFont(Choice1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Seleccione la información a modificar:"), wxPoint(24,184), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText2->Hide();
	TextCtrlInfo = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(48,216), wxSize(320,25), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrlInfo->Hide();
	wxFont TextCtrlInfoFont(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	TextCtrlInfo->SetFont(TextCtrlInfoFont);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("DNI:"), wxPoint(48,24), wxSize(48,25), 0, _T("ID_STATICTEXT3"));
	StaticText3->Hide();
	StaticTextDNI = new wxStaticText(this, ID_STATICTEXT4, _("DNI BUSCADO"), wxPoint(152,24), wxSize(176,25), 0, _T("ID_STATICTEXT4"));
	StaticTextDNI->Hide();
	ButtonSalir = new wxButton(this, ID_BUTTON2, _("Salir"), wxPoint(216,256), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	ButtonSalir->SetBackgroundColour(wxColour(0,128,128));
	ButtonConfirmar = new wxButton(this, ID_BUTTON3, _("Confirmar"), wxPoint(40,256), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	ButtonConfirmar->Hide();
	ButtonConfirmar->SetBackgroundColour(wxColour(0,128,128));
	StaticText4 = new wxStaticText(this, ID_STATICTEXT5, _("Dirección:"), wxPoint(48,120), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticText4->Hide();
	StaticTextDireccion = new wxStaticText(this, ID_STATICTEXT6, _("Label"), wxPoint(152,120), wxSize(224,25), 0, _T("ID_STATICTEXT6"));
	StaticTextDireccion->Hide();
	StaticText6 = new wxStaticText(this, ID_STATICTEXT7, _("Apellido:"), wxPoint(48,88), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	StaticText6->Hide();
	StaticTextApellido = new wxStaticText(this, ID_STATICTEXT8, _("Label"), wxPoint(152,88), wxSize(224,25), 0, _T("ID_STATICTEXT8"));
	StaticTextApellido->Hide();
	StaticText8 = new wxStaticText(this, ID_STATICTEXT9, _("Teléfono:"), wxPoint(48,152), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	StaticText8->Hide();
	StaticTextTelefono = new wxStaticText(this, ID_STATICTEXT10, _("Label"), wxPoint(152,152), wxSize(104,25), 0, _T("ID_STATICTEXT10"));
	StaticTextTelefono->Hide();
	StaticText10 = new wxStaticText(this, ID_STATICTEXT11, _("Nombre:"), wxPoint(48,56), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	StaticText10->Hide();
	StaticTextNombre = new wxStaticText(this, ID_STATICTEXT12, _("Label"), wxPoint(152,56), wxSize(224,25), 0, _T("ID_STATICTEXT12"));
	StaticTextNombre->Hide();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ModificarCliente::OnButtonBuscarClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ModificarCliente::OnButtonSalirClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ModificarCliente::OnButtonConfirmarClick);
	//*)
}

ModificarCliente::~ModificarCliente()
{
	//(*Destroy(ModificarCliente)
	//*)
}




void ModificarCliente::OnButtonSalirClick(wxCommandEvent& event)
{
    fstream arch;
    arch.open("Clientes.dat",ios::app|ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Modificación de cliente - Banco P&P"));
    }
    arch.close();
    arch.open("Clientes.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Modificación de cliente - Banco P&P"));
    }
    ofstream archt;
    Cliente reg;
    archt.open("Clientes.txt",ios::out);
    if(!archt)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Modificación de cliente - Banco P&P"));
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

void ModificarCliente::OnButtonBuscarClick(wxCommandEvent& event)
{
    Cliente reg,cli;
    fstream arch;
    int d;
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
    cli.setDni(d);
    cli.buscar(arch);
    if(!arch.eof())//SI EXISTE PUEDO MODIFICAR
    {
        arch.seekg(-sizeof(Cliente),ios::cur);
        arch.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));

        TextCtrlDNI->Hide();
        StaticText1->Hide();
        ButtonBuscar->Hide();

        ButtonConfirmar->Show();
        StaticText2->Show();
        StaticText3->Show();
        StaticText4->Show();
        StaticText6->Show();
        StaticText8->Show();
        StaticText10->Show();
        StaticTextDNI->Show();
        StaticTextDNI->SetLabel(str);
        StaticTextNombre->Show();
        StaticTextNombre->SetLabel(reg.getNombre());
        StaticTextApellido->Show();
        StaticTextApellido->SetLabel(reg.getApellido());
        StaticTextDireccion->Show();
        StaticTextDireccion->SetLabel(reg.getDireccion());
        StaticTextTelefono->Show();
        int t =reg.getTelefono();
        string ts = to_string(t);
        StaticTextTelefono->SetLabel(ts);
        Choice1->Show();
        TextCtrlInfo->Show();
    }
    else //si no existe reintento
    {
        wxString msg = "Cliente inexistente, reintente o de la alta del mismo.";
        wxMessageBox(msg, _("Modificación de cliente - Banco P&P"));
        TextCtrlDNI->Clear();
    }
    arch.close();
}

void ModificarCliente::OnButtonConfirmarClick(wxCommandEvent& event)
{
    Cliente reg,cli;
    fstream arch;
    arch.open("Clientes.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        wxString msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("Alta de cliente - Banco P&P"));
    }
    wxString str = StaticTextDNI->GetLabel();
    int d = wxAtoi(str);
    cli.setDni(d);
    cli.buscar(arch);
    arch.seekg(-sizeof(Cliente),ios::cur);
    arch.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    str = TextCtrlInfo->GetValue();
    if (Choice1->GetSelection()==0)
        reg.setDireccion(str.ToStdString());
    else
    {
        int t;
        t = wxAtoi(str);
        reg.setTelefono(t);
    }
    arch.seekg(-sizeof(Cliente),ios::cur);
    arch.write(reinterpret_cast<const char *>(&reg),sizeof(Cliente));
    arch.close();

    wxString msg = "Modificación exitosa";
    wxMessageBox(msg, _("Modificación de cliente - Banco P&P"));

    TextCtrlDNI->Show();
    TextCtrlDNI->Clear();
    StaticText1->Show();
    ButtonBuscar->Show();

    ButtonConfirmar->Hide();
    StaticText2->Hide();
    StaticText3->Hide();
    StaticText4->Hide();
    StaticText6->Hide();
    StaticText8->Hide();
    StaticText10->Hide();
    StaticTextDNI->Hide();
    StaticTextNombre->Hide();
    StaticTextApellido->Hide();
    StaticTextDireccion->Hide();
    StaticTextTelefono->Hide();
    Choice1->Hide();
    TextCtrlInfo->Hide();
    TextCtrlInfo->Clear();
}
