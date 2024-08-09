/***************************************************************
 * Name:      cppDemo01Main.h
 * Purpose:   Defines Application Frame
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   2024-08-09
 * Copyright: Mr. Arch Brooks (https://archman.us)
 * License:
 **************************************************************/

#ifndef CPPDEMO01MAIN_H
#define CPPDEMO01MAIN_H

//(*Headers(cppDemo01Frame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class cppDemo01Frame: public wxFrame
{
    public:

        cppDemo01Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~cppDemo01Frame();

    private:

        //(*Handlers(cppDemo01Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(cppDemo01Frame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(cppDemo01Frame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CPPDEMO01MAIN_H
