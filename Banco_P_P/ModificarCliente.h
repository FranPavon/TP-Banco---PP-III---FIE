#ifndef MODIFICARCLIENTE_H
#define MODIFICARCLIENTE_H

//(*Headers(ModificarCliente)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class ModificarCliente: public wxDialog
{
	public:

		ModificarCliente(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ModificarCliente();

		//(*Declarations(ModificarCliente)
		wxButton* ButtonBuscar;
		wxButton* ButtonConfirmar;
		wxButton* ButtonSalir;
		wxChoice* Choice1;
		wxStaticText* StaticText10;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText6;
		wxStaticText* StaticText8;
		wxStaticText* StaticTextApellido;
		wxStaticText* StaticTextDNI;
		wxStaticText* StaticTextDireccion;
		wxStaticText* StaticTextNombre;
		wxStaticText* StaticTextTelefono;
		wxTextCtrl* TextCtrlDNI;
		wxTextCtrl* TextCtrlInfo;
		//*)

	protected:

		//(*Identifiers(ModificarCliente)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_CHOICE1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT9;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT11;
		static const long ID_STATICTEXT12;
		//*)

	private:

		//(*Handlers(ModificarCliente)
		void OnButton1Click(wxCommandEvent& event);
		void OnButtonSalirClick(wxCommandEvent& event);
		void OnButtonBuscarClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
