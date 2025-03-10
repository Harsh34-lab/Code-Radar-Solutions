void isPrime(int num){
    for(int i = 2; i<=num; i++){
        if(num%i==0){
            if(num==i){
                printf("1");
            }
            else{
                printf("0");
                break;
            }
        }
    }
}