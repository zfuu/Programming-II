#include <stdio.h>

struct color{
    float r;
    float g;
    float b;
};

struct point{
    float x;
    float y;
    float z;
};

struct line{
    struct point start;
    struct point end;
};

struct polyline{
    struct line line;
    struct color color;
    float thinkness;
    struct polyline *next;
};

