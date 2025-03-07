#include <stdio.h>

int main() {
    int x, y;
    char z;
    scanf("%d %d %c",&x,&y,&z);
    switch (z){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b); 
            break;   
    }
}