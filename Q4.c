#include <stdio.h>

int main() {

    int selection;
    printf("Enter the selection\n1 for greeting option\n2 for Study options\n3 for Food Options\n4 for Gender\n");
    scanf("%i", &selection);

    switch (selection) {
        case 1:
            printf("Enter the selection\n1 for Hello\n2 for How are you?\n3 for Goodbye\n");
            scanf("%i", &selection);
            if (selection == 1)
                printf("Hello\n");
            else if (selection == 2)
                printf("How are you?\n");
            else if (selection == 3)
                printf("Goodbye\n");
            else
                printf("Invalid selection\n");
            break;
        case 2:
            printf("Enter the selection\n1 for Programming\n2 for Mathematics\n3 for AI\n");
            scanf("%i", &selection);
            if (selection == 1)
                printf("Programming is the process of creating a set of instructions that tell a computer how to perform a task.\n");
            else if (selection == 2)
                printf("Mathematics is the study of numbers, shapes, and patterns.\n");
            else if (selection == 3)
                printf("Artificial intelligence (AI) is intelligence demonstrated by machines, in contrast to the natural intelligence displayed by humans and animals.\n");
            else
                printf("Invalid selection\n");
            break;
        case 3:
            printf("Enter the selection\n1 for Today\n2 for Tomorrow\n3 for Forecast\n");
            scanf("%i", &selection);
            if (selection == 1)
                printf("The temperature is 26*C\n");
            else if (selection == 2)
                printf("The temperature will be 28*C\n");
            else if (selection == 3)
                printf("The forecast is sunny\n");
            else
                printf("Invalid selection\n");
            break;    
        case 4:
            printf("Enter the selection\n1 to know about Chatbot\n2 for Command List\n3 to Exit\n");
            scanf("%i", &selection);
            if (selection == 1)
                printf("I am a chatbot designed to assist users with various tasks and provide information on a wide range of topics.\n");
            else if (selection == 2)
                printf("The command list includes options for greeting, study, food, and gender.\n");
            else if (selection == 3)
                printf("Exiting the program. Goodbye!\n");
            else
                printf("Invalid selection\n");
            break;
        default:
            printf("Invalid selection\n");





    return 0;
}