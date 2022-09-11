// 
#include <bits/stdc++.h>
using namespace std;
// class complex {
//     private:
//     float real, imag;
//     public:
//     complex(float r=0, float i=0){
//         real = r;
//         imag = i;
//     }
//     complex operator + (complex const &obj) {
//         complex result;
//         result.real = real + obj.real;
//         result.imag = imag + obj.imag;
//         return result;
//     }
//     void display() {
//         cout<<real<<"+i"<<imag<<endl;
//     }
// };
// int main() {
//   complex c1(12.4,6), c2(7.9,8);
//   complex c3 = c1 + c2;
//   c3.display();
//   return 0;
// }
// class Complex{
//     int real;
//     int imag;
//     public:
//     Complex(int x=0,int y=0){
//         real=x;
//         imag=y;
//     }
//     Complex operator +(Complex &obj){
//         Complex result;
//         result.real=real+obj.real;
//         result.imag=imag+obj.imag;
//         return result;
//     }
//     void display(){
//         cout<<real<<" + "<<imag<<"i";
//     }
// };

// int main(){
//     Complex o1(3,4),o2(2,4);
//     Complex o3=o1+o2;
//     o3.display();
// }
// class base{
//     public:
//     virtual void display(){
//         cout<<"base"<<endl;
//     }
// };

// class derived:public base{
//     public:
//     void display(){
//         cout<<"derived"<<endl;
//     }
// };

// int main(){
//     derived d1;
//     base *b1=&d1;
//     b1->display();
//     d1.display();
//     return 0;
// }

class demo{
    int x,y;
    public:
    demo(int x,int y){
        this->x=x;
        this->y=y;
    }
    demo(demo &obj){
        x=obj.x;
        y=obj.y;
    }
    void display(){
        cout<<x<<" "<<y;
    }
};

int main(){
    demo d1(2,3);
    demo d2=d1;
    d2.display();

}
// bool ispoweroftwo(int n){
//     double number= log(n)/log(2);
//     int check=(int)number;
//     return check-number==0;
// }
// bool isseriesoffour(int n,int digits){
//     int ub=(int)(pow(2,digits)+pow(2,digits-1)-1);
//     int lb=(int)(pow(2,digits)-1);
//     return n>=lb&&n<ub;
// }

// string pure(int n){
//     string s[n+1];
//     s[0]="";
//     int blocks=0,disp=0;
//     for(int i=1;i<n+1;i++){
//         if(ispoweroftwo(i+1)){
//             blocks+=1;
//         }
//         if(isseriesoffour(i,blocks)){
//             disp=(int)(pow(2,blocks-1));
//             s[i]="4"+s[i-disp]+"4";
//         }
//         else{
//             disp=(int)(pow(2,blocks));
//             s[i]="5"+s[i-disp]+"5";
//         }
//     }
//     return s[n];
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<pure(n);
//     return 0;
// }
// class Node{
//     public:
//         int data;
//         Node *next;
        
// };

// int main(){
//     Node *newnode=new Node();
//     Node *head;
//     head=newnode;
//     newnode->data=5;
//     Node *newnode2=new Node();
//     newnode->next=newnode2;
//     newnode2->data=6;
//     newnode2->next=NULL;
//     Node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
    

// }

