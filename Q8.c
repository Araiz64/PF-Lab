#include <stdio.h>

int main() {
    int arr[20];
    int size = 8;

    printf("Enter 8 integers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int max = arr[0], min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Largest: %d | Smallest: %d\n", max, min);

    int target, found_index = -1;
    printf("Enter a number to search: ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found_index = i;
            break;
        }
    }
    if (found_index != -1)
        printf("Found at index: %d\n", found_index);
    else
        printf("Number not found in array.\n");

    int ins_index, ins_val;
    printf("Enter index and value to insert: ");
    scanf("%d %d", &ins_index, &ins_val);
    for (int i = size; i > ins_index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[ins_index] = ins_val;
    size++;

    int del_index;
    printf("Enter index to delete: ");
    scanf("%d", &del_index);
    for (int i = del_index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("Final Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}