#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //fibbonacci number
    // int n;
    // cin>>n;
    // int prev=0,curr=1,temp;
    // for(int i=2;i<=n;i++){
    //     temp=prev+curr;
    //     prev=curr;
    //     curr=temp;
    // }
    // cout<<curr;
    //0 1 1 2 3 5 8 13.....

    //1 11 111 1111..
    // int mul=1,x=1,sum{};
    // for(int i=1;i<=n;i++){
    //     sum+=x;
    //     mul*=10;
    //     x+=mul;   // x=x*10+1;
    // }
    // cout<<sum;

    //1/1 1/2 1/3 1/4
    // double sum{};
    // for(int i=1;i<=n;i++)
    //     sum+=(1.0/i);
    // cout<<sum;

    //x^0/0! x^1/1! x^2/2!....
    int x,n;
    cin>>n>>x;
   // double sum=0;
//     for(int i=0;i<=n;i++){
//         double power=1;
//         for(int j=1;j<=i;j++)
//             power*=x;
//         double fact=1;
//             for(int k=1;k<=i;k++)
//             fact*=k; 
        
//         sum+=power/fact;          

//     }
// cout<<sum;
        double ans=0,prod=1,fact=1;
        for(int i=0;i<=n;i++){
            ans+=prod/fact;
            prod*=x;
            fact*=(i+1);
        }
    cout<<ans;
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
        long long num,X;
        long long A,B,C,i=1;
        cin>>num>>X;
        while(i<=num){
            A=i*3;
            B=A-X;
            if(B>=0){
                C=num-(i+B);
                if(C>=0){
                  cout<<"YES"<<endl;
                  cout<<i<<" "<<B<<" "<<C<<endl;
                }
                else
                     cout<<"NO"<<endl;
                break;
                    
            }
        i++;
        }
        if(B<0)
            cout<<"NO"<<endl;
    } 
return 0;
}