#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include "text.h"

char* reading_from_file() {

    struct array_params text_params;

    FILE* file_from = fopen("input.txt", "r");

    if (!file_from) {
        printf("error while opening file");
    }

    fseek(file_from, 0, SEEK_END);
    const size_t text_params.SIZE_OF_FILE = (size_t)ftell(file_from);
    fseek(file_from, 0, SEEK_SET);

    const size_t text_params.NUMBER_OF_SYMBOLS = text_params.SIZE_OF_FILE;

    char* text = (char*)calloc(text_params.NUMBER_OF_SYMBOLS + 1, 1);

    text[text_params.SIZE_OF_FILE] = '\0';

    fread(text, 1, text_params.NUMBER_OF_SYMBOLS, file_from);

    fclose(file_from);

    return text_params;
}
