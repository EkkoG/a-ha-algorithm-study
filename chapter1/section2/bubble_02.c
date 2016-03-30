#include <stdio.h>

int main(void) {
    int arr[5] = {5, 3, 5, 2,8};
    for (int j = 5; j > 0; j--) {

        int last = 0;
        for (int i = 0; i < j; i++) {
            if (arr[i] > arr[last]) {
                int tmp = arr[last];
                arr[last] = arr[i];
                arr[i] = tmp;
            }
            last = i;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
