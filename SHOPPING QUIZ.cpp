#include <stdio.h>

int main() {
    char answer;
    int score = 0;

    printf("WELCOME TO THE MINI SURVEY\n");
    printf("Let's find out if you're a shopaholic or not!\n\n");

    printf("1. How often do you shop online?\n");
    printf("A. Rarely\nB. Sometimes\nC. Often\n");
    printf("Enter your answer (A/B/C): ");
    scanf(" %c", &answer);
    switch(answer) {
        case 'A': case 'a': score += 1; break;
        case 'B': case 'b': score += 2; break;
        case 'C': case 'c': score += 3; break;
        default: printf("Invalid answer.\n");
    }

    printf("\n2. Do you often buy things you don't need?\n");
    printf("A. Never\nB. Sometimes\nC. Always\n");
    printf("Enter your answer (A/B/C): ");
    scanf(" %c", &answer);
    switch(answer) {
        case 'A': case 'a': score += 1; break;
        case 'B': case 'b': score += 2; break;
        case 'C': case 'c': score += 3; break;
        default: printf("Invalid answer.\n");
    }

    printf("\n3. Do you feel happy after shopping?\n");
    printf("A. Not really\nB. Sometimes\nC. Very much\n");
    printf("Enter your answer (A/B/C): ");
    scanf(" %c", &answer);
    switch(answer) {
        case 'A': case 'a': score += 1; break;
        case 'B': case 'b': score += 2; break;
        case 'C': case 'c': score += 3; break;
        default: printf("Invalid answer.\n");
    }

    printf("\nYou've finished the quiz.\n");

    if(score <= 3) {
        printf("You're not a shopaholic.\n");
    } else if(score <= 9) {
        printf("You're supposed to be a shopaholic.\n");
    } else {
        printf("You're truly a shopaholic!\n");
    }

    return 0;
}
