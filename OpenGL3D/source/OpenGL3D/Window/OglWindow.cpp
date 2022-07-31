#include <OpenGL3D/Window/OglWindow.h>
#include <windows.h>
#include <assert.h>

OglWindow::OglWindow()
{
	WNDCLASSEX wn = {};
	wn.cbSize = sizeof(WNDCLASSEX);
	wn.lpszClassName = L"OpenGL3DWindow";
	wn.lpfnWndProc = DefWindowProc;


	assert(RegisterClassEx(&wn));

	RECT rc = { 0,0,1024,768 };

	AdjustWindowRect(&rc, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, false);

	m_Handle = CreateWindowEx(NULL, L"OpenGL3DWindow", L"Main Window - East Wind", WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, 
		CW_USEDEFAULT, CW_USEDEFAULT, rc.right - rc.left , rc.bottom - rc.top, NULL, NULL, NULL, NULL);

	assert(m_Handle);

	ShowWindow((HWND)m_Handle, SW_SHOW);
	UpdateWindow((HWND)m_Handle);
}

OglWindow::~OglWindow()
{
	DestroyWindow((HWND)m_Handle);
}