#include <stdio.h>

int main(){
    int x,y, z, p = 1,sum=0;
    scanf("%d",&x);
    y = x;
    while(y>=1){
        y = x/2;
        z = x%2;
        z *= p;
        p *= 10;
        sum += z;
    }
    printf("%d",sum);
    return 0;
}