
/*
    qtBoincMan reimplements the default BOINC manager in QT.
    Copyright (C) 2012  Erik Zeek <zeekec@mad.scientist.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include <QtGui/QApplication>
#include "qtBoincMan.h"


int main(int argc, char **argv)
{
	QApplication boinc_man_app(argc, argv);
	qtBoincMan boinc_man_window;
	boinc_man_window.show();
	return boinc_man_app.exec();
}

// kate: indent-mode cstyle; indent-width 4; replace-tabs off; tab-width 4;
