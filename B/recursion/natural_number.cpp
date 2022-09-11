#include<iostream>
using namespace std;

// void func(int x,int n){
//     if(x>n)
//         return;
//     cout<<x<<" ";
//     func(x+1,n);
// }
void fun(int n){
    if(n==0)
        return;
    fun(n-1);
    cout<<n<<" ";
}

int main(){

    int n;
    cin>>n;
    // func(1,n);
    fun(n);
    return 0;
}