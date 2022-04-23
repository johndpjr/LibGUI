#include "Window.h"

Window::Window(int width, int height, const std::string& title)
    : m_window{glfwCreateWindow(width, height, title.data(), NULL, NULL)},
      m_root_frame{std::make_unique<Frame>(new Frame{nullptr})},
      m_title{title}
{
    if (!m_window) {
        // Window creation failed
    }
}

Window::~Window() {
    glfwDestroyWindow(m_window);
}

void Window::mainloop() {
    while (!glfwWindowShouldClose(m_window)) {
        glfwSwapBuffers(m_window);
        glfwPollEvents();
    }
}
