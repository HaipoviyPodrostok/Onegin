#include <stdio.h>
#include <math.h>
#include <ctype.h>

int str_replacement(int result_strcmp);
int strcmp(const char* str1, const char* str2);
int bubble_sort(const char* text[], int size);

int main() {

    const char* text[] = {

        "I zhit' toropitsya, i chuvstvovat' speshit.\n" ,
        "Knyaz'  Vyazemskij 2\n" ,
        "Knyaz  Gyazemskij 2\n" ,
        "Moj dyadya samyh chestnyh pravil,\n"             ,
        "Kogda ne v shutku zanemog,\n"             ,
        "On uvazhat' sebya zastavil\n"             ,
        "I luchshe vydumat' ne mog.\n"             ,
        "Ego primer drugim nauka;\n"             ,
        "No, bozhe moj, kakaya skuka\n"             ,
        "S bol'nym sidet' i den' i noch',\n"             ,
        "Ne othodya ni shagu proch'!\n"             ,
        "Kakoe nizkoe kovarstvo\n"             ,
        "Poluzhivogo zabavlyat',\n"             ,
        "Emu podushki popravlyat',\n"             ,
        "Pechal'no podnosit' lekarstvo,\n"             ,
        "Vzdyhat' i dumat' pro sebya:\n"             ,
        "Kogda zhe chert voz'met tebya!\n"               ,
        "Tak dumal molodoj povesa,\n"             ,
        "Letya v pyli na pochtovyh,\n"             ,
        "Vsevyshnej voleyu Zevesa\n"             ,
        "Naslednik vsekh svoih rodnyh. -\n"             ,
        "Druz'ya Lyudmily i Ruslana!\n"             ,
        "S geroem moego romana\n"              ,
        "Bez predislovij, sej zhe chas\n"              ,
        "Pozvol'te poznakomit' vas:\n"              ,
        "Onegin, dobryj moj priyatel',\n"

    };

    const int SIZE = sizeof(text) / sizeof(text [0]);

    bubble_sort(text, SIZE);

    for (int i = 0; i < SIZE; i++) {
        printf("%s", text[i]);
    }
}

// text[i] === *(text + i)

int strcmp(const char* str1, const char* str2) {
    int i = 0;
    int j = 0;

    while (str1[i] && str2[j]) {

        while (!isalnum(str1[i]))
            i++;
        while (!isalnum(str2[j]))
            j++;

        if (str1[i] != str2[j])
            break;

        i++;
        j++;
    }
    return str1[i] - str2[j];
}

int bubble_sort(const char* text [], int size) {

    int result_strcmp = 0;
    int j = 0;

    do {

        j = 0;

        for (int i = 0; i < size - 1; i++) {

            const char* str1 = text[i];
            const char* str2 = text[i+1];

            result_strcmp = strcmp(str1,str2);

            if (result_strcmp > 0) {

                const char* bufer = str1;
                text[i] = text[i+1];
                text[i+1] = bufer;
                j++;

            }

        }

    } while (j != 0);

    return 1;

}



