#ifndef LIBGUI_WINDOW_H
#define LIBGUI_WINDOW_H

#include <string>
#include <GLFW/glfw3.h>

class Window {
public:
    Window(int width, int height, const std::string& title);
    Window(Window &parent);
    ~Window();

private:
    GLFWwindow* m_window;
    std::string m_title;

public:
    void mainloop();
};


#endif //LIBGUI_WINDOW_H
