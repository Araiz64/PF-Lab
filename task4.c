#include <stdio.h>

struct Address {
    char city[50];
    int zipCode;
    char state[50];
};

struct Student {
    int rollNo;
    char name[50];
    float cgpa;
    struct Address studentAddress;
};

int main() {
    struct Student student1 = {101, "Ali", 3.75, {"Karachi", 75500, "Sindh"}};

    printf("Roll No: %d\n", student1.rollNo);
    printf("Name: %s\n", student1.name);
    printf("CGPA: %.2f\n", student1.cgpa);
    printf("City: %s\n", student1.studentAddress.city);
    printf("Zip Code: %d\n", student1.studentAddress.zipCode);
    printf("State: %s\n", student1.studentAddress.state);

    return 0;
}
