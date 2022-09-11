#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i{};i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
    // for(int j=0;j<k;j++){
    //     int temp=a[n-1];
    // for(int i=n-2;i>=0;i--)
    //     a[i+1]=a[i];
    // a[0]=temp;
    // for(int i{};i<n;i++)
    //     cout<<a[i]<<" ";
    // cout<<endl;
    // }
    int b[n];
    for(int i=0;i<n;i++){
        b[(i+k)%n]=a[i];
    }
    for(int i{};i<n;i++)
        cout<<b[i]<<" ";
}

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i{};i<n;i++)
//         cin>>a[i];
//     int k;
//     cin>>k;
//     int c=n-k;
//     reverse(a,a+c);
//     reverse(a+c,a+n);
//     reverse(a,a+n);
//     for(int i{};i<n;i++)
//         cout<<a[i]<<" ";
    
// }