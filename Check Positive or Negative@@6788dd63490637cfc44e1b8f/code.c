#include <stdio.h>

int main(){
    int x;
    scanf("%d",x);
    if(x>0){
        printf("Postive");
    }
    elseif(x==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
    return 0;
}