#include <stdio.h>

#define GET_ARRAY_LEN(array,len) {len = (sizeof(array) / sizeof(array[0]));}

int main(void) {
    int arr[] = {5, 3, 5, 100, 200, 21, 24, 2, 8};

    int len;
    GET_ARRAY_LEN(arr, len);

    for (int j = 0; j < (len - 1); j++) {

        for (int i = 0; i < (len - j - 1); i++) {
            if (arr[i] < arr[i + 1]) {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
