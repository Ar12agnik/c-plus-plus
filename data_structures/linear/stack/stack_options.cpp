#include <iostream>
using namespace std;
class Stack_implementation{
    private:
        int arr[10];
        int top=-1;
    public:
    void push(int number){
    if (top>=9)
        cout<<"Overflow!";
    else{
        top+=1;
        arr[top]=number;
    }
    }
    void pop(){
    if (top<=-1)
        cout<<"Underflow!!";
    else
       top-=1;
    }
    void peek(){
        cout<<endl;
    if (top<=-1)
        cout<<"empty array!!";
    else
        cout<<arr[top]<<endl;

    }
    void display(){
    for (int i=0; i<top+1;i++)
    cout<<arr[i]<<endl;
    }
};
int main(){
    Stack_implementation stk;
    int choice;
    while(true){
        cout<<"1)Push\n2)Pop\n3)Peek\n4)Display\nEnter your choice: ";
        cin>>choice;
        switch(choice){
        case 1:
            int num;
            cout<<"enter the number to be entered: ";
            cin>>num;
            stk.push(num);
            break;
        case 2:
            stk.pop();
            break;
        case 3:
            stk.peek();
            break;
        case 4:
            stk.display();
            break;
        default:
            cout<<"invalid choice!!";

        }

    }
return 0;
}
