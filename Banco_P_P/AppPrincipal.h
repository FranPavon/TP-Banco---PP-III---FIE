#ifndef APPPRINCIPAL_H
#define APPPRINCIPAL_H

//(*Headers(AppPrincipal)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/statbox.h>
//*)

class AppPrincipal: public wxFrame
{
	public:

		AppPrincipal(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~AppPrincipal();

		//(*Declarations(AppPrincipal)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxButton* Button4;
		wxButton* Button5;
		wxButton* Button6;
		wxButton* Button7;
		wxListCtrl* ListCtrl1;
		wxListView* ListView1;
		wxListView* ListView2;
		wxStaticBox* StaticBox1;
		wxStaticBox* StaticBox2;
		wxStaticBox* StaticBox3;
		//*)

	protected:

		//(*Identifiers(AppPrincipal)
		static const long ID_STATICBOX1;
		static const long ID_STATICBOX2;
		static const long ID_STATICBOX3;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_LISTVIEW1;
		static const long ID_LISTCTRL1;
		static const long ID_LISTVIEW2;
		//*)

	private:

		//(*Handlers(AppPrincipal)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
