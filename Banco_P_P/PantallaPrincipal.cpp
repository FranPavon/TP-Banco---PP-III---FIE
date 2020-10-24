#include "PantallaPrincipal.h"

//(*InternalHeaders(PantallaPrincipal)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(PantallaPrincipal)
const long PantallaPrincipal::ID_STATICBOX1 = wxNewId();
const long PantallaPrincipal::ID_STATICBOX2 = wxNewId();
const long PantallaPrincipal::ID_BUTTON1 = wxNewId();
const long PantallaPrincipal::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(PantallaPrincipal,wxFrame)
	//(*EventTable(PantallaPrincipal)
	//*)
END_EVENT_TABLE()

PantallaPrincipal::PantallaPrincipal(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(PantallaPrincipal)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(837,471));
	Hide();
	SetBackgroundColour(wxColour(32,32,32));
	StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Clientes"), wxPoint(32,40), wxSize(392,232), 0, _T("ID_STATICBOX1"));
	StaticBox1->SetBackgroundColour(wxColour(96,96,96));
	wxFont StaticBox1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox1->SetFont(StaticBox1Font);
	StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Cuentas"), wxPoint(456,40), wxSize(360,176), 0, _T("ID_STATICBOX2"));
	StaticBox2->SetBackgroundColour(wxColour(96,96,96));
	wxFont StaticBox2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticBox2->SetFont(StaticBox2Font);
	Button1 = new wxButton(this, ID_BUTTON1, _("Label"), wxPoint(48,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Label"), wxPoint(144,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	//*)
}

PantallaPrincipal::~PantallaPrincipal()
{
	//(*Destroy(PantallaPrincipal)
	//*)
}

