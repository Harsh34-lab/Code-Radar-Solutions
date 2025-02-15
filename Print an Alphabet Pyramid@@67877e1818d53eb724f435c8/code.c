#include <stdio.h>
int main() {
    int a;
    char b = 'A';
    int k = 1;
    scanf("%d",&a);
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j<=a-i ;j++){
            printf(" ");
        }
        while(k<= i){
            printf("%c ",b);
            b++;
            k++;
        }
        printf("\n");
    }
    return 0;
}