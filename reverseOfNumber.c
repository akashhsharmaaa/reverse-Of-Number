#include<stdio.h>
int main(void)
{
  int n,temp;
  printf("ENTER NUMBER\n");
scanf("%d", &n);
printf("Number in reverse");
  for (size_t i = 0; n > 0; i++) {
    temp=n%10;
    n=n/10;
    printf("%d",temp);
  }
}
