#include <stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i= 0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i = 0; i<=n-1; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            break;
        }
        else if(arr[n-1]>arr[i]){
            printf("%d",arr[i]);
            break;
        }
        else{
            printf("-1");
        }
    }
}