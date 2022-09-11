#include<bits/stdc++.h>
using namespace std;

/*int binary(int i){
    int b=0,power=1;
    while(i!=0){
        int rem=i%2;
        i/=2;
        b+=(rem*power);
        power*=10;
    }
    return b;
}

void method1(vector<int> &v){
    int l=pow(2,v.size());
    for(int i=0;i<l;i++){
        int bin= binary(i);
        int div=pow(10,v.size()-1);
        for(int j=0;j<v.size();j++){
            int q= bin/div;
            if(q==0) {}
            else cout<<v[j]<<" ";
            bin=bin%div;
            div/=10;
        }
        cout<<endl;
    }
}*/
vector<vector<int>> subsets;
void method2(vector<int> &subset,int i,vector<int> &num){
    if(i==num.size()){
        subsets.push_back(subset);
        return;
    }

    method2(subset,i+1,num);
    subset.push_back(num[i]);
    method2(subset,i+1,num);
    subset.pop_back();
}
int main()
{
    int N;
    cin>>N;
    vector<int> v(N);
    for(int i=0;i<N;i++)
        cin>>v[i];
    //method1(v);
    vector<int> em;
    method2(em,0,v);
    for(auto value: subsets){
        for(auto value2: value)
            cout<<value2<<" ";
        cout<<endl;
    }
}
