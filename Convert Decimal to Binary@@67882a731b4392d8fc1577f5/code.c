#include <stdio.h>

int main(){
    int x,y, z, p = 1,sum=0;
    scanf("%d",&x);
    while(x>=1){
        int y = x/2;
        int z = x%2;
        p *= z*10;
        sum += p;
        x = y;
    }
    printf("%d",sum);
    return 0;
}