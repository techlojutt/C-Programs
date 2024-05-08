#include<iostream>
using namespace std;
void line(){
    for (int i = 1; i <= 10; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
}
void line(int n){
    for (int i = 1; i <= n; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
}
void line(int n,char c ){
    for (int i = i; i <=n; i++)
    {
        cout<<c;
    }
    cout<<endl;
}
int main(){
    int a ;
    char c ;
    cin>>a;
    cin>>c;
    line(a,c);
    line(a);
    line();
    return 0;
}
