#include<iostream>
using namespace std;

int main(){
   // 0 1 0 2 1 3 0 2
   int n;
   cin>>n;
   int a[n],pmax[n],smax[n];
   for(int i{};i<n;i++)
    cin>>a[i];
    pmax[0]=a[0];
    for(int i=1;i<n;i++)
        pmax[i]=max(pmax[i-1],a[i]);
    smax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
        smax[i]=max(smax[i+1],a[i]);
    int count=0;
    for(int i=1;i<n-1;i++){
        int des=min(pmax[i-1],smax[i+1]);
        if(des>a[i]){
            count+=(des-a[i]);
        }
    }
    cout<<count;


       return 0;
    
}