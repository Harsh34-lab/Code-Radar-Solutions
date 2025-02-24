#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1; i <= a; i++) {
        for(int j = a;j >=1 ;j--){
            char char1 = 'A';
            printf("%c ",char1);
            char++;
        }
        printf("\n");
    }
    return 0;
}