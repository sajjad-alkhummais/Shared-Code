#include <stdio.h>



void findPrimes(int n, int primes[]){
    if (n < 1) return;


    for(int i = 0; i < n; i++){
        primes[i] = i + 2;
    }


    int currentPrime;
    

    for(int i = 2; i * i <= n; i++){

        currentPrime = i;
        while(i * currentPrime - 2 < n){
            primes[i * currentPrime - 2] = -1;
            currentPrime++;
            
        }

    }

    

}

int main(){

    int n;
    scanf("%d", &n);
    n--;
    int primes[n];
    findPrimes(n, primes);
    for(int i = 0; i < n; i++){
        if(primes[i] != -1)
        printf("%d, ", primes[i]);

    }

    printf("\nEnd of primes\n");

    return 0;
}
