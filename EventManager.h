#ifndef LIBGUI_EVENTMANAGER_H
#define LIBGUI_EVENTMANAGER_H

#include <GLFW/glfw3.h>
#include <iostream>


namespace gui { class EventManager; }

class gui::EventManager {
public:
    explicit EventManager(GLFWwindow *window);

private:
    GLFWwindow *m_window;
    static double m_cur_xpos;
    static double m_cur_ypos;

public:
    void handle_events();

    static void mouse_button_callback(GLFWwindow *window, int button, int action, int mods);
    static void cursor_position_callback(GLFWwindow *window, double xpos, double ypos);
};

#endif //LIBGUI_EVENTMANAGER_H
