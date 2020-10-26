#ifndef BAJACLIENTE_H
#define BAJACLIENTE_H

//(*Headers(BajaCliente)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/listctrl.h>
#include <wx/stattext.h>
//*)

class BajaCliente: public wxDialog
{
	public:

		BajaCliente(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~BajaCliente();

		//(*Declarations(BajaCliente)
		wxButton* ButtonConfirmar;
		wxButton* ButtonSalir;
		wxListView* ListView1;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(BajaCliente)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTONCONFIRMAR;
		static const long ID_LISTVIEW1;
		static const long ID_BUTTONSALIR;
		//*)

	private:

		//(*Handlers(BajaCliente)
		void OnButtonSalirClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
