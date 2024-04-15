#include<iostream>
using namespace std;
float area(float length,float width) 
{   float a;
    a = length*width;
   cout<<"Area is = "<<a<<endl;
   return a;
}
float perimeter(float length,float width){
    float b;
     b=2*(length+width);
    cout<<"Perimeter of square is = " <<b<<endl;
    return b;
}
int main(){
    float num1, num2;
    cout<<"Enter the lengths of sides "<<endl;
    cin>>num1>>num2;
    float c = area(num1,num2);
    float d = perimeter(num1,num2);
}