#include <iostream>
using namespace std;
class queue_implementation{
    private:
        int arr[10],top=-1,bottom=0;
    public:
        void enqueue(int number){
            if (top>=9)
                cout<<"Overflow!!";
            else{
                top+=1;
                arr[top]=number;
                cout<<number <<" inserted!!";
            }
        }
        void dequeue(){
            if(top<bottom){
                cout<<"UnderFlow!!";
            }
            else{
                cout<<arr[bottom]<<" removed from queue";
                bottom+=1;
            }
        }
        void peek(){
            if (top<bottom)
                cout<<"Queue is empty";
            else
                cout<<"Next to be removed is "<< arr[bottom];
        }
        void display(){
            cout<<"the queue is"<<endl;
            for (int i=top;i>bottom-1;i--)
                cout<<arr[i]<<endl;
        }
};int main(){
    queue_implementation stk;
    int choice;
    while(true){
        cout<<endl<<"1)Enqueue\n2)Dequeue\n3)Peek\n4)Display\nEnter your choice: ";
        cin>>choice;
        switch(choice){
        case 1:
            int num;
            cout<<"enter the number to be entered: ";
            cin>>num;
            stk.enqueue(num);
            break;
        case 2:
            stk.dequeue();
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
