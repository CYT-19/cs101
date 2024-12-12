#include <stdio.h>
int main() {
    double PI = 4.0;
    int x = -1,a,b = 0;
    
    for (int i = 3;i <= 999999 ;i+=2) {
        PI += x*(4.0 / i);
        x = -x;
        
        b += b + 1;
        a = PI*10e5;
        if (a == 314159 )
        {
          break;  
        }
        
    }
    printf("PI = %.5f\n", PI);
    printf("最小的x = %d\n",b);
    return 0;
}
