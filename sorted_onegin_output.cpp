#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include "text.h"

int sorted_onegin_output(struct array_of_adresses_params onegin_adr_params) {

    char** onegin_array_of_adresses = onegin_adr_params.array_of_adresses;
    const size_t NUMBER_OF_STRING = onegin_adr_params.NUMBER_OF_STRING;

    for (size_t i = 0; i < NUMBER_OF_STRING; i++) {
        printf("%s", onegin_array_of_adresses[i]);
        printf("\n");
    }

    return 1;
}
