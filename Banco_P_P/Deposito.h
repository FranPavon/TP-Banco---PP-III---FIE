#ifndef DEPOSITO_H
#define DEPOSITO_H

//(*Headers(Deposito)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Deposito: public wxDialog
{
	public:

		Deposito(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Deposito();

		//(*Declarations(Deposito)
		wxButton* ButtonConfirmar;
		wxButton* ButtonSalir;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(Deposito)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_BUTTONCONFIRMAR;
		static const long ID_BUTTONSALIR;
		//*)

	private:

		//(*Handlers(Deposito)
		void OnInit(wxInitDialogEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButtonSalirClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
