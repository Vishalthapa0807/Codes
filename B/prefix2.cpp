#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],pmax[n],smax[n];
    for(int i{};i<n;i++)
        cin>>a[i];
    int p=1,q=2,r=3;
    pmax[0]=a[0];
    for(int i=1;i<n;i++)
        pmax[i]=max(pmax[i-1],p*a[i]);

    smax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
        smax[i]=max(a[i],q*smax[i+1]);

    for(int i{};i<n;i++)
        cout<<smax[i]<<" ";
    
    int x,ans=INT_MIN;
    for(int i=1;i<n-1;i++){
        x=pmax[i-1]+a[i]+smax[i+1];
        ans=max(ans,x);
    }
    cout<<ans;
    return 0;
    
}