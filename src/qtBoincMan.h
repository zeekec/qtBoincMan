
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

#ifndef qtBoincMan_H
#define qtBoincMan_H

#include <QtGui/QMainWindow>

class qtBoincMan : public QMainWindow
{
	Q_OBJECT
public:
	qtBoincMan();
	virtual ~qtBoincMan();


private slots:
	void about();

private:
	void createTabs();
	void createActions();
	void createMenus();

	QTabWidget *tabWidget;

	QMenu *fileMenu;
	QAction *closeAct;
	QAction *quitAct;

	QMenu *viewMenu;
	QAction *noticesAct;
	QAction *projectsAct;
	QAction *tasksAct;
	QAction *transfersAct;
	QAction *statisticsAct;
	QAction *diskAct;
	QAction *logAct;

	QMenu *toolsMenu;
	QAction *syncAcountManagerAct;
	QAction *addProjectAct;
	QAction *stopAcountManagerAct;
	QAction *optionsAct;
	QAction *computingPreferencesAct;

	QMenu *activityMenu;
	QAction *runAlwaysAct;
	QAction *runPreferencesAct;
	QAction *runSuspendAct;
	QAction *networkAlwaysAct;
	QAction *networkPreferencesAct;
	QAction *networkSuspendAct;

	QMenu *advancedMenu;
	QAction *selecComputerAct;
	QAction *shutdownClientAct;
	QAction *runBenchmarksAct;
	QAction *doNetworkCommunicationAct;
	QAction *readConfigAct;
	QAction *readLocalPrefAct;
	QAction *launchAnotherAct;

	QMenu *helpMenu;
	QAction *boincHelpAct;
	QAction *boincManagerHelpAct;
	QAction *boincWebsiteAct;
	QAction *aboutAct;
	QAction *aboutQtAct;

};

#endif // qtBoincMan_H

// kate: indent-mode cstyle; indent-width 4; replace-tabs off; tab-width 4;
