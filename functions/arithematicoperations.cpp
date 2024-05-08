#include<iostream>
using namespace std;
int arithematic(int x,int y,char opchoice){
    if(opchoice=='+'){
     cout<<x<<"+"<<y<<"="<<x+y<<endl;
    }
    else if(opchoice=='-'){
         cout<<x<<"-"<<y<<"="<<x-y<<endl;
    }
    else if(opchoice=='*'){
         cout<<x<<"*"<<y<<"="<<x*y<<endl;
    }
    else if(opchoice=='/'){
         cout<<x<<"/"<<y<<"="<<x/y<<endl;
    }
    else if(opchoice=='%'){
         cout<<x<<"%"<<y<<"="<<x%y<<endl;
    }
    else{
        cout<<"Invalid operator"<<endl;
    }
}
int main(){
    int num1,num2;
    char c;
    cin>>num1>>c>>num2;
    arithematic(num1,num2,c);
return 0;
}