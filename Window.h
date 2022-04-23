#ifndef LIBGUI_WINDOW_H
#define LIBGUI_WINDOW_H

#include <GLFW/glfw3.h>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

#include "EventManager.h"
#include "Frame.h"


namespace gui { class Window; }

class gui::Window {
public:
    Window(int width, int height, const std::string &title);

    ~Window();

private:
    GLFWwindow *m_window;
    std::unique_ptr<Frame> m_root_frame;
    gui::EventManager event_manager;
    std::string m_title;

    static size_t s_window_count;

public:
    void mainloop();
};

#endif //LIBGUI_WINDOW_H
