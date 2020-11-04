#ifndef APPPRINCIPAL_H
#define APPPRINCIPAL_H

//(*Headers(AppPrincipal)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
//*)

class AppPrincipal: public wxFrame
{
	public:

		AppPrincipal(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~AppPrincipal();

		//(*Declarations(AppPrincipal)
		wxButton* ButtonAgregarCliente;
		wxButton* ButtonAgregarCuenta;
		wxButton* ButtonBajaCliente;
		wxButton* ButtonBajaCuenta;
		wxButton* ButtonDeposito;
		wxButton* ButtonExtraccion;
		wxButton* ButtonModificarCliente;
		wxStaticBox* StaticBox1;
		wxStaticBox* StaticBox2;
		wxStaticBox* StaticBox3;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(AppPrincipal)
		static const long ID_STATICBOX1;
		static const long ID_STATICBOX2;
		static const long ID_STATICBOX3;
		static const long ID_BUTTONAGREGARCLIENTE;
		static const long ID_BUTTONMODIFICARCLIENTE;
		static const long ID_BUTTONBAJACLIENTE;
		static const long ID_BUTTONAGREGARCUENTA;
		static const long ID_BUTTONBAJACUENTA;
		static const long ID_BUTTONEXTRACCION;
		static const long ID_BUTTONDEPOSITO;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(AppPrincipal)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButtonAgregarClienteClick(wxCommandEvent& event);
		void OnButtonBajaClienteClick(wxCommandEvent& event);
		void OnButtonAgregarCuentaClick(wxCommandEvent& event);
		void OnButtonDepositoClick(wxCommandEvent& event);
		void OnButtonExtraccionClick(wxCommandEvent& event);
		void OnButtonBajaCuentaClick(wxCommandEvent& event);
		void OnButtonModificarClienteClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
