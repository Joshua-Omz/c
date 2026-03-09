
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX_LEN 50

int main(){
    char secretWord[] = "BEEHIVE";
    int length = strlen(secretWord);

    char *displayMask = malloc((length + 1) * sizeof(char));


    for(int i = 0 ; i < length ; i++){
        displayMask[i]='_';

    }
    printf("%s\n", displayMask);

}

     


    
