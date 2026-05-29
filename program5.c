#include <stdio.h>
int main(){
    int num,sum=0,remainder;
    printf("enter an number:");
    scanf("%d",&num);
    if(num<0){
        num=-num;
    }
    while(num>0){    
        remainder=num%10;
        sum=sum+remainder;
        num=num/10;
    }
    printf("sum of the digit: %d\n",sum);
    return 0;
}