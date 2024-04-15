#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int b = 2;
    if (a-->0 && ++b>0){
    cout<<"Stage1 - Inside if " <<endl;     
    }
    else{
        cout<<"Stage2 - Inside else ";
    }
    cout<<a<<"  "<<b<<endl;
    
}