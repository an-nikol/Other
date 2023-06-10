#include<stdio.h>

int  printNums(int number); // prototype

int main(void)
{
    // declare a starting point
    int number = 1;

    // descriptive text
	printf("\n\n Recursion : print first 50 natural numbers :\n");
	printf("-------------------------------------------------\n"); 
	printf(" The natural numbers are :");

    // calling the recursive function
    printNums(number);
    printf("\n\n");
    return 0;
}
int printNums(int number)
{
    // base case
    if(number<=50)
    {
         printf(" %d ",number);
         printNums(number + 1);
    }
}
