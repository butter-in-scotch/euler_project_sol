#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    long long n;
    cout<<"type in number: ";
    cin>>n;
    vector<bool> cas(n+1, true); // record of each number form 0 to n. i'th index represent ith number;
    cas[0] = false;
    cas[1] = false; // as 0 and 1 are not primes;

    for(long long i = 2; i<=n; i++){
        if(cas[i]==true){  //if ith element is prime; mark all its multiples as false(non prime);
            for(long long k = i*i; k<=n; k = k+i){
                cas[k] = false;
            }
        }
    }

    //now cas represents all the primes from one to n (marked as true).
    //now just find the largest of the primes which is a factor of n;
    //iterate from the last element in cas and find the first number which is prime and and a factor of n;

    for(long long j = n; j>=0; j--){
        if(cas[j]==true){
            if(n%j==0){
                cout<<j<<" is the largest prime factor of "<<n;
                break;
            }
        }
    }







    


    cin.ignore();
    cin.get();

    return 0;
}