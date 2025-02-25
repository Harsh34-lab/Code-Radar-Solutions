#include <stdio.h>

int main(){
    int x, z, p = 1,sum=0;
    scanf("%d",&x);
    while(x>0){
        z = x%2;
        z *= p;
        p *= 10;
        sum += z;
        x /= 2;
    }
    printf("%d",sum);
    return 0;
}