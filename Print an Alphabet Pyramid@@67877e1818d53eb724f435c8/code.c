#include <stdio.h>
int main() {
    int a;
    int k = 1;
    scanf("%d",&a);
    for(int i = 1; i <= a; i++) {
        char b = 'A';
        while(k<= i){
            printf("%c ",b);
            b++;
            k++;
        }
        printf("\n");
    }
    return 0;
}