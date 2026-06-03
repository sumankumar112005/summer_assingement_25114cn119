#include <stdio.h>
int main(){
    int start,end,i,j,prime;
    printf("enter the start bound of the interval=");
    scanf("%d",&start);
    printf("enter end bound of the interval= ");
    scanf("%d",&end);
    printf("prime number between %d and %d are:",start,end);
    for(i=start;i<=end;i++){
        if(i<=1){
            continue;
        }
        prime=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}