#include<iostream>
using namespace std;
//23456
//2
//23
//234
//2345
//23456
int main(){

    int n;
    cin>>n;
    int x=1;
    while(n/x>9){
        x*=10;
    }
    
    while(x!=0){
        cout<<n/x<<endl;
        x/=10;
    }
    return 0;
}