#ifndef BAJACLIENTE_H
#define BAJACLIENTE_H

//(*Headers(BajaCliente)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class BajaCliente: public wxDialog
{
	public:

		BajaCliente(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~BajaCliente();

		//(*Declarations(BajaCliente)
		wxButton* ButtonBuscar;
		wxButton* ButtonConfirmar;
		wxButton* ButtonSalir;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticTextApellido;
		wxStaticText* StaticTextDNI;
		wxStaticText* StaticTextNombre;
		wxTextCtrl* TextCtrlDNI;
		//*)

	protected:

		//(*Identifiers(BajaCliente)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTONCONFIRMAR;
		static const long ID_BUTTONSALIR;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT8;
		//*)

	private:

		//(*Handlers(BajaCliente)
		void OnButtonSalirClick(wxCommandEvent& event);
		void OnButtonBuscarClick(wxCommandEvent& event);
		void OnButtonConfirmarClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
