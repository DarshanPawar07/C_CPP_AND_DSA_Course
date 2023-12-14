#include<stdio.h>
int main()
{ 
  int radius;
  float circum;
  printf("Enter the radius of circle\n");
  scanf("%d", &radius);
  circum=2*2.17*radius;
  printf("The circumference of circle is %f",circum);
  return 0;
}