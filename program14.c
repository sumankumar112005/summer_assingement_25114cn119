#include <stdio.h>
unsigned long long get_nth_fibonacci(int n){
    if(n<0) return 0;
    if(n==0) return 0;
    if(n==1) return 1;

    unsigned long long prev2 =0;
    unsigned long long prev1 =1;
    unsigned long long current =0;

    for(int i=2;i<=n;i++){
        current=prev1+prev2;
        prev2=prev1;
        prev1=current;
    }
    return current;
}
int main(){
    int n;
    printf("enter the value of n(0-indexed):");
    if(scanf("%d",&n)!=1||n<0){
        printf("enter a number\n");
        return 1;
    }
    unsigned long long result =get_nth_fibonacci(n);
    printf("the %dth fibonacci number:%llu\n",n,result);
}