#include<iostream>
#include<cmath>

using namespace std;
int main(){
    long long sum = 2;
    long long term1, term2, newterm;
    term1 = 1;
    term2 = 2;
    bool running = true;
    while(running){
        newterm = term1 + term2;
        if(newterm%2==0){
            sum = sum + newterm;
        }
        term1 = term2;
        term2 = newterm;
        if((term2+term1)>4000000){
            running = false;
        }
        
    }
    cout<<sum;
    return 0;
}