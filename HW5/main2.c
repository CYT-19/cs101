#include <stdio.h>

int main() {
    double PI = 4.0f;
    int x = 1, n = -1;
    
    for (int i = 3; ; i += 2, x++) {
        PI += n *(4.0 / i);
        n = -n;
        
        int a = PI * 1000000;
        
        if (a == 3141590) {
          break;  
        }
    }
    printf("PI = %.5f\n", PI);
    printf("最小的x = %d\n", x+1);
    return 0;
}
