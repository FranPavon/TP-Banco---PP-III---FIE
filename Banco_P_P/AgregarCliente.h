#ifndef AGREGARCLIENTE_H
#define AGREGARCLIENTE_H

//(*Headers(AgregarCliente)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class AgregarCliente: public wxFrame
{
	public:

		AgregarCliente(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~AgregarCliente();

		//(*Declarations(AgregarCliente)
		wxButton* ButtonAgregar;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl3;
		wxTextCtrl* TextCtrl4;
		wxTextCtrl* TextCtrl5;
		//*)

	protected:

		//(*Identifiers(AgregarCliente)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT6;
		static const long ID_BUTTONAGREGAR;
		//*)

	private:

		//(*Handlers(AgregarCliente)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
