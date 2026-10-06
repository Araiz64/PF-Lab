#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() {
    int size;
    
    printf("Enter the size of the hollow diamond (values should be odd only): ");
    scanf("%d", &size);

    if (size % 2 == 0) {
        printf("Can't Build Diamond, Even Size\n");
    } 
    else {
        int mid = size / 2;
        char arr[size + 1]; 
        arr[size] = '\0';

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (abs(i - mid) + abs(j - mid) == mid) {
                    arr[j] = '*';
                } else {
                    arr[j] = ' ';
                }
            }
            printf("%s\n", arr);
        }
    }

    return 0;
}

//                           *    0
//                          * *    1
//                         *   *    2
//                        *     *    3
//                         *   *    2
//                          * *    1
//                           *    0
//
//
//
//
//
//
