#include <iostream>
using namespace std;
class stack{
    public:
    int top=-1;
    int arr[5];
    void push(int x);
    void pop();
    void display();
};
void stack::push(int x){
    if (top==4){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top++;
        arr[top]=x;
        cout<<x<<" pushed into stack"<<endl;
    }
}

void stack::pop(){
    if(top<=-1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        cout<<arr[top]<<" popped from stack"<<endl;
        top--;
    }
}

void stack::display(){
    for (int i = 0; i <= top; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    stack s;
    int choice,x; 
    do{
        cout<<"\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter the element to be pushed: ";
            cin>>x;
            s.push(x);
            break;
        
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;

        case 4:
            cout<<"Exiting..."<<endl;
            break;
        }
    }
    while(choice!=4);
    return 0;
}