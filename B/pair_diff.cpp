#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,3,3,4,6,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0,j=1;
    int dif;
    cin>>dif;
    int count=0;
    while(j<n){
        int curr=a[j]-a[i]; //for -ve numbers a[i]-a[j]
        if(curr<dif)
            j++;
        else if(curr>dif){
             i++;
             if(i==j)
                j++;
        }
        else{
            int c1=0,c2=0,p=a[i],q=a[j];
            if(dif==0){
                while(a[i]==p){
                    c1++;
                    i++;
                    j++;
                }
            count+=(c1*(c1-1))/2;
            }
            else{
                while(a[i]==p){
                    i++;
                    c1++;
                }
                while(a[j]==q){
                    j++;
                    c2++;
                }
            count+=c1*c2;
            }
        }
    }
    cout<<count;
}