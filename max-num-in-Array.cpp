#include<iostream>
using namespace std;

int main(){
int n;
cout<<"How many number you want to input in a array: ";
cin>>n;
int arr[n];

for(int i =0; i<n;i++){
    cout<<"Enter the Numbers: ";
    cin>> arr[i];
}
int maxNumber = arr[0];
for(int j=0;j<n;j++){
    if(arr[j]>maxNumber){
        maxNumber=arr[j];
    }
}
cout<<maxNumber;
return 0;
}
