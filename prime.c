#include<stdio.h>
int is_prime(int n)
{
   for(int i=2;i<n;i++)
   {
       if(n%i == 0)
        return 0;
        else
       return 1;
   }
}
int main()
{
    int num;
   printf("enter a number:");
   scanf("%d" ,&num);
   if(is_prime(num))
     printf("%d is a prime a number",num);
   else
    printf("%d is not a prime number",num);
  return 0;
}


