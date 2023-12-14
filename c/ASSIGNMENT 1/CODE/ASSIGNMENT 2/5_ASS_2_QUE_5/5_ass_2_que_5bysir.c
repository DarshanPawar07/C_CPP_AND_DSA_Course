#include<stdio.h>
int main()

{   
    float cp,sp,profit;
    
    printf("Enter the cost and selling price of 1 dozen bananas\n");
    scanf("%f%f",&cp,&sp);
    profit=(sp-cp)*25/12;
    printf("profit is %f",profit);


   
    return 0;

}