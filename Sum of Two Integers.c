#include<stdio.h>

int intSum(int a,int b)
{
    int total;
    total=a+b;
    return total;
}

int main()
{
    int num1,num2,sum;
    scanf("%d%d",&num1,&num2);
    sum=intSum(num1,num2);
    printf("%d",sum);

return 0;
}
