#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char questions[][200] = {
        "1. What command do you use to output data to the screen?",
        "2. A Syntax Error is... ?",
        "3. A memory location that holds a single letter or number is called _________.",
        "4. A short section of code written to complete a task.",
        "5. What dose this equation mean? a != t"
    };
    char choices[][200] = {
        "A. Cout<<", "B. Cout>>", "C. Cin<<", "D. Output>>",
        "A. An error you will never find.", "B. An error you find at the end when the program gives out a wrong value due to logic error.", "C. An error caused by language rules being broken.", "D. An error due to user error",
        "A. Double", "B. Int", "C. Char", "D. Word",
        "A. Buffer", "B. Array", "C. Loop", "D. Function",
        "A. A is assigned T", "B. A is not equal to T", "C. A and T are equal", "D. T is added to A"
    };
    char answers[5] = {'A', 'C', 'C', 'D', 'B'};

    // 500 is the total used memory (for 5 questions), 100 is the allocated memory for an array item
    // So, 500 / 100 = 5 number of questions
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score;
    int questionLength;

    printf("\n=====================\n===== QUIZ GAME =====\n=====================\n\n");

    for(int i = 0; i < numberOfQuestions; i++)
    {
        questionLength = strlen(questions[i]);
        printf("\n");
        while(questionLength != 0)
        {
            printf("*");
            questionLength--;
        }
        printf("\n");
        
        printf("%s\n", questions[i]);

        questionLength = strlen(questions[i]);
        while(questionLength != 0)
        {
            printf("*");
            questionLength--;
        }
        printf("\n\n");

        for(int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", choices[j]);
        }

        printf("Your Answer: ");
        scanf("%c", &guess);
        getchar();

        guess = toupper(guess);

        if(guess == answers[i])
        {
            printf("\nCORRECT!\n");
            score++;
        }
        else
        {
            printf("\nWRONG!\n");
            printf("The correct answer is %c.\n", answers[i]);
        }
    }

    printf("\n===== YOUR FINAL SCORE: %d/%d =====\n", score, numberOfQuestions);

    return 0;
}