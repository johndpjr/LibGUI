#include <GLFW/glfw3.h>
#include "Window.h"

int main() {
    if(!glfwInit()) {
        // Initialization failed
    }
    Window window {640, 480, "Hello, World!"};
    window.mainloop();
    glfwTerminate();
}
