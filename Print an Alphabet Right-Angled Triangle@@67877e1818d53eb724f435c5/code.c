#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    char a = 'A';
    for(int i = 1;i<=a;i++){
        int j=1;
        while(int j<=i){
            printf("%c ",a);
            a++;
            j++;
        }
        printf("\n");
    }
}