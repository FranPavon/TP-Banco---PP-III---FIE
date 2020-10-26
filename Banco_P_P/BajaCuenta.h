#ifndef BAJACUENTA_H
#define BAJACUENTA_H

//(*Headers(BajaCuenta)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
//*)

class BajaCuenta: public wxDialog
{
	public:

		BajaCuenta(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~BajaCuenta();

		//(*Declarations(BajaCuenta)
		wxButton* ButtonConfirmar;
		wxButton* ButtonSalir;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
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
		//*)

	private:

		//(*Handlers(BajaCuenta)
		void OnButtonSalirClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
