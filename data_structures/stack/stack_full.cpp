#include <iostream>
#include <string>
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
    stk.push(10);
    stk.push(11);
    stk.push(12);
    stk.peek();
    stk.display();
    stk.pop();
    stk.display();
    stk.pop();
    stk.display();
    stk.pop();
    stk.display();

    stk.pop();
    stk.push(10);
    stk.push(11);
    stk.push(12);
    stk.push(10);
    stk.push(11);
    stk.push(12);
    stk.push(10);
    stk.push(11);
    stk.push(12);
    stk.push(10);
    stk.push(11);
    stk.push(12);
    stk.peek();


    return 0;

}
