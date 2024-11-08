#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include "text.h"

int main() {



    char*text = reading_from_file();

    size_t count_of_bs_n = 0;
    char* adr_of_EOL = text;

    while (true) {

        if (strchr(adr_of_EOL, '\n')) {
            adr_of_EOL = strchr(adr_of_EOL, '\n') + 1;
            count_of_bs_n++;
        }

        else {
            break;
        }
    }

    const size_t NUMBER_OF_STRING = count_of_bs_n;

    char** adr_of_str = (char**)calloc(NUMBER_OF_STRING, sizeof(size_t));

    adr_of_EOL = text;

    for(int i = 0; true; i++) {

        if (strchr(adr_of_EOL, '\n')) {
            adr_of_str[i] = adr_of_EOL = strchr(adr_of_EOL, '\n') + 1;
            text[(size_t)adr_of_EOL] = '\0';
        }

        else {
            break;
        }
    }

    bubble_sort(adr_of_str, NUMBER_OF_STRING);

    for (size_t i = 0; i < NUMBER_OF_STRING; i++) {
        printf("%s", adr_of_str[i]); // FIXME  после замены на fread
    }
free(text);
free(adr_of_str);
}

int creature_array_of_adresses() {

    struct array_params {
        char* text;
        size_t SIZE_OF_FILE;
        size_t NUMBER_OF_SYMBOLS;
    };

    char*text = reading_from_file();

    size_t count_of_bs_n = 0;
    char* adr_of_EOL = text;

    while (true) {

        if (strchr(adr_of_EOL, '\n')) {
            adr_of_EOL = strchr(adr_of_EOL, '\n') + 1;
            count_of_bs_n++;
        }

        else {
            break;
        }
    }

    const size_t NUMBER_OF_STRING = count_of_bs_n;

    char** adr_of_str = (char**)calloc(NUMBER_OF_STRING, sizeof(size_t));

    adr_of_EOL = text;

    for(int i = 0; true; i++) {

        if (strchr(adr_of_EOL, '\n')) {
            adr_of_str[i] = adr_of_EOL = strchr(adr_of_EOL, '\n') + 1;
            text[(size_t)adr_of_EOL] = '\0';
        }

        else {
            break;
        }
    }

}




