#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int low=0,high=n/2;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid>n)
            high=mid-1;
        else{
            if((mid+1)*(mid+1)>n){
                cout<<mid;
                break;
            }
            else
                low=mid+1;
        }
    }



    return 0;
}