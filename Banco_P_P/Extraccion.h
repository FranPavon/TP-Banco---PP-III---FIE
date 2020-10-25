#ifndef EXTRACCION_H
#define EXTRACCION_H

//(*Headers(Extraccion)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Extraccion: public wxDialog
{
	public:

		Extraccion(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Extraccion();

		//(*Declarations(Extraccion)
		wxButton* ButtonConfirmar;
		wxButton* ButtonSalir;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(Extraccion)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_BUTTONCONFIRMAR;
		static const long ID_BUTTONSALIR;
		//*)

	private:

		//(*Handlers(Extraccion)
		void OnToggleButton1Toggle(wxCommandEvent& event);
		void OnExtraccionesPaint(wxPaintEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButtonSalirClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
