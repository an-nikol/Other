#include<stdio.h>
 
int sumOfRange(int last_number);
 
int main(void) 
{
   int last_number;
   int sum;// initialise the int
	printf("\n\n Recursion : calculate the sum of numbers from 1 to n :\n");
	printf("-----------------------------------------------------------\n");    
 
   printf(" Input the last number of the range starting from 1 : ");
   scanf("%d", &last_number);
 
   sum = sumOfRange(last_number); // call the function
   printf("\n The sum of numbers from 1 to %d : %d\n\n", last_number, sum);
 
   return (0);
}
 
int sumOfRange(int last_number) 
{
    //initialise 
   int res;
   // base case 
   if (last_number == 1) 
   {
      return (1);
   } 
   else 
   {
      res = last_number + sumOfRange(last_number - 1); //calling the function sumOfRange itself
   }
   return (res);
}
