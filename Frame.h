#ifndef LIBGUI_FRAME_H
#define LIBGUI_FRAME_H

#include <cassert>
#include <memory>
#include <vector>

#include "constants.h"
#include "Widget.h"


class Frame: public Widget {
public:
    typedef std::unique_ptr<Widget> WPtr;

public:
    Frame(Widget* parent);
    ~Frame() override;

public:
    virtual void draw() override;

    void attach_widget(WPtr widget);
    WPtr detach_widget(const Widget& widget);

private:
    std::vector<WPtr> m_children;
};


#endif //LIBGUI_FRAME_H
