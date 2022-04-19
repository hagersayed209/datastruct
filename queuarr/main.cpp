#include <iostream>
#define Size 5
using namespace std;
class queueWarr
{
    int queuearr[Size],Front=-1,Rear=-1;
public:
    void enqueue(int value)
    {

        if(Rear!=Size -1)
        {
            if(Rear==-1 && Front==-1 )
            {

                Front++;
                queuearr[++Rear]=value;

            }
            else
            {
                queuearr[++Rear]=value;
            }

        }
        else
        {
            cout<<"queue is full\n";
        }
    }
    void dequeue()
    {
        if(Rear!=-1 && Front!=-1 && Front<=Rear)
        {
            ++Front;
        }
        else
        {
            cout<<"queue is empty\n";
        }
    }
    int peek()
    {
        if(Rear!=-1 && Front!=-1 && Front<=Rear)
        {
            return queuearr[Front];
        }
        else
        {
            cout<<"queue is empty\n";
        }
    }
    void display()
    {
        if(Rear!=-1 && Front!=-1 && Front<=Rear)
        {
            for(int i=Front; i<=Rear; i++)
            {
                cout<<queuearr[i]<<endl;
            }}
            else
            {
                cout<<"queue is empty\n";
            }

        }


};

int main()
{
    queueWarr qa;
    qa.enqueue(1);
    qa.enqueue(2);
    qa.enqueue(3);
    qa.enqueue(4);
    qa.enqueue(5);
    qa.display();
     cout<<".............................................\n";
     qa.dequeue();
      qa.display();
     cout<<".............................................\n";

    cout<<"peek = "<<qa.peek()<<endl;

    return 0;
}
