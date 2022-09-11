#include<bits/stdc++.h>
using namespace std;

void method1(int a[],int n){
    for(int i{};i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++)
                cout<<a[k]<<" ";
            cout<<endl;
        }
    }
}

//cummulative sum approach
void method2(int a[],int n){
   int currsum[n+1];
   currsum[0]=0;
   for(int i=1;i<=n;i++)
        currsum[i]=currsum[i-1]+a[i-1];
    int max_sum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currsum[i]-currsum[j];
            max_sum=max(max_sum,sum);
        } 
    }
    cout<<max_sum;
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i{};i<n;i++)
        cin>>a[i];
    //method1(a,n); 
    method2(a,n);    

    return 0;
}