#include<bits/stdc++.h>
using namespace std;


int binaryconversion(string s,int n){
    int sum=0,p=0;
    for(int i=n-1;i>=0;i--){
        stringstream ss;
        ss<<s[i];
        int a;
        ss>>a;
        sum=sum+(a*pow(2,p++));
    }
    return sum;
}

int main(){

    string s;
    getline(cin,s);
    int num;
    num=binaryconversion(s,s.length());
    int count=0;
    while(num!=0){
        if(num%2!=0)
            num-=1;
        else
            num/=2;
        count++;
    }
    cout<<count;
    return 0;
}