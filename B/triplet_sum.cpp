#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i{};i<n;i++)
        cin>>a[i];
    for(int i{};i<n;i++){
        if(a[i]==a[i-1] && i>0)
            continue;
        else{
            int rem= -1*a[i];
            int p1=i+1,p2=n-1;
            while(p1<p2){
                if(a[p1]+a[p2]<rem)
                    p1++;
                else if(a[p1]+a[p2]>rem)
                    p2--;
                else{
                    cout<<a[i]<<" "<<a[p1]<<" "<<a[p2]<<endl;
                    if(a[p1]==a[p2])
                        break;
                    else{
                        int x=a[p1],y=a[p2];
                        while(a[p1]==x)
                            p1++;
                        while(a[p2]==y)
                            p2--`;
                    }
                }
            }
        }
    }
}