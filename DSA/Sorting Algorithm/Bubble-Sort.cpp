#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many numbers you want to input in an array: ";
    cin>>n;
    int a[n];
    cout<<"Enter your array:\n";
    for(int i=0 ; i < n ; i++)
    {
        cin >> a[i];
    }

    // Bubble sort algorithm
    for(int j = 0; j <n-1 ;j++){
        for(int k=0;k<n-1-j;k++){
            if(a[k]>a[k+1]){
                int temp = a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }

    // Displaying the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
