#include <stdio.h>
int main(){
    int num,rem;
    long long product=1;
    printf("enter any number:");
    scanf("%d",&num);
    if(num==0){
        product=0;
    }
    else{
        if(num<0){
            num=-num;
        }
        while(num>0){
            rem=num%10;
            product=product*rem;
            num=num/10;
        }
    }
    printf("productmof digits=%lld\n",product);
    return 0;
}