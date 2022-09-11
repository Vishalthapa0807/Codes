#include<iostream>
using namespace std;

int main(){

    // inserting in an array
    int n;
    cin>>n;
    int a[n];
    // int k;
    // cin>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])==x)
                cout<<a[i]<<" "<<a[j]<<endl;
        }
    }

    // for(int i=0;i<n;i++){
    //     int x=a[i];
    //     int count{};
    //     for(int j=0;j<n;j++){
    //         if(a[j]==x)
    //             count++;
    //     }
    // cout<<x<<"->"<<count<<endl;
    // }
        




    // int index,value;
    // cin>>index>>value;
    // for(int i=k-1;i>=index;i--)
    //     a[i+1]=a[i];
    // a[index]=value;
    // for(int i=0;i<=k;i++)
    //     cout<<a[i]<<" ";

// deleting an element 
// int index;
// cin>>index;
// for(int i=index;i<k;i++)
//     a[i]=a[i+1];
// for(int i=0;i<k-1;i++)
//     cout<<a[i]<<" ";  


//reversing an array
// int i=0,j=n-1;
// while(i<=j){
//     swap(a[i],a[j]);
//     i++;
//     j--;
// }
// for(int i=0;i<n;i++)
//     cout<<a[i]<<" ";


    return 0;
}