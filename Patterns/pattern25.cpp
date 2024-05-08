#include<iostream>
using namespace std ;
int main () {

   int n ; 
   cin >> n ;
   int row = 1 ;
   while (row <= n)
   {
       int space = 0 ;
       while (space < n - row )
        {
            cout << " ";
            space = space + 1 ;
        }
       int col = 1 ;
       while (col <= row)
       {
            cout << col ; 
            col = col + 1 ;
       }
       int end = 0 ;
       int value = row - 1 ;
       while (value)
       {
        cout << value ;
        value = value - 1 ;
        end = end + 1 ;
       }
       
       cout << endl;
       row = row + 1 ; 
    }
}