#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i{};i<n;i++)
        cin>>a[i];
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid==0 && a[mid+1]<a[mid]){
            cout<<a[mid];
            break;
        }
        else if(mid==n-1 && a[mid]>a[mid-1]){
            cout<<a[mid];
            break;
        }
        else if(a[mid-1]<a[mid] && a[mid+1]<a[mid]){
            cout<<a[mid];
            break;
        }
        else{
            if(a[mid+1]>=a[mid-1])
                low=mid+1;
            else
                high=mid-1;
        }

    }



    return 0;

}