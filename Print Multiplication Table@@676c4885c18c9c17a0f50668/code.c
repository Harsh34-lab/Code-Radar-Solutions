#include <stdio.h>

int main(){
    int n,x=1;
    scanf("%d",&n);
    while(x<=10){
        printf("%d X ",n);
        printf("%d = ",x);
        printf("%d\n",n*x);
        x++;
    }
}