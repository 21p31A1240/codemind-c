#include<stdio.h>
#include<math.h>
int main()
{
    int a,n;
    float f;
    scanf("%d",&a);
    f=sqrt((double)a);
    n=f;
    if(n==f)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}