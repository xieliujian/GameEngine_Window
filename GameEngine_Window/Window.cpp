
#include "D3DApplication.h"
#include <Windows.h>
#include "Color.h"

using namespace GameEngine;

class WindowApp : public D3DApplication
{
public:
	WindowApp(HINSTANCE hInstance);
};

WindowApp::WindowApp(HINSTANCE hInstance)
	:D3DApplication(hInstance)
{

}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE prevInstance,
	PSTR cmdLine, int showCmd)
{
	WindowApp theApp(hInstance);

	if (!theApp.Init())
		return 0;

	return theApp.Run();

	return 0;
}