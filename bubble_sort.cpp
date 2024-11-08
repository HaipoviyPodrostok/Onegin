#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include "text.h"

array_of_adresses_params bubble_sort() {

    struct array_of_adresses_params onegin_adr_params = creature_array_of_adresses();

    if (onegin_adr_params.ERROR == READING_FILE_ERROR) {
        return onegin_adr_params;
    }

    const size_t NUMBER_OF_STRING = onegin_adr_params.NUMBER_OF_STRING;

    char** onegin_array_of_adresses = onegin_adr_params.array_of_adresses;

    int result_strcmp = 0;
    int j = 0;

    do {

        j = 0;

        for (size_t i = 0; i < NUMBER_OF_STRING - 1; i++) {

            char* str1 = onegin_array_of_adresses[i];
            char* str2 = onegin_array_of_adresses[i+1];

            result_strcmp = mystrcmp(str1,str2);

            if (result_strcmp > 0) {
                swap(&onegin_array_of_adresses[i], &onegin_array_of_adresses[i+1]);
                j++;
            }
        }
    } while (j != 0);

    onegin_adr_params.array_of_adresses = onegin_array_of_adresses;

    return onegin_adr_params;
}
