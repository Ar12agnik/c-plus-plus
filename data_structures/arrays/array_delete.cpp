#include <iostream>
#include <string>
using namespace std;
int main(){
int arr[10],n,num,del;
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
cout<< "enter the index position of the element you want to Delete: ";
cin>>del;
if(del>n){
    cout<<"Invalid index number!!";
}
else{
int x,y;
x=del;
y=x+1;
while ((x<y)&&(y<n)){
    arr[x]=arr[y];
    x=y;
    y=y+1;
}
n=n-1;
cout<<"The new array is:-";
for (int j=0; j<n;j++)
    cout<<arr[j]<<" ";
}
return 0;
}
