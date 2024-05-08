#include<iostream>
using namespace std;
int main(){

int n ;
cin >> n ;
int row = 1 ;                                                         
while (row <= n)
{
    int col = 1 ;
    while (col <= n)                                  //Alternative Method    // For Ascii Value 
    {                                                //int value = 'A';      // int a = ch; 
        char ch = 'A'+row-1  ;                      // char ch = value ;    // cout<<a<<" ";
        cout<<ch << " ";                           // cout << ch ;                                          
        col = col + 1 ;                           // value = value + 1 ;                                              
    }                                                 
     cout << endl ;  
     row = row + 1;
}                                                                            
}
