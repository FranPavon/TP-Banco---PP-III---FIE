#include "BajaCliente.h"

//(*InternalHeaders(BajaCliente)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(BajaCliente)
const long BajaCliente::ID_STATICTEXT1 = wxNewId();
const long BajaCliente::ID_BUTTON1 = wxNewId();
const long BajaCliente::ID_LISTVIEW1 = wxNewId();
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
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Desea eliminar al cliente, con todas sus cuentas\?"), wxPoint(56,40), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	Button1 = new wxButton(this, ID_BUTTON1, _("CONFIRMAR"), wxPoint(128,184), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetForegroundColour(wxColour(255,255,255));
	Button1->SetBackgroundColour(wxColour(96,96,96));
	wxFont Button1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Agency FB"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	ListView1 = new wxListView(this, ID_LISTVIEW1, wxPoint(56,88), wxSize(288,56), wxLC_LIST, wxDefaultValidator, _T("ID_LISTVIEW1"));
	//*)
}

BajaCliente::~BajaCliente()
{
	//(*Destroy(BajaCliente)
	//*)
}

