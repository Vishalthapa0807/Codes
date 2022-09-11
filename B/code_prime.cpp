#include <iostream>
using namespace std;
#define ll long long
int main() {
    // your code goes here
    int T;
    cin>>T;
    while(T--){
	int N;
    int sum{};
	cin>>N;
	ll a[N];
        for(int i{};i<N;i++)
            cin>>a[i];
	int i{};
        while(i<N){
            int count{};
            if(a[i]<10)
                count++;
            else{   
                count=0;
                while(a[i]>0){
                    count++;
                    a[i]/=10;
                }
            }
        sum+=count;
        i++;
        }
    int k=1,c{};
    while(k<=sum){
        if(sum%k==0)
            c++;
        k++;
    }
    if(c==2)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    }
	
    return 0;
}