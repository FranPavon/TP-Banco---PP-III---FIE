/***************************************************************
 * Name:      Banco_P_PMain.h
 * Purpose:   Defines Application Frame
 * Author:    Horacio Patricelli & Francisco Pavon (pavonfrancisco@gmail.com)
 * Created:   2020-10-23
 * Copyright: Horacio Patricelli & Francisco Pavon (https://github.com/CTPavon)
 * License:
 **************************************************************/

#ifndef BANCO_P_PMAIN_H
#define BANCO_P_PMAIN_H

//(*Headers(Banco_P_PFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class Banco_P_PFrame: public wxFrame
{
    public:

        Banco_P_PFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Banco_P_PFrame();

    private:

        //(*Handlers(Banco_P_PFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnBitmapButton1Click(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        //*)

        //(*Identifiers(Banco_P_PFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Banco_P_PFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // BANCO_P_PMAIN_H
