// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num <=1){
        return false;
    }
    if(num<=3){
        return true;
    }
    if(num %2==0 || num % 3==0){
        return false;
    }
    
    for(int i = 5; i*i<num; i+=6){
        if(num % i==0 || num % (i+2) == 0){
            return false;
        }
    }
    return true;
}

bool hasDigit5(int num){
    while(num >0){
        if(num % 10 == 5){
            return true;
        }
        num /= 10;
    }
    return false;
}




int main() {
    // Write C++ code here
    int twinPrimeCount = 0;
    int number = 3;
    
    while(twinPrimeCount < 60){
        if(isPrime(number) && isPrime(number+2)){
            twinPrimeCount ++;
            cout<<"Twin Prime "<< twinPrimeCount << "("<<number<<" ;" << number +2<<" )"<<endl;
            
            int numBetween = number +1;
            if(hasDigit5(numBetween)){
            cout<<"Number between the primes is: " << numBetween<< "and iut contains 5" << endl;
            }
        }
        number +=2;
    }
    

    return 0;
}
