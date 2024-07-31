//Deepti Emmi
//23070123049
#include<iostream>
using namespace std;
int main(){
int num,reset,output,x;
cout<<"Enter the number to reset";
cin>>num;
cout<<"Enter the bit to set";
cin>>reset;
x=00000001<<reset;
output= num&(~x);
cout<<"Set number is "<<output ;
}
/* Output-
 * cout<<"Enter the number to reset5
Enter the bit to set2
Set number is5 
 */
