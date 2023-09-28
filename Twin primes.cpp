// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<1){
        return false;
    }
    if(n<=3){
        return true;
    }
    for(int i=5; i*i<n; i+=6){
        if(i%2==0 || i%3==0){
            return false;
        }
    }
    return true;
}

bool Has5(int n){
    while(n>0){
        if(n %10==5){
            return true;
        }
        n/=10;
    }
    return false;
}



int main() {
    int twinPrimeCount = 0;
    int number =3;

    while(twinPrimeCount <60){
        if(isPrime(number) && isPrime(number+2)){
            twinPrimeCount ++;
             cout<<"Twin Prime "<< twinPrimeCount << "("<<number<<" ;" << number +2<<" )"<<endl;
             int numberBetween =  number+1;
             if(Has5(numberBetween)){
                 cout<<"The number between "<<number<<" and "<<number+2<<"has 5!"<<endl;
             }
             
             number+=2;
        }
    }
    
    cout<<"60th twin prime is: "<<number-2<<" "<<number<<endl;

    return 0;
}
