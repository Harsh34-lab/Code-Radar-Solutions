char isPrime(int num){
    for(int i = 1; i<=num; i++){
        if(num%i==0){
            if(i==1 && num==1){
                return 0;
            }
            if(num==0){
                return 0;
            }
            if(num==i){
                return 1;
            }
            else if(i==1){
                continue;
            }
            else{
                return 0;
                break;
            }
        }
    }
}