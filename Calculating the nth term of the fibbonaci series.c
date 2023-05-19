//Mazen Ahmed Ramzy
//6999
//Question 7

#include <stdio.h>
#include <stdlib.h>


int fib (int n)
{
    if(n==1)
        return 0;

    if(n==2||n==3)
        return 1;

return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    printf("Calculating the nth term of the fibbonaci series\nEnter n: ");
    scanf("%d",&n);
    printf("The %dth term of the fibbonaci series is %d",n,fib(n));


    return 0;
}
