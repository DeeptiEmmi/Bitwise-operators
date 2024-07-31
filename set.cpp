#include<iostream>
using namespace std;
int main(){
int num,set,output,x;
cout<<"Enter the number to set";
cin>>num;
cout<<"Enter the bit to set";
cin>>set;
x=00000001<<set;
output= num|x;
cout<<"Set number is "<<output ;
}