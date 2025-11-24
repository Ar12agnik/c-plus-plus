#include <iostream>
#include <string>
using namespace std;
int main(){
int arr[10]={10,9,8,7,6,5,4,3,2,1};
cout<<"Elements of the array are: ";
for (int i=0; i<(sizeof(arr)/sizeof(arr[0]));i++)
    cout<<arr[i]<<" ";
return 0;
}
