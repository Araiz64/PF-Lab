#include <stdio.h>
#include <string.h>

int main() {
    char feedback[200];
    char updated[250] = "";
    int len;

    printf("Enter customer feedback: ");
    fgets(feedback, 200, stdin);

    len = strlen(feedback);
    if (len > 0 && feedback[len - 1] == '\n') {
        feedback[len - 1] = '\0';
    }

    printf("Total characters: %lu\n", strlen(feedback));

    char *goodPtr = strstr(feedback, "good");
    char *badPtr = strstr(feedback, "bad");

    if (goodPtr != NULL && badPtr != NULL) {
        printf("Sentiment Report: Mixed (contains both 'good' and 'bad')\n");
    } else if (goodPtr != NULL) {
        printf("Sentiment Report: Positive ('good' found)\n");
    } else if (badPtr != NULL) {
        printf("Sentiment Report: Negative ('bad' found)\n");
    } else {
        printf("Sentiment Report: Neutral\n");
    }

    if (badPtr != NULL) {
        int index = badPtr - feedback;
        strncat(updated, feedback, index);
        strcat(updated, "not good");
        strcat(updated, badPtr + 3);
        strcpy(feedback, updated);

        printf("Updated Review: %s\n", feedback);
    }

    return 0;
}
