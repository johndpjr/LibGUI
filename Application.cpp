#include "Application.h"

Application::Application(const std::string& name) : m_name{name} {
    if (!glfwInit()) {
        // Initialization failed
    }
}

Application::~Application() {
    glfwTerminate();
}

void Application::run() {

}
