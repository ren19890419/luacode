/*

Decoda
Copyright (C) 2007-2013 Unknown Worlds Entertainment, Inc. 

This file is part of Decoda.

Decoda is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Decoda is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Decoda.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef WATCH_DROP_TARGET_H
#define WATCH_DROP_TARGET_H

#include "wx/wx.h"
#include "wx/dnd.h"

//
// Forward declarations.
//

class WatchWindow;

/**
 * This class handles dragging and dropping items onto the watch window.
 */
class WatchDropTarget : public wxTextDropTarget
{

public:

    /**
     * Constructor. The watch window that will be added to as a result of drag
     * and drop is specified.
     */
    explicit WatchDropTarget(WatchWindow* watch);

    /**
     * From wxTextDropTarget.
     */
    virtual bool OnDropText(wxCoord x, wxCoord y, const wxString& data);

private:

    WatchWindow*    m_watch;

};

#endif