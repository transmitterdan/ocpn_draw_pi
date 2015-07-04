#ifndef __ODToolbarImpl__
#define __ODToolbarImpl__

/**
@file
Subclass of MyFrameODToolbar, which is generated by wxFormBuilder.
*/

#include "ODToolbarDef.h"

#define ID_NONE -1
enum {
    ID_BOUNDARY = 1000,
    ID_ODPOINT,
    ID_TEXTPOINT,
    ID_TOOLBARPANEL,
    
    ID_TOOL_DEF_LAST
};

enum {
    ID_DISPLAY_NEVER = 0,
    ID_DISPLAY_WHILST_DRAWING,
    ID_DISPLAY_ALWAYS,
    
    ID_DISPLAY_DEF_LAST
};

/** Implementing MyFrameODToolbar */
class ODToolbarImpl : public ODToolbarDialog
{
public:
	/** Constructor */
	ODToolbarImpl( wxWindow* parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style );
    ~ODToolbarImpl();
    void OnActivate( wxActivateEvent& event );
    void OnClose( wxCloseEvent& event );
    void OnToolButtonClick( wxCommandEvent& event );
    void SetToolbarTool( int iTool );
    
    wxToolBarToolBase *m_toolBoundary;
    wxToolBarToolBase *m_toolODPoint;
    wxToolBarToolBase *m_toolTextPoint;
    
private:
    wxSize m_toolbarSize;
    
};

#endif // __ODToolbarImpl__