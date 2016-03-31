#include <stdio.h>

#define GET_ARRAY_LEN(array,len) {len = (sizeof(array) / sizeof(array[0]));}

int arr[] = {6, 1, 2, 7, 9, 3, 4, 5, 10, 8};

void print_state() {
    int len;
    GET_ARRAY_LEN(arr, len);
    printf("printf state begin\n");
    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }
    printf("printf state end\n");
}

void quicksort(int left, int right) {
    if (left > right) {
        return;
    }

    int i = left;
    int j = right;

    int basic = arr[left];

    while (i != j) {
        while (arr[j] >= basic && i < j) {
            j--;
        }

        while (arr[i] <= basic && i < j) {
            i++;
        }

        if (i < j) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }

    arr[left] = arr[i];
    arr[i] = basic;

    quicksort(left, i - 1);
    quicksort(i + 1, right);
}

int main(void) {
    int len;
    GET_ARRAY_LEN(arr, len);

    quicksort(0, len - 1);

    print_state();

    return 0;
}
