/****************************************************************************
**
** This file is part of the LibreCAD project, a 2D CAD program
**
** Copyright (C) 2010 R. van Twisk (librecad@rvt.dds.nl)
** Copyright (C) 2001-2003 RibbonSoft. All rights reserved.
**
**
** This file may be distributed and/or modified under the terms of the
** GNU General Public License version 2 as published by the Free Software 
** Foundation and appearing in the file gpl-2.0.txt included in the
** packaging of this file.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
**
** This copyright notice MUST APPEAR in all copies of the script!  
**
**********************************************************************/

#ifndef RS_ACTIONZOOMSCROLL_H
#define RS_ACTIONZOOMSCROLL_H
#include "rs_actioninterface.h"

/**
 * This action triggers a scrolling.
 *
 * @author Andrew Mustun
 */
class RS_ActionZoomScroll : public RS_ActionInterface {
	Q_OBJECT
public:
    RS_ActionZoomScroll(RS2::Direction direction,LC_ActionContext *actionContext);
    RS_ActionZoomScroll(int offsetX, int offsetY,LC_ActionContext *actionContext);

	void init(int status) override;
	void trigger() override;

protected:
    RS2::Direction m_direction = RS2::Up;
    bool m_hasOffset = false;
    int m_offsetX = 0;
    int m_offsetY = 0;
};

#endif
