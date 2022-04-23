#include "GUI.h"

namespace gui {
    void Initialize() {
        if (!glfwInit()) {
            throw std::runtime_error("glfw::Initialize(): initialization failed");
        }
    }
}