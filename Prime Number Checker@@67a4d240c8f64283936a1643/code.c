void isPrime(int x){
    for(int i = 2; i<=x; i++){
        if(x%i==0){
            if(x==i){
                printf("1");
            }
            else{
                printf("0");
                break;
            }
        }
    }
}