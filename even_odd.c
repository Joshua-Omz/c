#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main(){
int evenN=0,evenC = 0;
int oddN=0, oddC= 0;
float avgE =0, avgO = 0;
int num = 0;
int *number =(int*)malloc(sizeof(num));

printf("input the number : ");
scanf("%d",&num);
// check if the memory allocation worked
if (number == NULL){
  printf("Memory allocation failed Exiting ..");
  return 1 ;
}

//starting to fill up the array 
for(int i=0; i < num ; i++){
    number[i] = i + 1;
}

/*checking the array i just filled for the even number
and storing it in their respective variables */
for (int i = 0; i < num; i++)
{
  if(number[i] % 2 == 0){
    evenN += number[i];
    evenC++;
  }
  else{
    oddN+= number[i];
    oddC++;
  }
}

//calculating the average
if( evenC > 0){
    avgE =(float)evenN/evenC;
}
if(oddC > 0 ){
  avgO = (float)oddN/oddC;
}

printf("user input:%d\n the number of even number: %d\n  the  average of even numbers: %.3f\n",num,evenC,avgE);
free(number);
return 0;
  
}