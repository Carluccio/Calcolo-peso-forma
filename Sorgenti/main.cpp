/*********************************************************************
 * Name:      	main.cpp
 * Purpose:   	Implements simple wxWidgets application with GUI
 * 				created using wxFormBuilder.
 * Author:    
 * Created:   
 * Copyright: 
 * License:   	wxWidgets license (www.wxwidgets.org)
 * 
 * Notes:		Note that all GUI creation code is implemented in
 * 				gui.cpp source file which is generated by wxFormBuilder.
 *********************************************************************/

#include "main.h"

// initialize the application
IMPLEMENT_APP(MainApp);

////////////////////////////////////////////////////////////////////////////////
// application class implementation 
////////////////////////////////////////////////////////////////////////////////

bool MainApp::OnInit()
{
	
	SetTopWindow( new MainFrame( NULL ) );
	GetTopWindow()->Show();
	
	// true = enter the main loop
	return true;
}

////////////////////////////////////////////////////////////////////////////////
// main application frame implementation 
////////////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame(wxWindow *parent) : MainFrameBase( parent )
{
SetIcon(wxICON(sample));
}

MainFrame::~MainFrame()
{

}

void MainFrame::OnCloseApp(wxCloseEvent& event)
{
	Destroy();
}

void MainFrame::OnClickCalcola(wxCommandEvent& event)
{
	 char risultato[5] ="";
     double pesoAttuale = 0;
     double variabile = 0;
	 m_staticText8->SetLabel("");
	 m_staticText10->SetLabel("");
	variabile=(atof(m_textCtrl1->GetValue()+"."+ m_textCtrl2->GetValue()))/100;
	pesoAttuale= atof(m_textCtrl3->GetValue()+"."+ m_textCtrl4->GetValue());
    if(variabile > 2.50 || variabile <  1.00 || pesoAttuale > 280 || pesoAttuale < 7) {
		wxMessageBox (_T("Valori non ammessi !!"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		variabile =0;
		pesoAttuale = 0;
	} else {
		if(m_radioBtn1 ->GetValue()) {
			variabile = variabile*variabile*22.1;
		} else {
			variabile = variabile*variabile*20.6;
		}
		sprintf(risultato ,"% 4.2f" , variabile);
		m_staticText8->SetLabel(risultato);
		sprintf(risultato ,"%+4.2f" , (pesoAttuale - variabile));
		m_staticText10->SetLabel(risultato);
	}
}

void MainFrame::OnClickHelp(wxCommandEvent& event)
{
wxMessageBox (_T(" Formula di Keys\n Uomini: (altezza in metri) x (altezza in metri) x 22.1\n Donne:  (altezza in metri) x (altezza in metri) x 20.6\n\n Nei risultati è usato il punto per i decimali !!\n Al di sotto o al di sopra di certi valori, il programma non è attendibile !!") ,_T("Precisazione ..."), wxOK | wxICON_INFORMATION);
}
