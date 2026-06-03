#include <stdio.h>
int main(){
    int n1,n2,lcm;
    printf("enter two positive integer=");
    scanf("%d%d",&n1,&n2);
    lcm=(n1>n2)?n1:n2;
    while(1){
        if(lcm%n1==0 && lcm%n2==0){
            printf("the LCM of %d and %d is =%d \n",n1,n2,lcm);
            break;
        }
        ++lcm;
    }
    return 0;
}
