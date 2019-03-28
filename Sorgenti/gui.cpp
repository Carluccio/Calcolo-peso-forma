///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  5 2013)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"
///////////////////////////////////////////////////////////////////////////
MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	wxArrayString includeList;
	includeList.Add(wxT("0"));
	includeList.Add(wxT("1"));
	includeList.Add(wxT("2"));
	includeList.Add(wxT("3"));
	includeList.Add(wxT("4"));
	includeList.Add(wxT("5"));
	includeList.Add(wxT("6"));
	includeList.Add(wxT("7"));
	includeList.Add(wxT("8"));
	includeList.Add(wxT("9"));
	wxTextValidator textValidator(wxFILTER_INCLUDE_CHAR_LIST);
	textValidator.SetIncludes(includeList);
    //SetIcon(wxICON(sample));    
    this->SetSize(wxSize(dpiz(400), dpiz(355)));
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 180, 180, 180 ) );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1 = new wxStaticText( m_panel1, wxID_ANY, _("Secondo la formula di Keys"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetFont(wxFontInfo(16).FaceName("Arial").Italic().Bold());
	//m_staticText1->SetFont( wxFont( 16, 74, 93, 92, false, wxT("Arial") ) );
	m_staticText1->SetForegroundColour( wxColour( 32, 54, 210 ) );
	
	bSizer3->Add( m_staticText1, 0, wxALL|wxEXPAND|wxLEFT|wxRIGHT, 5 );
	
	m_staticText2 = new wxStaticText( m_panel1, wxID_ANY, _("(Possibilità di inserire anche i decimali !!)"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont(wxFontInfo(9).FaceName("Arial").Italic().Bold());
	//m_staticText2->SetFont( wxFont( 9, 74, 93, 92, false, wxT("Arial") ) );
	
	bSizer3->Add( m_staticText2, 0, wxALL|wxEXPAND|wxLEFT|wxRIGHT|wxTOP, 5 );
	//bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	bSizer2->Add( bSizer3, 1, wxEXPAND, 5 );
	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3 = new wxStaticText( m_panel1, wxID_ANY, _("Altezza in cm.:"), wxDefaultPosition, wxSize(dpiz(122), -1), 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont(wxFontInfo(9).FaceName("Arial"));
	bSizer4->Add( m_staticText3, 0, wxALL, 5 );
	
	m_textCtrl1 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(dpiz(60), -1), 0|wxWANTS_CHARS,textValidator );
	m_textCtrl1->SetMaxLength( 3 );
	m_textCtrl1->SetFont(wxFontInfo(9).FaceName("Arial").Bold());
	bSizer4->Add( m_textCtrl1, 0, wxEXPAND, 5 );
	
	m_staticText4 = new wxStaticText( m_panel1, wxID_ANY, _(","), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont(wxFontInfo(9).FaceName("Arial"));
	bSizer4->Add( m_staticText4, 0, wxALL, 5 );
	
	m_textCtrl2 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(dpiz(35), -1), 0|wxWANTS_CHARS,textValidator );
	m_textCtrl2->SetMaxLength( 2 ); 
	m_textCtrl2->SetFont(wxFontInfo(9).FaceName("Arial").Bold());	
	bSizer4->Add( m_textCtrl2, 0, wxEXPAND, 5 );
	
	
	bSizer4->Add( 60, 0, 0, wxEXPAND, 5 );
	
	m_radioBtn1 = new wxRadioButton( m_panel1, wxID_ANY, _("Maschio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radioBtn1->SetValue( true ); 
	bSizer4->Add( m_radioBtn1, 0, wxALL, 5 );
	
	
	bSizer2->Add( bSizer4, 0, wxBOTTOM|wxEXPAND|wxTOP, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText5 = new wxStaticText( m_panel1, wxID_ANY, _("Peso attuale in Kg.:"), wxDefaultPosition, wxSize(dpiz(122), -1), 0 );
	m_staticText5->Wrap( -1 );
	m_staticText5->SetFont(wxFontInfo(9).FaceName("Arial"));
	
	bSizer6->Add( m_staticText5, 0, wxALL, 5 );
	
	m_textCtrl3 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(dpiz(60), -1), 0|wxWANTS_CHARS,textValidator );
	m_textCtrl3->SetMaxLength( 3 ); 
	m_textCtrl3->SetFont(wxFontInfo(9).FaceName("Arial").Bold());	
	bSizer6->Add( m_textCtrl3, 0, wxEXPAND, 5 );
	
	m_staticText6 = new wxStaticText( m_panel1, wxID_ANY, _(","), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont(wxFontInfo(9).FaceName("Arial"));
	bSizer6->Add( m_staticText6, 0, wxALL, 5 );
	
	m_textCtrl4 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(dpiz(35), -1), 0|wxWANTS_CHARS,textValidator );
	m_textCtrl4->SetMaxLength( 2 );
	m_textCtrl4->SetFont(wxFontInfo(9).FaceName("Arial").Bold());
	bSizer6->Add( m_textCtrl4, 0, wxEXPAND, 5 );
	
	
	bSizer6->Add( 60, 0, 0, wxEXPAND, 5 );
	
	m_radioBtn2 = new wxRadioButton( m_panel1, wxID_ANY, _("Femmina"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_radioBtn2, 0, wxALL, 5 );
	
	
	bSizer2->Add( bSizer6, 0, wxBOTTOM|wxEXPAND, 5 );
	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button1 = new wxButton( m_panel1, wxID_ANY, _("Calcola !!"), wxDefaultPosition, wxSize(dpiz(122), -1), 0 );
	bSizer7->Add( m_button1, 0, wxLEFT, 5 );
	
	
	bSizer7->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_button2 = new wxButton( m_panel1, wxID_ANY, _("?"), wxDefaultPosition, wxSize(dpiz(122), -1), 0 );
	bSizer7->Add( m_button2, 0, wxRIGHT, 5 );
	
	
	bSizer2->Add( bSizer7, 0, wxTOP|wxBOTTOM|wxEXPAND, 5 );
	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( m_panel1, wxID_ANY, _("Il tuo peso forma è Kg.:"), wxDefaultPosition, wxSize(dpiz(258), -1), 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont(wxFontInfo(9).FaceName("Arial"));
	bSizer8->Add( m_staticText7, 0, wxLEFT, 5 );
	
	m_staticText8 = new wxStaticText( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(dpiz(142), -1), 0);
	m_staticText8->Wrap( -1 );
	m_staticText8->SetFont(wxFontInfo(12).FaceName("Arial").Bold());
	//m_staticText8->SetFont( wxFont( 9, 74, 90, 92, false, wxT("Arial") ) );
    m_staticText8->SetForegroundColour(wxColour(3,7,253));
    m_staticText8->SetBackgroundColour( wxColour( 251, 220, 108 ) );
	
	bSizer8->Add( m_staticText8, 0, wxRIGHT, 5 );
	
	
	bSizer2->Add( bSizer8, 0, wxEXPAND|wxTOP|wxBOTTOM, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText9 = new wxStaticText( m_panel1, wxID_ANY, _("Differenza rispetto al tuo peso forma, Kg.:"), wxDefaultPosition, wxSize(dpiz(258), -1), 0 );
	m_staticText9->SetFont(wxFontInfo(9).FaceName("Arial").Bold());
	m_staticText9->Wrap( -1 );
		
	bSizer9->Add( m_staticText9, 0, wxLEFT, 5 );
	
	m_staticText10 = new wxStaticText( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(dpiz(142), -1), 0);
	m_staticText10->Wrap( -1 );
	m_staticText10->SetFont(wxFontInfo(12).FaceName("Arial").Bold());
	//m_staticText10->SetFont( wxFont( 9, 74, 90, 92, false, wxT("Arial") ) );
	m_staticText10->SetForegroundColour( wxColour( 236, 0, 0 ) );
    m_staticText10->SetBackgroundColour( wxColour( 251, 220, 108 ) );
	
	bSizer9->Add( m_staticText10, 0, wxRIGHT, 5 );
	
	
	bSizer2->Add( bSizer9, 0, wxEXPAND|wxTOP|wxBOTTOM, 5 );
	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	bSizer10->Add( 0, 0, 1, wxEXPAND, 5 );
	m_statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	m_hyperlink1 = new wxGenericHyperlinkCtrl( m_panel1, wxID_ANY, _("© Carlo Sala software"), wxT("https://www.carlosala.net/"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE );
	m_statusBar->PushStatusText(" V.: 3.0.0"); 
	m_hyperlink1->SetHoverColour( wxColour( 32, 54, 210 ) );
	m_hyperlink1->SetNormalColour( wxColour( 64, 64, 64 ) );
	m_hyperlink1->SetVisitedColour( wxColour( 64, 64, 64 ) );
	bSizer10->Add( m_hyperlink1, 0, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 10 );
	bSizer2->Add( bSizer10, 1, wxEXPAND, 5 );
		
	m_panel1->SetSizer( bSizer2 );
	m_panel1->Layout();
	
	bSizer1->Add( m_panel1, 1, wxEXPAND|wxALL, 5 );
		
	this->SetSizer( bSizer1 );
	this->Layout();
		
	this->Centre( wxBOTH );
	
		// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseApp ) );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnClickCalcola ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnClickHelp ), NULL, this );
}

MainFrameBase::~MainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseApp ) );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnClickCalcola ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnClickHelp ), NULL, this );
}