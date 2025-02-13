#ifndef _GAME_CONTROLLER_H
#define _GAME_CONTROLLER_H

#include "base.h"
#include "block.h"

#include <QApplication>
#include <QWidget>
#include <QTimer>
#include <QKeyEvent>

//This file handle user input and game clock.

#define SPEED_CONSTANT 1000
#define KEY_SPEED 10

//This is a widget attached to main window to listen to user input.
class GameController : public QWidget{
	Q_OBJECT

private:
	QTimer* tickTimer;
	QTimer* keyTime;

public: 
	GameController(QWidget* parent = 0);
	~GameController();

	void keyPressEvent(QKeyEvent *event);

protected slots:
	void ticksEvent();
};

#endif
