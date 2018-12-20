
#ifndef __Application_h__
#define __Application_h__

#include "Prerequest.h"
#include "GameTimer.h"
#include <windows.h>

NAMESPACEBEGIN(GameEngine)

class Application
{
public:
	Application(HINSTANCE hInstance);
	~Application();

	virtual bool Init() = 0;
	virtual int Run() = 0;
protected:
	HINSTANCE mhAppInst;
	GameTimer mTimer;

	std::wstring mMainWndCaption;
	int mClientWidth;
	int mClientHeight;
};

NAMESPACEEND

#endif