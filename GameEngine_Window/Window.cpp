
#include "D3DApplication.h"
#include <Windows.h>
#include "Color.h"

using namespace GameEngine;

class WindowApp : public D3DApplication
{
public:
	WindowApp(HINSTANCE hInstance);

	virtual void UpdateScene(float dt);
	virtual void DrawScene();
};

WindowApp::WindowApp(HINSTANCE hInstance)
	:D3DApplication(hInstance)
{

}

void WindowApp::UpdateScene(float dt)
{

}

void WindowApp::DrawScene()
{
	assert(md3dImmediateContext);
	assert(mSwapChain);

	Color clearcolor(49.0f / 255.0f, 77.0f /255.0f, 121.0f / 255.0f, 1.0f);
	md3dImmediateContext->ClearRenderTargetView(mRenderTargetView, reinterpret_cast<const float*>(&clearcolor));
	md3dImmediateContext->ClearDepthStencilView(mDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	HR(mSwapChain->Present(0, 0));
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