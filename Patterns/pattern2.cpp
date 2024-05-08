#include<iostream>
using namespace std;
int main(){

int n;
cin >> n;
int i = 1;
while(i<=n){
     int j = 1;

      while (j<=n-1)
           {
              cout << n-j <<" ";
              j = j+1;
           }
           
      cout << endl;
      i=i+1;
      

}

}