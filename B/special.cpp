#include<iostream>
using namespace std;
int main(){

    int rows,cols;
    cin>>rows>>cols;
    int a[rows][cols];

    for(int i{};i<rows;i++)
        for(int j{};j<cols;j++)
            cin>>a[i][j];
    
    int key;
    cin>>key;

    int i=0,j=cols-1;
    while(i<rows && j>=0){
        if(a[i][j]==key){
            cout<<i<<" "<<j;
            break;
        }
        else if(key<a[i][j])
            j--;
        else
            i++;
    }
    if(i>=rows || j<0)
        cout<<"not found"<<endl;

    return 0;
}