//Write a program to rotate an array left by n positions.

#include<stdio.h>
#include<stdlib.h>

int main (){
    int n;
    int *arr = (int*)malloc(n * sizeof(int));
    int *temp = (int*)malloc(n * sizeof(int));
    int length = sizeof(arr)/sizeof(arr[0]);
    int k;
    
    //determin the length of the array
    printf("what is the length of the array");
    scanf("%d",&n);
    if (arr == NULL){
        printf("memory allocation failed");
        free(temp);
        free(arr);
    }

    //As the user inputs, you store and read
    printf("input each number one after the other after pressing enter");
      for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);

    }
    
    // ask how many positons to rotate to left 
    printf("Rotate from which indexed position?\n");
    scanf("%d", &k);
    // show the array before rotation
      printf("Array BEFORE left rotation by %d:\n", k);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // start sorting the one that moves to the front 
    // the section after the position k
    int idx = 0;
    for(int i = k ; i < n; i++ ){
        temp[idx] = arr[i];// since i starts from 0 it makes the k position the new head  and everything that follows after the corresponding tale
        idx++;
    }
    // now the part of the array that will move to the back
    for (int i = 0; i < k; i++)
    {
       temp[idx] = arr[i];
       idx++;
    }
    // copy to the original array
    for (int i = 0 ; i < n ; i++){
        arr[i]= temp[i];
    }
    
   // show the results
    printf("Array after left rotation by %d:\n", k);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
free(temp);
    return 0;
    
}