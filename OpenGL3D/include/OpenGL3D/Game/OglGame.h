#pragma once
class OglWindow;

class OglGame
{
public:
	OglGame();
	~OglGame();


	void run();
	void quit();

protected:

	bool m_IsRuning = true;
	OglWindow* m_Display = nullptr;
};