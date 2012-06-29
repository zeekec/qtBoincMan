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