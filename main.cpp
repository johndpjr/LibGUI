#include <GLFW/glfw3.h>

int main() {
    if(!glfwInit()) {
        // Initialization failed
    }
    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello, World", NULL, NULL);
    if (!window) {
        // Window creation failed
    }
    while (!glfwWindowShouldClose(window)) {
        // Keep running
        // Poll for events
        glfwPollEvents();
    }
    glfwTerminate();
}
