#ifndef MOVIMIENTOS_H
#define MOVIMIENTOS_H

//(*Headers(Movimientos)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Movimientos: public wxDialog
{
	public:

		Movimientos(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Movimientos();

		//(*Declarations(Movimientos)
		wxButton* ButtonBuscar;
		wxButton* ButtonConfimar;
		wxButton* ButtonSalir;
		wxChoice* ChoiceMov;
		wxStaticText* StaticText1D;
		wxStaticText* StaticTextDNI;
		wxStaticText* StaticTextM;
		wxStaticText* StaticTextNC;
		wxStaticText* StaticTextNroCuenta;
		wxStaticText* StaticTextTC;
		wxStaticText* StaticTextTM;
		wxStaticText* StaticTextTipoCuenta;
		wxStaticText* StaticTextTitulo;
		wxTextCtrl* TextCtrlCuenta;
		wxTextCtrl* TextCtrlMonto;
		//*)

	protected:

		//(*Identifiers(Movimientos)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_TEXTCTRL2;
		static const long ID_CHOICE1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT9;
		//*)

	private:

		//(*Handlers(Movimientos)
		void OnButtonBuscarClick(wxCommandEvent& event);
		void OnButtonConfimarClick(wxCommandEvent& event);
		void OnButtonSalirClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
