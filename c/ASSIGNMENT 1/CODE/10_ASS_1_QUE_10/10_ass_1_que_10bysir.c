#include<stdio.h>
int main()
{   int rad;
    float area;
    printf("Enter the 'r' radius of circle\n");
    scanf("%d",&rad);
    area=3.14*rad*rad;
    printf("The area of circle is %f having the radius %d  ",area,rad);
    return 0;
}