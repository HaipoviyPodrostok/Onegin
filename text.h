enum ERRORS {
    READING_FILE_ERROR = 2,
};

struct text_params {
    char* text;
    size_t SIZE_OF_FILE;
    size_t NUMBER_OF_SYMBOLS;
    int ERROR;
};

struct array_of_adresses_params {
    char* text;
    char** array_of_adresses;
    size_t NUMBER_OF_STRING;
    int ERROR;
};

int mystrcmp(const char* str1, const char* str2);
//array_of_adresses_params bubble_sort();
array_of_adresses_params creature_array_of_adresses();
text_params reading_from_file();
int sorted_onegin_output(array_of_adresses_params onegin_adr_params);
void swap(char** a, char** b);
void myqsort(char** onegin_array_of_adresses, int low, int high);
int arr_split(char** onegin_array_of_adresses, int low, int high);
