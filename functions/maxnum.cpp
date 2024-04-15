#include<iostream>
using namespace std;
int max(int num1,int num2){
    if(num1>num2){
        cout<<"Maximum number is "<<num1;
    }
    else{
        cout<<"Maximum number is "<<num2;
    }
    }
int main(){

    int a,b;
    cin>>a>>b;
    max(a,b);
    return 0;
    
}
