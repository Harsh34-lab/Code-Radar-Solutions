int isPrime(int num){
    if(num == 0 || num == 1 ){
        return 0;
    }
    else{
        for(int i = 2; i<=num; i++){
            if(num%i == 0){
                if(num==i){
                    return 1;
                }
                else{
                    return 0;
                }
            }
        }
    }
}