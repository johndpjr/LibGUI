#include "EventManager.h"

using namespace gui;

double EventManager::m_cur_xpos {0};
double EventManager::m_cur_ypos {0};

EventManager::EventManager(GLFWwindow *window)
    : m_window{window}
{
    // Set callbacks
    glfwSetMouseButtonCallback(m_window, EventManager::mouse_button_callback);
//    glfwSetCursorPosCallback(m_window, cursor_position_callback);
}

void EventManager::handle_events() {
    glfwWaitEvents();
}

void EventManager::mouse_button_callback(GLFWwindow *window, int button, int action, int mods) {
    if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS) {
        glfwGetCursorPos(window, &m_cur_xpos, &m_cur_ypos);
        std::cout << "Mouse click (" << m_cur_xpos << ", " << m_cur_ypos << ")\n";
    }
}

void EventManager::cursor_position_callback(GLFWwindow* window, double xpos, double ypos) {
    std::cout << "x: " << xpos << " | y: " << ypos << std::endl;
}