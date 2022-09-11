#include<iostream>
using namespace std;

int main(){
    int a[]={5,4,3,6,2};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0,j=0;
    int sum=2;
    int curr=a[0];
    while(j<n){
        if(curr<sum){
            j++;
            if(j<n)
                curr+=a[j];
        }
        else if(curr>sum){
                curr-=a[i];
                i++;
                if(i>j)
                    j++;
                if(j<n)
                    curr=a[j];
        }
        else{
            cout<<"found";
            break;
        }
    }
}