#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include "text.h"

int mystrcmp(const char* str1, const char* str2) {

    int i = 0,j = 0;

    for (; str1[i] && str2[j]; i++, j++) {

        //assert(i  );

        while (!isalnum(str1[i])&& str1[i] && str2[j])
            i++;
        while (!isalnum(str2[j])&& str1[i] && str2[j])
            j++;
        if (str1[i] != str2[j])
            break;
    }
    return str1[i] - str2[j];
}
