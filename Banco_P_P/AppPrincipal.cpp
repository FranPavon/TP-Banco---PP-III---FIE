#include "AppPrincipal.h"

//(*InternalHeaders(AppPrincipal)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(AppPrincipal)
const long AppPrincipal::ID_STATICBOX1 = wxNewId();
const long AppPrincipal::ID_STATICBOX2 = wxNewId();
const long AppPrincipal::ID_STATICBOX3 = wxNewId();
const long AppPrincipal::ID_BUTTON1 = wxNewId();
const long AppPrincipal::ID_BUTTON2 = wxNewId();
const long AppPrincipal::ID_BUTTON3 = wxNewId();
const long AppPrincipal::ID_BUTTON4 = wxNewId();
const long AppPrincipal::ID_BUTTON5 = wxNewId();
const long AppPrincipal::ID_BUTTON6 = wxNewId();
const long AppPrincipal::ID_BUTTON7 = wxNewId();
const long AppPrincipal::ID_LISTVIEW1 = wxNewId();
const long AppPrincipal::ID_LISTCTRL1 = wxNewId();
const long AppPrincipal::ID_LISTVIEW2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AppPrincipal,wxFrame)
	//(*EventTable(AppPrincipal)
	//*)
END_EVENT_TABLE()

AppPrincipal::AppPrincipal(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(AppPrincipal)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(1053,468));
	Hide();
	StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Clientes"), wxPoint(32,48), wxSize(456,400), 0, _T("ID_STATICBOX1"));
	wxFont StaticBox1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox1->SetFont(StaticBox1Font);
	StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Cuentas"), wxPoint(584,48), wxSize(432,184), 0, _T("ID_STATICBOX2"));
	wxFont StaticBox2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox2->SetFont(StaticBox2Font);
	StaticBox3 = new wxStaticBox(this, ID_STATICBOX3, _("Movimientos"), wxPoint(584,248), wxSize(432,200), 0, _T("ID_STATICBOX3"));
	wxFont StaticBox3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox3->SetFont(StaticBox3Font);
	Button1 = new wxButton(this, ID_BUTTON1, _("Agregar"), wxPoint(64,88), wxSize(104,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUHILIGHT));
	Button2 = new wxButton(this, ID_BUTTON2, _("Modificar"), wxPoint(208,88), wxSize(104,23), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUHILIGHT));
	Button3 = new wxButton(this, ID_BUTTON3, _("Baja"), wxPoint(344,88), wxSize(104,23), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	Button3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUHILIGHT));
	Button4 = new wxButton(this, ID_BUTTON4, _("Agregar"), wxPoint(616,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	Button4->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUHILIGHT));
	Button5 = new wxButton(this, ID_BUTTON5, _("Baja"), wxPoint(728,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	Button5->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUHILIGHT));
	Button6 = new wxButton(this, ID_BUTTON6, _("Extracción"), wxPoint(736,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	Button6->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUHILIGHT));
	Button7 = new wxButton(this, ID_BUTTON7, _("Depósito"), wxPoint(616,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	Button7->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUHILIGHT));
	ListView1 = new wxListView(this, ID_LISTVIEW1, wxPoint(64,136), wxSize(392,280), wxLC_LIST, wxDefaultValidator, _T("ID_LISTVIEW1"));
	ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxPoint(608,104), wxSize(384,104), wxLC_LIST, wxDefaultValidator, _T("ID_LISTCTRL1"));
	ListView2 = new wxListView(this, ID_LISTVIEW2, wxPoint(608,304), wxSize(384,120), wxLC_LIST, wxDefaultValidator, _T("ID_LISTVIEW2"));
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AppPrincipal::OnButton2Click);
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
