#include "qtBoincMan.h"


#include <QtGui>
#include <QtGui/QLabel>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QAction>
#include <QtGui/QMessageBox>

qtBoincMan::qtBoincMan()
{
	tabWidget = new QTabWidget;
	tabWidget->addTab(new QLabel("Notices", this), tr("Notices"));
	tabWidget->addTab(new QLabel("Projects", this), tr("Projects"));
	tabWidget->addTab(new QLabel("Tasks", this), tr("Tasks"));
	tabWidget->addTab(new QLabel("Transfers", this), tr("Transfers"));
	tabWidget->addTab(new QLabel("Statistics", this), tr("Statistics"));
	tabWidget->addTab(new QLabel("Disk", this), tr("Disk"));
	tabWidget->addTab(new QLabel("Log", this), tr("Log"));
	setCentralWidget(tabWidget);

	createActions();
	createMenus();

	setMinimumSize(160, 160);
	resize(480, 320);
}

qtBoincMan::~qtBoincMan()
{}

void qtBoincMan::about()
{
	QMessageBox::about(this, tr("About Menu"),
	                   tr("The <b>Menu</b> example shows how to create "
	                      "menu-bar menus and context menus."));
}



void qtBoincMan::createActions()
{
	closeAct = new QAction(tr("&Close"), this);
	closeAct->setShortcuts(QKeySequence::Close);
	closeAct->setStatusTip(tr("Close Window"));

	quitAct = new QAction(tr("&Quit"), this);
	quitAct->setShortcuts(QKeySequence::Quit);
	quitAct->setStatusTip(tr("Exit the application"));
	connect(quitAct, SIGNAL(triggered()), this, SLOT(close()));


	noticesAct = new QAction(tr("&Notices"), this);
	noticesAct->setShortcut(tr("Shift+Ctrl+N"));
	noticesAct->setStatusTip(tr("Notices tab"));

	projectsAct = new QAction(tr("&Projects"), this);
	projectsAct->setShortcut(tr("Shift+Ctrl+P"));
	projectsAct->setStatusTip(tr("Projects tab"));

	tasksAct = new QAction(tr("&Tasks"), this);
	tasksAct->setShortcut(tr("Shift+Ctrl+T"));
	tasksAct->setStatusTip(tr("Tasks tab"));

	transfersAct = new QAction(tr("Trans&fers"), this);
	transfersAct->setShortcut(tr("Shift+Ctrl+X"));
	transfersAct->setStatusTip(tr("Transfers tab"));

	statisticsAct = new QAction(tr("&Statistics"), this);
	statisticsAct->setShortcut(tr("Shift+Ctrl+S"));
	statisticsAct->setStatusTip(tr("Statistics tab"));

	diskAct = new QAction(tr("&Disk"), this);
	diskAct->setShortcut(tr("Shift+Ctrl+D"));
	diskAct->setStatusTip(tr("Disk tab"));

	logAct = new QAction(tr("&Log"), this);
	logAct->setShortcut(tr("Shift+Ctrl+E"));
	logAct->setStatusTip(tr("Log tab"));


	syncAcountManagerAct = new QAction(tr("&Connect to account manager"), this);

	addProjectAct = new QAction(tr("&Add project..."), this);

	stopAcountManagerAct = new QAction(tr("&Stop using account Manager"), this);

	optionsAct = new QAction(tr("&Options..."), this);

	computingPreferencesAct = new QAction(tr("&Computing Preferences..."), this);


	runAlwaysAct = new QAction(tr("&Run always"), this);

	runPreferencesAct = new QAction(tr("Run based on preferences"), this);

	runSuspendAct = new QAction(tr("&Suspend"), this);

	networkAlwaysAct = new QAction(tr("Network activity always availible"), this);

	networkPreferencesAct = new QAction(tr("Network activity based on preferences"), this);

	networkSuspendAct = new QAction(tr("Network activity suspended"), this);


	selecComputerAct = new QAction(tr("Select computer..."), this);

	shutdownClientAct = new QAction(tr("Shut down connected client..."), this);

	runBenchmarksAct = new QAction(tr("Run CPU benchmarks"), this);

	doNetworkCommunicationAct = new QAction(tr("Do network communication"), this);

	readConfigAct = new QAction(tr("Read config file"), this);

	readLocalPrefAct = new QAction(tr("Read local prefs file"), this);

	launchAnotherAct = new QAction(tr("Launch another qtBoinc manager"), this);


	aboutAct = new QAction(tr("&About"), this);
	aboutAct->setStatusTip(tr("Show the application's About box"));
	connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));

	aboutQtAct = new QAction(tr("About &Qt"), this);
	aboutQtAct->setStatusTip(tr("Show the Qt library's About box"));
	connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

}

void qtBoincMan::createMenus()
{
	fileMenu = menuBar()->addMenu(tr("&File"));
	fileMenu->addAction(closeAct);
	fileMenu->addAction(quitAct);

	viewMenu = menuBar()->addMenu(tr("&View"));
	viewMenu->addAction(noticesAct);
	viewMenu->addAction(projectsAct);
	viewMenu->addAction(tasksAct);
	viewMenu->addAction(transfersAct);
	viewMenu->addAction(statisticsAct);
	viewMenu->addAction(diskAct);
	viewMenu->addAction(logAct);

	toolsMenu = menuBar()->addMenu(tr("&Tools"));
	toolsMenu->addAction(syncAcountManagerAct);
	toolsMenu->addAction(addProjectAct);
	toolsMenu->addAction(stopAcountManagerAct);
	toolsMenu->addAction(optionsAct);
	toolsMenu->addAction(computingPreferencesAct);

	activityMenu = menuBar()->addMenu(tr("&Activity"));
	activityMenu->addAction(runAlwaysAct);
	activityMenu->addAction(runPreferencesAct);
	activityMenu->addAction(runSuspendAct);
	activityMenu->addAction(networkAlwaysAct);
	activityMenu->addAction(networkPreferencesAct);
	activityMenu->addAction(networkSuspendAct);

	advancedMenu = menuBar()->addMenu(tr("A&dvanced"));
	advancedMenu->addAction(selecComputerAct);
	advancedMenu->addAction(shutdownClientAct);
	advancedMenu->addAction(runBenchmarksAct);
	advancedMenu->addAction(doNetworkCommunicationAct);
	advancedMenu->addAction(readConfigAct);
	advancedMenu->addAction(readLocalPrefAct);
	advancedMenu->addAction(launchAnotherAct);

	helpMenu = menuBar()->addMenu(tr("&Help"));
	helpMenu->addAction(aboutAct);
	helpMenu->addAction(aboutQtAct);

}

#include "qtBoincMan.moc"
