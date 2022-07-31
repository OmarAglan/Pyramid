#include <OpenGL3D/Game/OglGame.h>
#include <OpenGL3D/Window/OglWindow.h>
#include <Windows.h>


OglGame::OglGame()
{
	m_Display = new OglWindow();
}

OglGame::~OglGame()
{
	delete m_Display;
}

void OglGame::run()
{
	MSG msg;
	while (m_IsRuning)
	{
		if (PeekMessage(&msg,NULL,NULL,NULL,PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);


		}

		Sleep(1);
	}
}

void OglGame::quit()
{
	m_IsRuning = false;
}
