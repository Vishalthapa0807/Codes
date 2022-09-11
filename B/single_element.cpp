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
        if(n==1){
            cout<<0;
            break;
        }
        if(mid==0){
            if(a[mid]!=a[mid+1]){
                cout<<mid;
                break;
            }   
            else
                low=mid+1;
        }
        else if(mid==n-1){
            if(a[mid]!=a[mid-1]){
                cout<<mid;
                break;
            }
            else
                high=mid-1;
        }
        else if(a[mid]!=a[mid-1] && a[mid]!=a[mid+1]){
            cout<<mid;
            break;
        }
        else{
            int first,second;
            if(a[mid]==a[mid+1]){
                first=mid;
                second=mid+1;
            }
            else{
                first=mid-1;
                second=mid;
            }
            if(first%2==0)
                low=mid+1;
            else
                high=mid-1;
        }
    }



    return 0;
}