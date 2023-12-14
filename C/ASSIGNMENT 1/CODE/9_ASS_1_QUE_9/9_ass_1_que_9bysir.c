#include<stdio.h>
int main()
{
    int length,breadth,area;
    printf("Enter the length and breadth of rectangle in metre\n");
    scanf("%d%d",&length,&breadth);
    area=length*breadth;
    printf("The Area Of Rectangle Is %d metre", area);
    return 0;
}