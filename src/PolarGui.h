///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __POLARGUI_H__
#define __POLARGUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/grid.h>
#include <wx/splitter.h>
#include <wx/dialog.h>
#include <wx/gauge.h>
#include <wx/checkbox.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/notebook.h>
#include <wx/tglbtn.h>

///////////////////////////////////////////////////////////////////////////////
/// Class PolarDialog
///////////////////////////////////////////////////////////////////////////////
class PolarGui : public wxDialog
{
	private:
	
	public:
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText144;
		wxChoice* m_choiceRingsPolar;
		wxStaticText* m_staticText145;
		wxChoice* m_choiceDegreesPolar;
		wxStaticText* m_staticText148;
		wxChoice* m_choiceWindPolar;
		wxStaticLine* m_staticline441;
		wxStaticText* m_staticText146;
		wxChoice* m_choiceSourcePolar;
		wxStaticText* m_staticText141;
		wxChoice* m_choiceCurrentPolar;
		wxButton* m_buttonFilterPolar;
		wxStaticLine* m_staticline421;
		wxButton* m_button61;
		wxStaticLine* m_staticline431;
		wxButton* m_buttonSavePolar;
		wxButton* m_buttonLoad;
		wxStaticLine* m_staticline45;
		wxButton* m_buttonClearData;
		wxToggleButton* m_toggleBtnRecord;
		wxStaticText* m_staticTextEngine;
		
		// Virtual event handlers, overide them in your derived class
		virtual void PolarDialogOnInitDialog( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void OnChoiceMode( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnChoicePolarKnots( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnChoiceDegreesPolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnChoiceWindPolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnChoiceSourcePolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickFilterPolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonCreatePolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickSavePolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickLoad( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSizesplitter1( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnSplitterSashPosChanged( wxSplitterEvent& event ) { event.Skip(); }
		virtual void OnPaintPolar( wxPaintEvent& event ) { event.Skip(); }
		virtual void OnGridCellChange( wxGridEvent& event ) { event.Skip(); }
		virtual void OnButtonClickClearData( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnToggleButtonRecord( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSizePolarDialog( wxSizeEvent& event ) { event.Skip(); }
		
	
	public:
		wxBoxSizer* bSizerPolar;
		wxChoice* m_choiceMode;
		wxSplitterWindow* m_splitter1;
		wxPanel* m_panelPolar;
		wxPanel* m_panel34;
		wxPanel* m_panel6;
		wxGrid* m_gridEdit;
		
		PolarGui( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Polar Diagram"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 968,602 ), long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~PolarGui();
		
		void m_splitter1OnIdle( wxIdleEvent& )
		{
			m_splitter1->SetSashPosition( 400 );
			m_splitter1->Disconnect( wxEVT_IDLE, wxIdleEventHandler( PolarGui::m_splitter1OnIdle ), NULL, this );
		}
};

#endif //__POLARGUI_H__