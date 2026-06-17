//What is the sum of the digits of the number 2 raised to 1000;

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// function to multiply a number (expresseed as a vector with each each digit at diff index) with a int K.
vector<int> multiply(vector<int> a, int k){
     vector<int> ans;
    int carry = 0;

    for(int i = a.size()-1; i>=0; i--){
        int num = a[i]*k;
        int rnum = num + carry;
        int lst = rnum%10;
        ans.push_back(lst);

        carry = (rnum - lst)/10;

    }

    if(carry!=0) ans.push_back(carry);

    // reverse and return;
    vector<int> r(ans.rbegin(), ans.rend());
return r;   
}



int main(){

    vector<int> ip = {1,6};
    // to get pow(2,x); .. x should be greater then 5.
    // choose x here;
    int x = 1000;
    //.
    for(int i = 1; i<=x-4; i++){
        ip = multiply(ip, 2);
    }

    //return sum of digits of ip.
    int finalans = 0;
    for(int i = 0; i<ip.size(); i++){
        finalans = finalans + ip[i];
    }
    cout<<finalans;

    

    return 0;
}