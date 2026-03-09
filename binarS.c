#include<stdio.h>
#include<stdlib.h>

int bin(int arr[], int size,int target){
    int left = 0, right= size - 1;
    int mid = 0;
    while (left <=  right){
        mid = (left + right)/2;

        if (arr[mid]==target){
            printf("we found the target %d in the index %d", target, arr[mid], &arr[mid]);
            return mid;
        }
        else if (arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid -1;
            printf("we couldnt find it ");
            return -1;

        }

    }
   

    

}
int main(){
    int numbers[]= {3,4,6,6,6};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    bin(numbers,size,4);


    
}