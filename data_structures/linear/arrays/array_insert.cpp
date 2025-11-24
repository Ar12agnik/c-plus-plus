#include <iostream>
#include <string>
using namespace std;
int main(){
int arr[10],n,num;
cout<<"enter the number of elements to be inserted: ";
cin>>n;
for (int i=0; i<n; i++){
    cout<<"Enter the element: ";
    cin>>num;
    arr[i]=num;
    //cout<<endl;
}
for (int j=0; j<n;j++)
    cout<<arr[j]<<" ";
return 0;
}
