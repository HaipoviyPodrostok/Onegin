#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include "text.h"

text_params reading_from_file() {

    struct text_params onegin_params = {NULL, 0, 0, 1};

    FILE* file_from = fopen("input.txt", "r");

    int ERROR = 0;

    if (!file_from) {
        printf("error while opening file");
        ERROR = READING_FILE_ERROR;
        return onegin_params;
    }

    fseek(file_from, 0, SEEK_END);
    const size_t SIZE_OF_FILE = (size_t) ftell(file_from);
    fseek(file_from, 0, SEEK_SET);

    const size_t NUMBER_OF_SYMBOLS = SIZE_OF_FILE;

    char* onegin_text = (char*) calloc(NUMBER_OF_SYMBOLS + 1, sizeof(char));

    onegin_text[NUMBER_OF_SYMBOLS] = '\0';

    fread(onegin_text, sizeof(char), NUMBER_OF_SYMBOLS, file_from);

    fclose(file_from);

    onegin_params.text = onegin_text;
    onegin_params.SIZE_OF_FILE = SIZE_OF_FILE;
    onegin_params.NUMBER_OF_SYMBOLS = NUMBER_OF_SYMBOLS;
    onegin_params.ERROR = ERROR;

    return onegin_params;
}
