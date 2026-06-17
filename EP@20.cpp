//Find the sum of the digits in the number 100!(100 factorial).

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

    //if(carry!=0) ans.push_back(carry);
    //carry can exceed 9 when k is large
    //fix:
    while(carry > 0){
    ans.push_back(carry % 10);
    carry /= 10;
    }

    // reverse and return;
    vector<int> r(ans.rbegin(), ans.rend());
return r;   
}


int main(){

    vector<int> qwerty = multiply({1}, 1);

    int n = 100; // to get n factorial
     for(int i = 2; i<=n; i++){
        qwerty = multiply(qwerty, i);
     }



    //return factorial
    //for(int i: qwerty){
    //    cout<<i;
    //}

     // return sum;
     int ans = 0;
     for(int i: qwerty){
        ans = ans+i;
     }
     cout<<ans;



    return 0;
}

