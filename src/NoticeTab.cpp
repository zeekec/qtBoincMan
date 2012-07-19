
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


#include "NoticeTab.h"

#include <QVBoxLayout>

NoticeTab::NoticeTab(QWidget *parent, Qt::WindowFlags f): QWidget(parent, f)
{
	notices = new QTextEdit(this);
	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(notices);
	setLayout(mainLayout);

	notices->setText("<b>Notices go here!</b>");
}

#include "NoticeTab.moc"

// kate: indent-mode cstyle; indent-width 4; replace-tabs off; tab-width 4;
