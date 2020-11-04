#include "ModificarCliente.h"

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
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(64,64), wxSize(120,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	wxFont TextCtrl1Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	TextCtrl1->SetFont(TextCtrl1Font);
	ButtonBuscar = new wxButton(this, ID_BUTTON1, _("Buscar"), wxPoint(208,64), wxSize(120,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	ButtonBuscar->SetBackgroundColour(wxColour(0,128,128));
	Choice1 = new wxChoice(this, ID_CHOICE1, wxPoint(248,184), wxSize(144,26), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	Choice1->Append(_("DNI"));
	Choice1->Append(_("Nombre"));
	Choice1->Append(_("Apellido"));
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

	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ModificarCliente::OnButtonSalirClick);
	//*)
}

ModificarCliente::~ModificarCliente()
{
	//(*Destroy(ModificarCliente)
	//*)
}




void ModificarCliente::OnButtonSalirClick(wxCommandEvent& event)
{
    Close();
}
