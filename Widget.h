#ifndef LIBGUI_WIDGET_H
#define LIBGUI_WIDGET_H

#include "CommonTypes.h"


class Widget {
public:
    Widget(Widget* parent, Rect rect, Color bg, bool is_visible);
    virtual ~Widget();

protected:
    Widget* m_parent;
    Rect m_rect;
    Color m_bg;
    bool m_visible;

public:
    virtual void draw() = 0;

    Color background();
    void set_background(Color bg);
    bool visible();
    void set_visible(bool val);
    Widget* parent();
    void set_parent(Widget* parent);
};


#endif //LIBGUI_WIDGET_H
