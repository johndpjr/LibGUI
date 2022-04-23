#include "Frame.h"

Frame::Frame(Widget* parent)
    : Widget{parent,
             Rect{0, 0, 0, 0},
             Color{colors::WHITE},
             true}
{
}

Frame::~Frame()
{
}

void Frame::draw() {

}

void Frame::attach_widget(WPtr widget) {
    widget->set_parent(this);
    m_children.push_back(std::move(widget));
}

Frame::WPtr Frame::detach_widget(const Widget &widget) {
    auto found = std::find_if(m_children.begin(), m_children.end(), [&] (WPtr& p) { return p.get() == &widget; });
    assert(found != m_children.end());

    WPtr result = std::move(*found);
    result->set_parent(nullptr);
    m_children.erase(found);
    return result;
}
