#include<stdio.h>
 
int TERM; // global variable
int fibonacci(int first_number, int second_number); // prototype
 
int main(void) 
{
    static int first_number = 0, second_number = 1; // static int stays the same till the end of the program
    // descriptive output
    printf("\n\n Recursion : Print Fibonacci Series :\n");
    printf("-----------------------------------------\n");   
    printf(" Input number of terms for the Series (< 20) : ");

    //getting user input
    scanf("%d", &TERM);
    printf(" The Series are :\n"); 

    // printing the 1st number of the Fibo 
    printf(" 1  ");

    // calling the fibonacci function
    fibonacci(first_number, second_number);
    printf("\n\n");
    return 0;
}
 
int fibonacci(int first_number, int second_number) 
{
   // counter for terms
   static int i = 1;

   // initialise the sum
   int next_number;
   
   // base case check if recursion has reached the term series
   if (i == TERM)
      return (0);
   else 
   {
      next_number = first_number + second_number;
      first_number = second_number;
      second_number = next_number;
      printf("%d  ", next_number);
      
      i++;
      fibonacci(first_number, second_number); //recursion, calling the function fibonacci itself
   }
   return (0);
}
