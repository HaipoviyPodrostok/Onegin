#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include "text.h"

void swap(char** a, char** b) {
    char* bufer = 0;
    bufer = *a;
    *a = *b;          //void*?
    *b = bufer;
}
