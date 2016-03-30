#include <stdio.h>

int main(void) {
    int arr[5] = {5, 3, 5, 2,8};
    for (int j = 0; j < 4; j++) {
        printf("begin\n");
        for (int i = 0; i < 5; i++) {
            printf("%d\n", arr[i]);
        }
        printf("\n");

        int last = 0;
        for (int i = 0; i < 5; i++) {
            if (arr[i] > arr[last]) {
                int tmp = arr[i];
                arr[i] = arr[last];
                arr[last] = tmp;
            }
            last = i;
        }

        for (int i = 0; i < 5; i++) {
            printf("%d\n", arr[i]);
        }
        printf("end\n");
        printf("\n");
    }
    return 0;
}
