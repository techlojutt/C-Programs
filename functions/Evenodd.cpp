#include<iostream>
using namespace std;
bool isEven(int a){
    //odd
    if(a&1){
        return 1;
    }
    //Even
    else{
        return 0;
    }
}
int main(){ 
    int num;
    cin>>num;
    if (isEven(num)){
        cout<<"Number is odd"<<endl;
    }
    else{
        cout<<"Number is even"<<endl;
    }
}