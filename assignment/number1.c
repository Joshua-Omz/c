//Write a program to find the second largest element in an array.
//Name:Omisanya joshua
//MatricNo:IFT/23/4151

#include<stdio.h>

#include <stdio.h>

int main()
{
    int arr[100];          // array (max 100 elements - enough for beginners)
    int n;                 // how many numbers the user will enter
    int i;
    int largest;
    int second_largest;

    // 1. Ask user how many numbers
    printf("How many numbers? ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least 2 numbers to find second largest!\n");
        return 0;
    }

    // 2. Read all the numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Find the largest number (first pass)
    largest = arr[0];           // start with first number
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // 4. Find the second largest (second pass)
    //    → look for biggest number that is SMALLER than largest
    second_largest = -999999;   // very small number to start
    for (i = 0; i < n; i++) {
        if (arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    // 5. Show result
    if (second_largest == -999999) {
        printf("There is no second largest number (all numbers are the same)\n");
    } else {
        printf("Largest number     = %d\n", largest);
        printf("Second largest number = %d\n", second_largest);
    }

    return 0;
}