#include <iostream>
using namespace std;

int main(){
int n;
cout<<"How manay fibo number you want to print: ";
cin>> n;
int num1 =0;
int num2 =1;
cout<<num1 <<endl;
cout<<num2 <<endl;


for(int i = 1 ;i<=n;i++){
   int newFebo = num1+num2;
   cout<< newFebo <<endl;
   num1=num2;
   num2=newFebo;
}

}
