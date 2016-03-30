#include <stdio.h>
#include <stdlib.h>

#define GET_ARRAY_LEN(array,len) {len = (sizeof(array) / sizeof(array[0]));}

struct student {
    char name[21];
    int score;
};

int main(void) {
    struct student arr[4];

    for (int i = 0; i < 4; i++) {
        struct student a = {
            .name = "a",
            .score = rand() % 100
        };
        arr[i] = a;
    }

    int len;
    GET_ARRAY_LEN(arr, len);

    for (int j = 0; j < (len - 1); j++) {

        for (int i = 0; i < (len - j - 1); i++) {
            if (arr[i].score < arr[i + 1].score) {
                struct student tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%s %d\n", arr[i].name, arr[i].score);
    }
    return 0;
}
