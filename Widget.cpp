#include "Widget.h"

Widget::Widget(Widget* parent, Rect rect, Color bg, bool is_visible)
    : m_parent{parent}, m_rect{rect}, m_bg{bg}, m_visible{is_visible}
{
}

Widget::~Widget()
{
}

Color Widget::background() { return m_bg; }

void Widget::set_background(Color bg) { m_bg = bg; }

bool Widget::visible() { return m_visible; }

void Widget::set_visible(bool val) { m_visible = val; }

Widget* Widget::parent() { return m_parent; }

void Widget::set_parent(Widget *parent) { m_parent = parent; }
