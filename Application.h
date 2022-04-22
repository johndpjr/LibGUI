#ifndef LIBGUI_APPLICATION_H
#define LIBGUI_APPLICATION_H

#include <string>
#include "Window.h"

class Application {
public:
    Application(const std::string& name);
    ~Application();

private:
    const std::string m_name;
    Window* m_root;

public:
    void run();
};


#endif //LIBGUI_APPLICATION_H
