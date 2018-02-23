#ifndef _COMMON_HEADERS_
#define _COMMON_HEADERS_

#include <math.h>
#include <stdio.h>
#include <string.h>
class Global {
public:
        int xres, yres;
        char keys[65536];
        Global() {
                xres = 1250;
                yres = 900;
                memset(keys, 0, 65536);
        }
};

/*
x11 and opengl gose here

just to keep main.cpp clean
*/

#endif
