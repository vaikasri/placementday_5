/*The "fabbiano series" is a common misspelling for the Fibonacci sequence
adding previous two element
1, 1, 2, 3, 5, 8 
  2  3  5  8
  */
 #include <stdio.h>
 int main()
 {
    int x;
    scanf("%d",x);
    int a,b;
    for(int i=1;i<=x;i++)
    {
        if((i==1) || (i==2)) printf("%d \n",&a,&b);
        else {
            int c=a+b;
            printf("%d",c);
            a=b;
            b=c;
        }
    }

 }