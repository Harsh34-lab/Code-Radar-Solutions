#include <stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i= 0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int largest = arr[0] , smallest = arr[0];
    for(int j = 1; j<n; j++){
        if(arr[j] > largest){
            largest = arr[j];
        }
        else if(arr[j] < smallest){
            smallest = arr[j];
        }
    }
    printf("%d %d",smallest , largest);
}