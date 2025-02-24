#include <stdio.h>

int main(){
    int x,y, z, sum=0;
    scanf("%d",&x);
    while(x>=1){
        int y = x/2;
        int z = x%2;
        int p *= z*10;
        sum += p;
    }
    printf("%d",sum);
    return 0;
}