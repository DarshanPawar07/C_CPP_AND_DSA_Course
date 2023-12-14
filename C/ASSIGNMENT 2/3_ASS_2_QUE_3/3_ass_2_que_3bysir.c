#include<stdio.h>
int main()
{
    int principle,rate,time;
    float interest;
    printf("Enter the principle,rate,time \n");
    scanf("%d%d%d",&principle,&rate,&time);
    interest=(principle*rate*time)/100.0;
    printf("The final amount will be %f\n",interest);
    return 0;
}
