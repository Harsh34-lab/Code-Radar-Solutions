#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    while(x>=1){
        int y = x/2;
        int z = x%2;
        printf("%d",z);
        x = y;
    }
    return 0;
}