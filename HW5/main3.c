#include <stdio.h>
int main()
{
    printf(" "); 
  for( int i = 0; i<81 ;i++)  
    {
        printf("%d",i/9 + 1);
        printf("*");
        printf("%d",i%9 + 1);
        printf("=");
        printf("%d",(i/9+1)*(i%9+1));
        if(i%9 + 1 == 9)
        {
            printf("\n");
        }
        printf(" "); 
    }
    return 0;
}
