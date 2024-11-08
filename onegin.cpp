#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include "text.h"

int main() {

    struct array_of_adresses_params onegin_adr_params = creature_array_of_adresses();

    int low = 0;
    int high = (int) onegin_adr_params.NUMBER_OF_STRING - 1;
    char** array_of_adresses = onegin_adr_params.array_of_adresses;

    myqsort(array_of_adresses, low, high);

    if (onegin_adr_params.ERROR != 1) {
        return 0;
    }

    if (sorted_onegin_output(onegin_adr_params) != 1) {
        return 0;
    }

    free(onegin_adr_params.text);
    free(onegin_adr_params.array_of_adresses);

    return 0;
}






