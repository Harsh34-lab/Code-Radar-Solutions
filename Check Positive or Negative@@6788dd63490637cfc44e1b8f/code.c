#include <stdio.h>

int main(){
    int x;
    scanf("%d",x);
    if(x>=0){
        if(x>0){
            printf("Positive");
        }
        else{
            printf("Zero");
        }
    }
    else{
        printf("Negative");
    }
    return 0;
}