#include <stdio.h>
int main()
{
  double Pi,t;

  for(int n = 0;n<=100;n++)
  {
    Pi += ((4/(2*n+1))-(4/(2*n+3)));
  }
  printf("%f",Pi);
  printf("\n");
}
