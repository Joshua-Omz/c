#include<stdio.h>


int main(){
   float celsius = 0, fahr = 0;
   float lower;

   printf("input the  temperature in fahrenheit:");
   scanf("%f",&fahr);

   printf("what you inputed : %.3f \n",fahr);
   celsius = (5.0/9.0) *(fahr -32.0);
   

   printf("temperature %.3f \t and in celsius is %.3f\n",fahr,celsius);

   if (celsius<= 20){
      printf("its gonna be pretty cold now isnt it");
   }
   else if (celsius >20 && celsius < 36){
      printf("Nice weather we are having");
   }
   else{
      printf("you probably be cooked alive if you go outside ");
   }

   printf("this is how much memory you used and their corresponding address\n");
   printf("memory  \t address");
   printf("the variable celsius: %zu\t and is located %p\n",sizeof(celsius),&celsius);
   printf("the variable fahrenheit: %zu\t and is located %p\n",sizeof(fahr),&fahr);
   printf("the variable lowerBound: %zu\t and is located %p\n",sizeof(lower),&lower);
   printf("Total float variable:%zu",sizeof(celsius) +sizeof(fahr)+ sizeof(lower));

  
   

   


  
   

}