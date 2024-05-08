#include<iostream>
using namespace std ;
int main () {
    int n ;
    cin >> n ;
    int row = 1 ;
    while (row <= n)
    {
        int col = 1 ; 
        while (col <= n - row + 1)
        {
            cout << col ;
            col = col + 1 ;
        }
        int start = 0 ;
        while (start < row - 1)
        {
            cout << "*" ;
            start = start + 1 ;
        }
        int star = 0 ;
        while (star < row - 1)
        {
            cout << "*" ;
            star = star + 1 ;
        }
        int j = 1 ;
        int end = n - row + 1 ;
        while (j <= n-row+1)
        {
            cout << end ; 
            end = end - 1 ;
            j = j+1;
        }
        cout << endl;
        row = row + 1 ;
    }
}