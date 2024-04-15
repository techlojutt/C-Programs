#include<iostream>
using namespace std;
int table(int num1) {
    for(int i=1;i<=10;i++){
        cout<<num1<<"*"<<i<<"="<<num1*i<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
  int tbl =  table(n);
  cout <<tbl<<endl;
}