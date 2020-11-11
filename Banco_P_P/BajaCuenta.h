#ifndef BAJACUENTA_H
#define BAJACUENTA_H

//(*Headers(BajaCuenta)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class BajaCuenta: public wxDialog
{
	public:

		BajaCuenta(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~BajaCuenta();

		//(*Declarations(BajaCuenta)
		wxButton* ButtonBuscar;
		wxButton* ButtonConfirmar;
		wxButton* ButtonSalir;
		wxStaticText* StaticTextD;
		wxStaticText* StaticTextDNI;
		wxStaticText* StaticTextNC;
		wxStaticText* StaticTextNroCuenta;
		wxStaticText* StaticTextT1;
		wxStaticText* StaticTextT2;
		wxStaticText* StaticTextTC;
		wxStaticText* StaticTextTipoCuenta;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(BajaCuenta)
		static const long ID_BUTTONCONFIRMAR;
		static const long ID_BUTTONSALIR;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT8;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(BajaCuenta)
		void OnButtonSalirClick(wxCommandEvent& event);
		void OnButtonBuscarClick(wxCommandEvent& event);
		void OnButtonConfirmarClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
