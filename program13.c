#include <stdio.h>
int main(){
    int n;
    unsigned long long first=0,second=1,next;
    printf("enter the number of terms:");
    if(scanf("%d",&n)!=1||n<=0){
        printf("enter a valid positive integer\n");
        return 1;
    }
    for(int i=1;i<=n;++n){
        printf("llu",first);
        if(i<n){
            printf(",");
        }
        next=first+second;
        first=second;
        second=next;
    }
    prrintf("\n");
    return 0;
}