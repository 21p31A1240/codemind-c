#include<stdio.h>
int main()
{
    int n1,n2,i,GCD_n;
    scanf("%d%d",&n1,&n2);
    for(i=1;1<n1&&i<n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        GCD_n=i;
    }
    printf("%d",GCD_n);
    return 0;
}