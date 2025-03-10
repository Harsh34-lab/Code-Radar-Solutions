char isPrime(int num){
    for(int i = 1; i<=num; i++){
        if(num%i==0){
            if(num==i){
                return 1;
            }
            else{
                return 0;
                break;
            }
        }
    }
}