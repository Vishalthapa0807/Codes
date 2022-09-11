#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
int t;
cin>>t;
while(t--){
        int N;
        cin>>N;
        int a[N];
        for(int i{};i<N;i++)
            cin>>a[i];
        bool flag=true;
        for(int i{};i<N-1;i++){
            if(abs(a[i+1]-a[i])!=0 || abs(a[i+1]-a[i])!=1)
                flag=false;

        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        
    } 
return 0;
}
