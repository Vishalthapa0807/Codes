#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    while(a<=b){
        int temp=a;
        int sum=0;
        while(temp!=0){
            int rem=temp%10;
            int ans=1,fact=1;
            while(ans<=rem){
                fact*=ans;
                ans++;
         }
        sum+=fact;
        temp/=10;
        }
        if(sum==a)
            cout<<a<<" ";
        a++;
    }

    return 0;
}