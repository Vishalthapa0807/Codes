#include<bits/stdc++.h>
using namespace std;

// bool canbechunked(int *a,int i,int j){
//     cout<<i<<" "<<j<<endl;
//     int cnt=0;
//     for(int k=i;k<=j;k++){
//         if(a[k]>=i && a[k]<=j)
//             cnt++;
//     }
//     //cout<<cnt<<" ";
//     if(cnt==(j-i+1))
//         return true;
//     else 
//         return false;
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i{};i<n;i++)
//         cin>>a[i];
//     int i=0,ans=0;
//     while(i<n){
//         int j;
//         for(j=i;j<n;j++){
//             if(canbechunked(a,i,j));
//                 break;
//         }
//         //cout<<j<<" ";
//         i=j+1;
//         ans++;
//     }
// //cout<<ans;
// }

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i{};i<n;i++)
        cin>>a[i];
    int cmax=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        cmax=max(a[i],cmax);
        if(cmax==i)
            count++;

    }
    cout<<count;
}