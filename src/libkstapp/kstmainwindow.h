#ifndef KSTMAINWINDOW_H
#define KSTMAINWINDOW_H

#include <QMainWindow>

class QMenu;
class QAction;
class QTabWidget;
class QUndoStack;

class KstMainWindow : public QMainWindow
{
  Q_OBJECT
public:
  KstMainWindow();
  virtual ~KstMainWindow();

private Q_SLOTS:
  void aboutToQuit();
  void about();


private:
  void createActions();
  void createMenus();
  void createToolBars();
  void createStatusBar();

  void readSettings();
  void writeSettings();

private:
  QUndoStack *_undoStack;
  QTabWidget *_tabWidget;

  QMenu *_fileMenu;
  QMenu *_editMenu;
  QMenu *_settingsMenu;
  QMenu *_helpMenu;

  QToolBar *_fileToolBar;
  QToolBar *_editToolBar;

  QAction *_exitAct;
  QAction *_aboutAct;
  QAction *_aboutQtAct;
};

#endif

// vim: ts=2 sw=2 et
