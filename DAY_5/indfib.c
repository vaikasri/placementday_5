#include <stdio.h>
 int main()
 {
    int x;
    scanf("%d",&x);
    int a=1,b=1;
    int c=0;
    if((x==1) || (x==2)) printf("%d \n",&a,&b);
    else
    {for(int i=3;i<=x;i++)
        {
            c=a+b;
            a=b;
            b=c;
        } printf("%d",c);
    }

 }