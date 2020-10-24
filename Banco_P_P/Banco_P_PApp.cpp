/***************************************************************
 * Name:      Banco_P_PApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Horacio Patricelli & Francisco Pavon (pavonfrancisco@gmail.com)
 * Created:   2020-10-23
 * Copyright: Horacio Patricelli & Francisco Pavon (https://github.com/CTPavon)
 * License:
 **************************************************************/

#include "Banco_P_PApp.h"

//(*AppHeaders
#include "Banco_P_PMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Banco_P_PApp);

bool Banco_P_PApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Banco_P_PFrame* Frame = new Banco_P_PFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
