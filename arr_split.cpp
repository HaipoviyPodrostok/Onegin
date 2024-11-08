#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include "text.h"

int arr_split(char** onegin_array_of_adresses, int low, int high) {
    int i = 0;
    char* pivot = 0;

    i = low - 1;
    pivot = onegin_array_of_adresses[high];

    for (int j = low; j <= high - 1; j++) {
        if (mystrcmp(onegin_array_of_adresses[j], pivot) <= 0) {
            i++;
            swap(&onegin_array_of_adresses[i], &onegin_array_of_adresses[j]);
        }
    }

    swap(&onegin_array_of_adresses[i+1], &onegin_array_of_adresses[high]);
    return(i + 1);
}
