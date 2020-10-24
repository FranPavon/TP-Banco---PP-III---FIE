#ifndef PANTALLAPRINCIPAL_H
#define PANTALLAPRINCIPAL_H

//(*Headers(PantallaPrincipal)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statbox.h>
//*)

class PantallaPrincipal: public wxFrame
{
	public:

		PantallaPrincipal(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~PantallaPrincipal();

		//(*Declarations(PantallaPrincipal)
		wxButton* Button1;
		wxButton* Button2;
		wxStaticBox* StaticBox1;
		wxStaticBox* StaticBox2;
		//*)

	protected:

		//(*Identifiers(PantallaPrincipal)
		static const long ID_STATICBOX1;
		static const long ID_STATICBOX2;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(PantallaPrincipal)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
