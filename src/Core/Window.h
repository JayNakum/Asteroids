#pragma once

class Window
{
public:
	Window(int width = 800, int height = 450);
	~Window();

	bool isClosed() const;
	void update();

	inline const int width() const { return m_screenWidth; }
	inline const int height() const { return m_screenHeight; }

private:
	unsigned int m_FPS = 60;
	int m_screenWidth, m_screenHeight;
};
