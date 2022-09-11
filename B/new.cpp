#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i{};i<n;i++)
        cin>>a[i];
    int key;
    cin>>key;
    int front,rear;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]<key) 
            low=mid+1;
        else if(a[mid]>key)
            high=mid-1;
        else{   if(mid==0)
                    {
                        front=mid;
                        break;
                    }
                if(a[mid-1]<key)
                    {
                        front=mid;
                        break;
                    }
                else
                    high=mid-1;
        }
    }
    low=0,high=n-1;
    while(low<=high){
        int m=(low+high)/2;
        if(a[m]<key) 
            low=m+1;
        else if(a[m]>key)
            high=m-1;
        else{   if(m==n-1)
                    {
                        rear=m;
                        break;
                    }
                if(a[m+1]>key)
                    {
                        rear=m;
                        break;
                    }
                else
                    low=m+1;
        }
    }
    
    cout<<rear-front+1;
}