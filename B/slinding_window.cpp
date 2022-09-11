#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
    //1 2 3 4 5
    // int x;
    // cin>>x;
    // int sum=0;
    // for(int i=0;i<k;i++)
    //     sum+=a[i];
    // for(int i=k;i<n;i++){
    //     cout<<sum<<" ";
    //     sum+=a[i];
    //     sum-=a[i-k];
    // }
    // cout<<sum<<" ";

    //frquency question
    // int count=0;
    // for(int i{};i<k;i++){
    //     if(a[i]==x)
    //         count++;
    // }
    // for(int i=k;i<n;i++){
    //     cout<<count<<" ";
    //     if(a[i-k]==x)
    //         count--;
    //     if(a[i]==x)
    //         count++;
    // }
    // cout<<count;
    int count=0;
    for(int i{};i<n;i++){
        if(a[i]<=k)
            count++;
    }

    int legal=0;
    for(int i{};i<count;i++)
        if(a[i]<=k)
            legal++;
    int maxi=INT_MIN;
    for(int i=count;i<n;i++){
        maxi=max(maxi,legal);
        if(a[i]<=k)
            legal++;
        if(a[i-count]<=k)
            legal--;
    }
    maxi=max(maxi,legal);
    cout<<count-maxi;

    return 0;
}