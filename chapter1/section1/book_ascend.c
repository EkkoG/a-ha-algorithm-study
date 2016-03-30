#include <stdio.h>

int main(void) {
    int arr[5] = {5, 3, 5, 2,8};

    int res[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++) {
        int t;
        res[arr[i]]++;
    }
    for (int i = 0; i < 11; i++) {
        if (res[i] == 0) {
            continue;
        }
        for (int j = 0; j < res[i]; j++) {
            printf("%d\n", i);
        }
    }
    int t;
    scanf("%d", &t);
    return 0;
}
