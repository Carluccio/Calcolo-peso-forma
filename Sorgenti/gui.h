///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  5 2013)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI_H__
#define __GUI_H__

#include <wx/panel.h>
#include <wx/hyperlink.h>
#include <wx/button.h>
#include <wx/radiobut.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/valtext.h>
#include <wx/listctrl.h>

	//static float scx = wxScreenDC().GetPPI().GetWidth() / 96.0f; ///tutti membri pubblici e non static
	//static float scy = wxScreenDC().GetPPI().GetHeight() / 96.0f; //tutti membri pubblici e non static
	//wxSize dimFinestra = wxSize((int)(scx*470), (int)(scy*290)); //
	
///per dpi e risoluzione
	//static wxWindow* newDim = new wxWindow;
	//static int sx = newDim->wxWindow::FromDIP(wxSize(470, 290)).GetWidth();
	//static int sy = newDim->wxWindow::FromDIP(wxSize(470, 290)).GetHeight();
/// fine per dpi e risoluzione
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrameBase
///////////////////////////////////////////////////////////////////////////////
class MainFrameBase : public wxFrame 
{
	private:
				
	protected:
		wxWindow* newDim = new wxWindow;
		wxPanel* m_panel1;
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrl1;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_textCtrl2;
		wxRadioButton* m_radioBtn1;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl3;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrl4;
		wxRadioButton* m_radioBtn2;
		wxButton* m_button1;
		wxButton* m_button2;
		wxStaticText* m_staticText7;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText10;
		wxGenericHyperlinkCtrl* m_hyperlink1;
		wxStatusBar* m_statusBar;
		//wxSize(390, 340) form
		//wxSize(60, -1) campo altezza intero
		//wxSize(35, -1) campo altezza decimali
		//wxSize(122, -1) 1° e 2° static text
		//wxSize(258, -1) 3° e 4° static text
		//wxSize(122, -1) buttons
		//wxSize(122, -1) campi risultati
		virtual dpiz(int dxy) {return newDim->wxWindow::FromDIP(dxy);}
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseApp( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnClickCalcola( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickHelp( wxCommandEvent& event ) { event.Skip(); }
		
	public:
		
		MainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = "  Calcolo il peso forma", const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX|wxSYSTEM_MENU|wxTAB_TRAVERSAL );
		
		~MainFrameBase();
	
};
#endif //__GUI_H__
