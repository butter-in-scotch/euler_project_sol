//to get nth prime number;
//Trial Division:
// This method involves checking each number for primality by testing divisibility against known primes.
// Steps:
// Start with the first prime number (2) and keep a count of how many primes you have found.
// For each subsequent integer, check if it is divisible by any of the previously found primes.
// If it is not divisible by any, it is a prime number. Increment your count until you reach n


#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

long long nthprime(int x){
    vector<long long> kp; // kp is known primes.
    kp.push_back(2); // as first prime is 2.
    long long victim = 3; // the first victim( to check if its prime);
    while(kp.size()<x){ // loop as long as x number of primes are stored in known primes.
        // check if victim is divisible by any of the known primes.
        // if victim is not divisivle by any of the known primes, then add it in known primes; 
        int count = 0; // to keep a count of number of known primes that divides victim;
        for(int i = 0; i<kp.size(); i++){
            if(victim%kp[i]!=0){  // if a prime doent divide victim;
                count++;
            }
        }
        // if count is equal to number of known primes, that is when victim is a new prime,,, add it in kp;
        if(count==kp.size()){
            kp.push_back(victim);
        }

        victim++;


    }

    return kp[kp.size()-1];

}

int main(){
    cout<<nthprime(10001);
    return 0;
}

