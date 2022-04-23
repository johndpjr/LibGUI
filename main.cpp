#include "Window.h"
#include "GUI.h"

int main() {
    gui::Initialize();
    gui::Window window {640, 480, "Hello, World!"};
    window.mainloop();
}
