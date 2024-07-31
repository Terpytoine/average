#include <stdio.h>

int main(void) 
{
    int num_tests;
    printf("Welcome to your test average machine!\n");

    // Ask user for the number of tests
    printf("Enter the number of tests: ");
    scanf("%d", &num_tests);

    if (num_tests <= 0) 
    {
        printf("Number of tests must be greater than zero.\n");
        return 1;
    }

    int scores[num_tests];
    int sum = 0;

    // Input scores
    for (int i = 0; i < num_tests; i++) 
    {
        printf("Test %d score: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    // Calculate average
    double average = (double)sum / num_tests;
    printf("The average score is: %.2f\n", average);

    return 0;
}
