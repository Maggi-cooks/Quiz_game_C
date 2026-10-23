#include <stdio.h>
#include <ctype.h>
int main()
{
    char guess;
    int score = 0;

    printf("======================================\n");
    printf(" Welcome to the Quiz Game!\n");
    printf("======================================\n");

   
    // Question 1
    printf(" what is the format specifier for float in C?\n");
    printf("\nA. %%d\nB. %%c\nC. %%f\nD. %%s\n");
     printf("Enter your answer: ");
    scanf(" %c", &guess);
    guess = toupper(guess);
    if (guess == 'C')
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
       printf("Incorrect! The correct answer is C. %%f\n");
    }
    
    //question 2
    printf("what is the use of semicolon in C?");
    printf("\nA. To declare a variable \nB. To terminate a statement\nC. To define a function\nD. To comment a line\n");
    printf("Enter your answer: ");
    scanf(" %c", &guess);   
    guess = toupper(guess); 
    if (guess == 'B')
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect! The correct answer is B. To terminate a statement\n");
    }
    //Question 3
    printf("what is the full form of WIFI");
    printf("\nA. Wireless Fidelity\nB. Wide Frequency\nC. Wireless Functionality\nD. Wide Fidelity\n");
    printf("Enter your answer: ");
    scanf(" %c", &guess);
    guess = toupper(guess);
    if (guess == 'A')
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect! The correct answer is A. Wireless Fidelity\n");
    }
 // Question 4
    printf("what is the full form of FOMO");
    printf("\nA. Fear of Missing Out\nB. Fear of Money Out\nC. Fixed over Monthly Operations\nD. Fibre Optic Media Output\n");
    printf("Enter your answer: ");
    scanf(" %c", &guess);

    guess = toupper(guess);
    if (guess == 'A')
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect! The correct answer is A. Fear of Missing Out\n");
    }

    //Question 5  
    printf("What is the name of the AI application developed by Anthropic?");
    printf("\nA. sonnet\nB. ChatGPT\nC. Haiku\nD. Claude\n");
    printf("Enter your answer: ");
    scanf(" %c", &guess);
    guess = toupper(guess);
    if (guess == 'D')
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect! The correct answer is D. Claude\n");
    }  

    printf("Percentage: %d%%\n", score * 100 / 5);
    if (score == 5) printf("Perfect!\n");
    else if (score >= 3) printf("Good job!\n");
    else printf("Keep practicing!\n");

    printf("======================================\n");
    printf("Your final score is: %d\n", score);
    printf("======================================\n");
    return 0;
}