#include<bits/stdc++.h>
using namespace std;

int main(){
int a[6];
for(int i{};i<6;i++)
    cin>>a[i];
//1 2 -1 3 4 5
//1 3  2 5 9 14

//prefix sum
// for(int i=1;i<6;i++)
//     a[i]+=a[i-1];
// for(int i{};i<6;i++)
//     cout<<a[i]<<" ";

//prefix max
// int maxi=a[0];
// for(int i=1;i<6;i++)
//     a[i]=max(a[i],a[i-1]);
// for(int i{};i<6;i++)
//      cout<<a[i]<<" ";

//suffix max
// int maxi=a[5];
// for(int i=4;i>=0;i--)
//     a[i]=max(a[i],a[i+1]);
// for(int i{};i<6;i++)
//      cout<<a[i]<<" ";

}