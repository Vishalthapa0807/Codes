// // // You are using GCC
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     int b[10];
//     fill_n(b,10,-1);
//     for(int i{};i<n;i++)
//         cin>>a[i];
//     for(auto ele:b)
//         cout<<ele<<" ";
//     cout<<endl;
//     for(int i{};i<n;i++){
//         int index=a[i]%n;
//         b[index]=a[i];
//     }
    
//     for(int ele:b){
//         if(ele==-1)
//             continue;
//         else
//             cout<<ele<<" ";
//     }
//     return 0;
// }
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i{};i<n;i++)
//         cin>>a[i];
//     int sum=0;
//     for(int i{};i<n;i++)
//         sum+=a[i];
//     int q;
//     cin>>q;
//     while(q--){
//         int c;
//         cin>>c;
//         if(sum<c){
//             cout<<-1<<endl;
//             continue;
//         }
//         int fun=0;
//         int k=1;
//         while(fun<c){
//             fun=0;
//             for(int i{};i<n;i++){
//                 if(a[i]<k)
//                     fun+=a[i];
//                 else
//                     fun+=k;
//             }
//         k++;
//         }
//     cout<<fun<<" "<<k-1<<endl;
//     }
//     return 0;
// }

// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i{};i<n;i++)
    //     cin>>a[i];
    // int b[n];
    // b[0]=1;
    // for(int i=1;i<n;i++){
    //     int count=1;
    //     for(int j=i-1;j>=0;j--){
    //         if(a[j]<a[i])
    //             count++;
    //     }
    //     b[i]=count;
    // }
    // for(int i{};i<n;i++)
    //     cout<<b[i]<<" ";
    // return 0;
    vector<int>v(5,-1);
    //fill_n(a,5,-1);
    for(int i{};i<5;i++)
        cout<<v[i]<<" ";
}