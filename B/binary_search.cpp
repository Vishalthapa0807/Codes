#include<iostream>
using namespace std;

// int binary_search(int a[],int n,int key){
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(a[mid]==key)
//             return mid;
//         if(a[mid]<key)
//             low=mid+1;
//         else
//             high=mid-1;
//     }
//     return -1;
// }


// search in sorted rotated array
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i{};i<n;i++)
        cin>>a[i];
    int key;
    cin>>key;
    //cout<<binary_search(a,n,key);
    int low=0,high=n-1;
    int pivot=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]<=a[n-1])
            high=mid-1;
        else{
            if(a[mid]>a[mid+1]){
                pivot=mid;
                break;
            }
            else
                low=mid+1;
        }
    }
    if(key==a[pivot])
        cout<<pivot;
    else{
        if(key>a[n-1]){
            low=0;
            high=pivot;
        }
        else{
            low=pivot+1;
            high=n-1;
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]==key){
                cout<<mid;
                break;
            }
            else if(a[mid]<=key)
                low=mid+1;
            else    
                high=mid-1;

            
        }
    }


    return 0;
}