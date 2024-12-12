#include <stdio.h>
int main()
{
    int i = 12345;
    int a,b,c,d,e;
    a = i/10000;
    b = i/1000-10*a;
    c = i/100-100*a-10*b;
    d = i/10-1000*a-100*b-10*c;
    e = i-10000*a-1000*b-100*c-10*d;
    
    printf("%d",10000*a+1000*e+100*c+10*d+1*b);
    printf("\n");

}
