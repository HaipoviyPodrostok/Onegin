#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include "text.h"

array_of_adresses_params creature_array_of_adresses() {

    struct array_of_adresses_params onegin_adr_params = {NULL, NULL, 0, 1};
    struct text_params onegin_params = reading_from_file();

    onegin_adr_params.text = onegin_params.text;

    if (onegin_params.ERROR == READING_FILE_ERROR) {
        onegin_adr_params.ERROR = onegin_params.ERROR;
        return onegin_adr_params;
    }

    char* onegin_text = onegin_params.text;

    size_t str_counter = 0;
    char* str_begin_adr = 0;
    str_begin_adr = onegin_text;

    while (true) {

        if (strchr(str_begin_adr, '\n')) {
            str_begin_adr = strchr(str_begin_adr, '\n') + sizeof(char);
            str_counter++;
        }

        else {
            break;
        }
    }

    const size_t NUMBER_OF_STRING = str_counter;

    char** onegin_array_of_adresses = (char**) calloc(NUMBER_OF_STRING + 1, sizeof(size_t));

    str_begin_adr = onegin_text;

    onegin_array_of_adresses[0] = onegin_text;

    for (int i = 1; true; i++) {

        if (strchr(str_begin_adr, '\n')) {
            onegin_array_of_adresses[i] = str_begin_adr = strchr(str_begin_adr, '\n') + sizeof(char);
            *(str_begin_adr - sizeof(char)) = '\0';
        }

        else {
            break;
        }
    }

    onegin_adr_params.array_of_adresses = onegin_array_of_adresses;
    onegin_adr_params.NUMBER_OF_STRING = NUMBER_OF_STRING;


    return onegin_adr_params;
}
