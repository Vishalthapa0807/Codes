#include<bits/stdc++.h>
using namespace std;
/*int binary_no(int n){
    int sum=0,bin,p=1;
    while(n!=0){
        bin=n%2;
        sum+=bin*p;
        p*=10;
        n/=2;
    }
return sum;
}
void subset(vector<int> r){
    int l=pow(2,r.size());
    for(int i=0;i<l;i++){
        int just=binary_no(i);
        int div=pow(10,r.size()-1);
        for(int j=0;j<r.size();j++){
            int a=just/div;
            if(a==1)
                cout<<r[j];
            just%=div;
            div/=10;
        }
        cout<<endl;
    }
    return;
}*/
vector<vector<int>> subsets;

void method(vector<int> &em,int i,vector<int> &v){

    if(i==v.size()){
        subsets.push_back(em);
        return;
    }
    method(em,i+1,v);
    em.push_back(v[i]);
    method(em,i+1,v);
    em.pop_back();
}

int main(){
    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> em;
    method(em,0,v);
    for(auto ele:subsets){
        for(auto value:ele){
            cout<<value<<" ";
        }
        cout<<endl;
    }
}