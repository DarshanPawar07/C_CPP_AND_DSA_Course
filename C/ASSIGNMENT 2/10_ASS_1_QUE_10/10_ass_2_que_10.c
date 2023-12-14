#include<stdio.h>
int main()
{
  int HH,MM;
  printf("Enter the in (HH:MM) Format\n");
  scanf("%d:%d",&HH,&MM);
  printf("%d-Hour & %d-Minute",HH,MM);
}