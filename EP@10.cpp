// to find sum of all primes below 2 million
// enlist a vector of all primes below 2 million, sieve of erastosthenes. and return the sum;
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    vector<bool> cas(2000000, true);  //, record of each number from zero to (2million - 1); 
    cas[0] = false;
    cas[1] = false;
    for(long long i = 2; i<2000000; i++){
        if(cas[i]==true){
            for(long long j = i*i; j<2000000; j=j+i){
                cas[j] = false;
            }
        }
    }

    //to add all primes in cas();
    long long sum = 0;
    for(int v = 0; v<2000000; v++){
        if(cas[v]==true){
            sum = sum + v;
        }
    }

    cout<<sum;


    return 0;
}