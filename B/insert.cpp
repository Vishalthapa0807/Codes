#include<iostream>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int prev=0,curr=1,temp;
    for(int i=0;i<n;i++){
        cout<<prev<<" ";
        temp=prev+curr;
        prev=curr;
        curr=temp;
    }
}