#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        int j=1;
        char b = 'A';
        while(int j<=i){
            printf("%c ",b);
            b++;
            j++;
        }
        printf("\n");
    }
    return 0;
}