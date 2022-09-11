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
        if(a[mid]==mid)
            high=mid-1;
        else{
            if(a[mid]==a[mid+1])
                {
                    cout<<a[mid];
                    break;
                }
            else
                low=mid+1;
        }
    }



    return 0;
}