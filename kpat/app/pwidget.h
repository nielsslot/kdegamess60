/* -*- C++ -*-
 *
 * patience -- main program
 *   Copyright (C) 1995  Paul Olav Tvete
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose and without fee is hereby granted,
 * provided that the above copyright notice appear in all copies and that
 * both that copyright notice and this permission notice appear in
 * supporting documentation.
 *
 * This file is provided AS IS with no warranties of any kind.  The author
 * shall have no liability with respect to the infringement of copyrights,
 * trade secrets or any patents by this file or any part thereof.  In no
 * event will the author be liable for any lost revenue or profits or
 * other special, indirect and consequential damages.
 *
 *
 * Heavily modified by Mario Weilguni <mweilguni@sime.com>
 *
 */

#ifndef PWIDGET_H
#define PWIDGET_H

#ifndef Q_OS_SYMBIAN
#include <kxmlguiwindow.h>
#include <krecentfilesaction.h>
#else
#include <QMainWindow>
#include <QMap>
#endif

class DemoBubbles;
class PatienceView;
class DealerScene;
class KToggleAction;
class KSelectAction;
class KRecentFilesAction;
class KAction;
class QStackedWidget;
class cardMap;
class DealerInfo;

#ifndef Q_OS_SYMBIAN
class pWidget: public KXmlGuiWindow {
#else
class pWidget: public QMainWindow {
#endif
    Q_OBJECT

public:
    pWidget();
    ~pWidget();

public slots:
    void undoMove();
    void redoMove();
    void newGameType(int id);
    void startRandom();
    void restart();
    void slotShowGameSelectionScreen();

#ifndef Q_OS_SYMBIAN
    void openGame();
    bool openGame(const KUrl &url, bool addToRecentFiles = true);
    void saveGame();
#endif

    void newGame();
    void chooseGame();
    void gameLost();
    void slotGameInfo(const QString &);
    void slotUpdateMoves();
    void helpGame();
    void enableAutoDrop();
    void enableSolver();
    void enableRememberState();
    void toggleDemoAction(bool active);
#ifndef Q_OS_SYMBIAN
    void showStats();
#endif

    void slotGameSolverStart();
    void slotGameSolverWon();
    void slotGameSolverLost();
    void slotGameSolverUnknown();
    void slotPickRandom();
    void slotSelectDeck();

    void slotSnapshot();

    void slotGameSelected(int id);

protected:
    virtual void closeEvent(QCloseEvent * e);
    virtual void saveNewToolbarConfig();

private slots:
    void slotSnapshot2();

private:
    void setGameCaption();
    bool allowedToStartNewGame();
    void startNew(long gameNumber);
    void updateActions();
    void updateGameActionList();

private:
    // Members
    KAction        *undo;
    KAction        *redo;
    KAction        *demoaction;
    KAction        *hintaction;
    KAction        *drawaction;
    KAction        *dealaction;
    KAction        *redealaction;
    KAction        *dropaction;
    KAction        *gamehelpaction;
    KToggleAction  *autodropaction;
    KToggleAction  *solveraction;
    KToggleAction  *rememberstateaction;
#ifndef Q_OS_SYMBIAN
    KRecentFilesAction  *recent;
#endif

    cardMap        *m_cards; // possibly move to PatienceView
    QMap<int, const DealerInfo*>  m_dealer_map;
    QMap<int, const DealerInfo*>::const_iterator  m_dealer_it;
    int m_freeCellId;

    QStackedWidget *m_stack;
    PatienceView   *dill;
    DealerScene    *m_dealer;
    DemoBubbles    *m_bubbles;
};

#endif
