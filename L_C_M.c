#include<stdio.h>

int L_C_M(int a,int b)
{
    static int temp = 1;
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        L_C_M(a,b);
        return temp;
    }
}
int main()
{
    int a,b;
    printf("enter two numbers :\n");
    scanf("%d %d",&a,&b);
    int lcm;
    if(a == b)
        lcm = a;
    if(a>b)
         lcm = L_C_M(a,b);
    else
         lcm = L_C_M(b,a);
    printf("the lcm of given numbers is %d",lcm);
    return 0;

}
