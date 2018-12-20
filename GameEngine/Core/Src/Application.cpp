
#include "Application.h"

NAMESPACEBEGIN(GameEngine)

Application::Application(HINSTANCE hInstance)
	:mMainWndCaption(L"D3D11 Application"),
	mClientWidth(1024),
	mClientHeight(768)
{

}

Application::~Application()
{

}

NAMESPACEEND
