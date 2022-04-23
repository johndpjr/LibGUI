#ifndef LIBGUI_WINDOW_H
#define LIBGUI_WINDOW_H

#include <GLFW/glfw3.h>
#include <memory>
#include <string>

#include "Frame.h"


class Window {
public:
    Window(int width, int height, const std::string& title);
    ~Window();

private:
    GLFWwindow* m_window;
    std::unique_ptr<Frame> m_root_frame;
    std::string m_title;

public:
    void mainloop();
};


#endif //LIBGUI_WINDOW_H
