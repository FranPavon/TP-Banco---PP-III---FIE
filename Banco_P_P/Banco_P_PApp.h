/***************************************************************
 * Name:      Banco_P_PApp.h
 * Purpose:   Defines Application Class
 * Author:    Horacio Patricelli & Francisco Pavon (pavonfrancisco@gmail.com)
 * Created:   2020-10-25
 * Copyright: Horacio Patricelli & Francisco Pavon (https://github.com/CTPavon)
 * License:
 **************************************************************/

#ifndef BANCO_P_PAPP_H
#define BANCO_P_PAPP_H

#include <wx/app.h>

class Banco_P_PApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // BANCO_P_PAPP_H
