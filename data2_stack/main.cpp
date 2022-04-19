#include <iostream>
#define Size 5
using namespace std;
class  stackclass
{
    int stackarray[Size],top=-1;
public:
    void puch(int value)
    {


        if(top==Size -1)
        {
            cout<<"the stack is full\n";
        }
        else
        {
            top++;
            stackarray[top]=value;
        }
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty\n";
        }
        else
        {
            return stackarray[top--];

        }

    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"stack is empty\n";
        }
        else
        {
            return stackarray[top];
        }
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"stack is empty\n";
        }
        else
        {
            for(int i=top; i>=0; i--)
            {
                cout<<stackarray[i]<<endl;
            }
        }
    }
};
int main()
{
    stackclass ss1;
    ss1.puch(1);
    ss1.puch(2);
    ss1.puch(3);
    ss1.puch(4);
    ss1.puch(5);
    ss1.display();
    cout<<".............................................\n";
     cout<<"peek = "<< ss1.peek()<<endl;
      cout<<".............................................\n";
    ss1.pop();
    ss1.display();
    cout<<".............................................\n";
   cout<<"peek = "<< ss1.peek()<<endl;
    return 0;
}
