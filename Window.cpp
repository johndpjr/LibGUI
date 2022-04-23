#include "Window.h"

using namespace gui;

size_t Window::s_window_count {0};

Window::Window(int width, int height, const std::string& title)
    : m_window{glfwCreateWindow(width, height, title.data(), NULL, NULL)},
      m_root_frame{std::make_unique<Frame>(nullptr)},
      event_manager{m_window},
      m_title{title}
{
    if (!m_window) {
        throw std::runtime_error("window creation failed; call gui::Initialize() before ctor");
    }
    ++s_window_count;
}

Window::~Window()
{
    glfwDestroyWindow(m_window);
    --s_window_count;
    if (s_window_count == 0) {
        glfwTerminate();
    }
}

void Window::mainloop() {
    glfwSwapInterval(1);
    while (!glfwWindowShouldClose(m_window)) {
        glfwSwapBuffers(m_window);
        event_manager.handle_events();
    }
}
