#include<iostream>
using namespace std ;
int main () {

    int n ;
    cin >> n ;
    int i = 1 ;
    int num = 1 ;
    while (i <= n)
    {
        int space = 0 ;
        while (space < n - i)
        {
            cout << " " ;
            space = space + 1 ;
        }
        int j = 1 ;
        while (j <= i)
        {
            cout << num ;
            num = num + 1 ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }    
}