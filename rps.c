#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    // setting a seed , not sure what it means 
    int userInput, compInput ;
    srand(time(NULL));
    const char *options[] = {"Rock", "paper", "scissors"};

    //getting input from the user 
    
    printf("Choose an option:\n0. Rock\n1. Paper\n2. Scissors\nEnter your choice (0-2): ");
    scanf("%d", &userInput);
    
    // Validate user input
    if (userInput < 0 || userInput > 2) {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 1;
    }
    
    compInput= rand() % 3;
    const char *userInput_ = options[userInput];
    const char *compInput_= options[compInput];
    
    printf("Computer chose: %s\nAnd you  chose: %s\n", compInput_, userInput_);

    // Determine winner
    if (userInput == compInput) {
        printf("It's a tie!\n");
    }
    else if ((userInput == 0 && compInput == 2) ||  // Rock beats Scissors
             (userInput == 1 && compInput == 0) ||  // Paper beats Rock
             (userInput == 2 && compInput == 1)) {  // Scissors beats Paper
        printf("You win!\n");
    }
    else {
        printf("Computer wins!\n");
    }

    return 0;

}