#include <stdio.h>
int main(){
    int num1,num2,or_num1,or_num2,temp;
    printf("enter two integer=");
    scanf("%d%d",&num1,&num2);
    or_num1=num1;
    or_num2=num2;
    while(num2!=0){
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    printf("the GCD of %d and %d is = %d\n",or_num1,or_num2);
    return 0;
}