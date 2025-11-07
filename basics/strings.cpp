#include <string>
#include <iostream>
using namespace std;
int main(){
    string greeting = "hello";
    cout<< greeting<<endl;
    // string concatination
    string first ,last;
    cout<<"Enter your First Name: ";
    cin>>first;
    cout<<"Enter your Last Name: ";
    cin>>last;
    string full_name = first+last; //this can be done
    string appended = first.append(last);
     cout<<first<<" "<<last<<endl;
    cout<<full_name<<endl;
    cout<<appended<<endl;
    // legnth of string
    string Test = "qwertyuiopasdfghjklmnbvcxz";
    cout<<Test.length();
    return 0;
}