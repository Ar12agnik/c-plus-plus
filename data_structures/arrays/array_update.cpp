#include <iostream>
#include <string>
using namespace std;
int main(){
int arr[10],n,num,upd;
cout<<"enter the number of elements to be inserted: ";
cin>>n;
for (int i=0; i<n; i++){
    cout<<"Enter the element: ";
    cin>>num;
    arr[i]=num;
    //cout<<endl;
}
cout<<"the original array is "<<endl;
for (int j=0; j<n;j++)
    cout<<arr[j]<<endl;
cout<< "enter the index position of the element you want to update: ";
cin>>upd;
cout<<"enter the new element: ";
cin>>num;
arr[upd]=num;
cout<<"The new array is:-";
for (int j=0; j<n;j++)
    cout<<arr[j]<<" ";
return 0;
}
