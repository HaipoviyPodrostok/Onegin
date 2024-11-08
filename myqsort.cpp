#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include "text.h"

void myqsort(char** onegin_array_of_adresses, int low, int high) {

    if (low < high) {
        int board_index = arr_split(onegin_array_of_adresses, low, high);
        myqsort(onegin_array_of_adresses, low, board_index - 1);
        myqsort(onegin_array_of_adresses, board_index + 1, high);
    }
}
