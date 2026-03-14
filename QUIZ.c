#include<stdio.h>

int main()
{
    int n;
    int ans1, ans2, ans3, ans4, ans5;
    int total = 0;

    printf("     WELCOME TO QUIZ GAME!        \n\n");
    printf("Enter 7 to start the Quiz:\n");
    printf("Enter 1 to End Quiz:\n\n");
    scanf("%d", &n);

    if(n == 7)
    {
        printf("\nQUIZ IS STARTED!.............\n\n");

        printf("1. What is the correct syntax to print in C?\n\n");
        printf("1) print(\"Hello\")\n");
        printf("2) cout<<\"Hello\"\n");
        printf("3) printf(\"Hello\");\n");
        printf("4) echo(\"Hello\");\n\n");
        printf("Enter Your Answer: ");
        scanf("%d", &ans1);

        if(ans1 == 3)
        {
            printf("Correct Answer\n");
            total = total + 5;
            printf("You Scored 5 points\n\n");
        }
        else
        {
            printf("Incorrect Answer\n");
            printf("You Scored 0 points\n\n");
        }

        printf("2. Which header file is used for printf() and scanf()?\n\n");
        printf("1) stdlib.h\n");
        printf("2) stdio.h\n");
        printf("3) math.h\n");
        printf("4) string.h\n\n");
        printf("Enter Your Answer: ");
        scanf("%d", &ans2);

        if(ans2 == 2)
        {
            printf("Correct Answer\n");
            total = total + 5;
            printf("You Scored 5 points\n\n");
        }
        else
        {
            printf("Incorrect Answer\n");
            printf("You Scored 0 points\n\n");
        }

        printf("3. Which data type is used to store a character?\n\n");
        printf("1) int\n");
        printf("2) char\n");
        printf("3) float\n");
        printf("4) double\n\n");
        printf("Enter Your Answer: ");
        scanf("%d", &ans3);

        if(ans3 == 2)
        {
            printf("Correct Answer\n");
            total = total + 5;
            printf("You Scored 5 points\n\n");
        }
        else
        {
            printf("Incorrect Answer\n");
            printf("You Scored 0 points\n\n");
        }

        printf("4. Which symbol is used to end a statement in C?\n\n");
        printf("1) .\n");
        printf("2) :\n");
        printf("3) ;\n");
        printf("4) ,\n\n");
        printf("Enter Your Answer: ");
        scanf("%d", &ans4);

        if(ans4 == 3)
        {
            printf("Correct Answer\n");
            total = total + 5;
            printf("You Scored 5 points\n\n");
        }
        else
        {
            printf("Incorrect Answer\n");
            printf("You Scored 0 points\n\n");
        }

        printf("5. Which loop executes at least once?\n\n");
        printf("1) for loop\n");
        printf("2) while loop\n");
        printf("3) do-while loop\n");
        printf("4) None\n\n");
        printf("Enter Your Answer: ");
        scanf("%d", &ans5);

        if(ans5 == 3)
        {
            printf("Correct Answer\n");
            total = total + 5;
            printf("You Scored 5 points\n\n");
        }
        else
        {
            printf("Incorrect Answer\n");
            printf("You Scored 0 points\n\n");
        }

        printf("=================================\n");
        printf("Your Total Score = %d / 25\n", total);
        printf("=================================\n");
    }
    else if(n == 1)
    {
        printf("QUIZ ENDED!..................\n\n");
    }
    else
    {
        printf("INVALID INPUT\n");
    }

    return 0;
}