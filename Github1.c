#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,quo,rem;
    scanf("%d %d",&a,&b);
    if (5<=a<=2500 && 5<=b<=2500)
    {quo=a/b;rem=a%b; 
    printf("%d\n",quo);
    printf("%d",rem);}
    else
    {return 0;}         
}
