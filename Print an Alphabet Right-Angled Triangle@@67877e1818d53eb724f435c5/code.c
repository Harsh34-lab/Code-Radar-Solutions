#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        while(int j<=i){
            char a = 'A';
            printf("%s ",a);
            a++;
            j++;
        }
        printf("\n");
    }
}