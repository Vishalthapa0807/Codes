#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         int k=1;
    //         while(k<=j){
    //             cout<<k<<" ";
    //             k++;
    //         }
    //         cout<<"\n";
    //         j++;
    //     }
    //     cout<<"*******"<<endl;
    //     i++;
    // }
    // int x;
    // float account;
    // cin>>x>>account;
    // if(x%5==0 && x<=account-0.5)
    //     cout<<fixed<<setprecision(2)<<(account-x)-0.5;
    // else
    //     cout<<fixed<<setprecision(2)<<account;
    int n;
    cin>>n;
    int i=0;
    int s=0;
    while(i<n){
        int j=0;
        while(j<n-i-1){
            cout<<" ";
            j++;
        }
        // int t=0,k=j+s;
        // while(j<=k){
        //     if(t==0){
        //         cout<<"*";
        //         t=1;
        //     }
        //     else{
        //         cout<<" ";
        //         t=0;
        //     }
        //     j++;
        // }
        j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        s+=2;
        i++;
    }


    return 0;
}