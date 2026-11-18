#include <stdio.h>
#include <stdlib.h>

int main() {
    int rollNo;
    char name[50];
    float marks;
    FILE *fptr;

    fptr = fopen("marks.txt", "r");
    if (fptr == NULL) {
        printf("Error: File Not Found!");
        exit(1);
    }

    printf("RollNo\t\tName\t\tMarks\n");
    printf("----------------------------------------\n");

    while (fscanf(fptr, "%d %s %f", &rollNo, name, &marks) != EOF) {
        printf("%d\t\t%s\t\t%.2f\n", rollNo, name, marks);
    }

    fclose(fptr);

    return 0;
}
