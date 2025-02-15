#include <stdio.h>
int main() {
    int a;
    scanf("%d",a);
    
    for(int i = 1; i <= a; i++) {
        int j = 1;
        for(;j <= 2*i - j;j++){
            printf("%d ",j);
        }
        j++;
        printf("\n");
    }
}