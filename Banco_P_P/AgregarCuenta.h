#ifndef AGREGARCUENTA_H
#define AGREGARCUENTA_H

//(*Headers(AgregarCuenta)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class AgregarCuenta: public wxDialog
{
	public:

		AgregarCuenta(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~AgregarCuenta();

		//(*Declarations(AgregarCuenta)
		wxButton* Button1;
		wxChoice* Choice1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(AgregarCuenta)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_CHOICE1;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(AgregarCuenta)
		void OnInit(wxInitDialogEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
