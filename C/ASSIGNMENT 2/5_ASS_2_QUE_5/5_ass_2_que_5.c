#include<stdio.h>
int main()

{   
    int cp,sp,n=2.083,result; //n=no. of dozens
    printf("Enter the cost price of 1 dozen bananas\n");
    scanf("%d",&cp);
    printf("Enter the selling price of 1 dozen bananas\n");
    scanf("%d",&sp);
   
    if(sp>cp){
    printf("You are in profit and your profit is %d",(n*sp)-(n*cp));
    }
    else{
    printf("You are in loss and your loss is %d",(n*cp)-(n*sp));
    }
   
    return 0;

}