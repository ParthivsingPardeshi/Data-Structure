#include<iostream>
using namespace std;

int n, i;
int q[5];
int r = -1;
int f = -1;

class queue
{
public:
    void insert()
    {
        if (r >= 4)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            cout << "enter the element in queue: ";
            cin >> n;
            r = r + 1;
            q[r] = n;
            if (f == -1)
                f = 0;
        }
    }

    void delate()
    {
        if (f == -1 || f > r)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            cout << "element deleted successfully: " << q[f] << endl;
            f = f + 1;
        }
    }

    void display()
    {
        if (f == -1 || f > r)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            cout << "the elements of queue are: ";
            for (i = f; i <= r; i++)
            {
                cout << q[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    queue qObj; // Create an object of the queue class
    int c;

    do
    {
        cout << "\n1 : insert \n2 : delete \n3 : display \n4 : exit";
        cout << "\nenter your choice: ";
        cin >> c;

        switch (c)
        {
        case 1:
            qObj.insert();
            break;
        case 2:
            qObj.delate();
            break;
        case 3:
            qObj.display();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    } while (c != 4);

    return 0;
}