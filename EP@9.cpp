//There exists exactly one Pythagorean triplet for which a + b + c = 1000   .
//Find the product  a.b.c

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
bool satisfy(int a, int b){
    if(a*a + b*b == (1000-(a+b))*(1000-(a+b))){
        return true;
    }else{
        return false;
    }
}
int main(){
    // a < b < c;
    // c = 1000 - (a+b).
    vector<int> abcs;
    for(int i = 1; i< 1000; i++){
        for(int j = i+1; j<1000; j++){
            if(satisfy(i, j)) {
                abcs.push_back(i);
                abcs.push_back(j);
                abcs.push_back(1000-i-j);
            }else{
                continue;
            }
        }
    }

    cout<<"hii"<<endl;
    cout<<"a:"<<abcs[0]<<endl;
    cout<<"b:"<<abcs[1]<<endl;
    cout<<"c:"<<abcs[2]<<endl;
    cout<<"a.b.c = "<< abcs[0]*abcs[1]*abcs[2];

return 0;
}
    