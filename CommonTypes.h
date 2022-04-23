#ifndef LIBGUI_COMMONTYPES_H
#define LIBGUI_COMMONTYPES_H


#include <cstdint>

struct Rect {
    int x;
    int y;
    int width;
    int height;
};

struct Color {
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

#endif //LIBGUI_COMMONTYPES_H
