#include<stdio.h>


int count_dig(int num)
{
    if(num == 0)
        return 0;
    return (num%10) + count_dig(num/10);
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
   int sum = count_dig(num);
  printf("sum is %d",sum);
  return 0;
}

