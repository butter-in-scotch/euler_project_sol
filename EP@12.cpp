
//What is the value of the first triangle number to have over five hundred divisors?
//first triangular num is 1, second is 3 and so on.

#include<iostream>
#include<vector>
using namespace std;

int nthtriangularnumber(int n){
    return (n*(n+1))/2;
}
int main(){
    int victim = 1;
    int k = 1; // k victim checked so faar.
    int ans = 0;
    bool running = true;
    while(running){
        int count = 0; // store the number of divisors of victim.
        for(int i = 1; i*i<=victim; i++){
            if(victim%i==0){
                if(i*i==victim){
                    count++;
                }else{
                    count = count + 2;
                }
            }
        }
        if(count>500){
            ans = ans + victim;
            running = false;
        }
        k++;
        victim = nthtriangularnumber(k);
        
    }

    cout<<ans<<endl;
    cout<<"heuy"<<endl;
    // cout<<ans;
    
    

    return 0;
}
