#include <stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i= 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int even = 0, odd = 0;
    for(int i= 0;i<n;i++){
        if(arr[0]%2 == 0 || arr[i] == 0){
            even++;
        }
        else if(!(arr[0]%2 == 0)){
            odd++;
        }
    }
    printf("%d %d",even,odd);
}