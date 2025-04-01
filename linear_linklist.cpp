#include <iostream>
using namespace std;
class node
{
public:
    int info;
    node *next;
};
class SLinked
{
public:
    node *start = NULL, *Temp, *prev;
    void FInsert();
    void EInsert();
    void MInsert();
    void FDelete();
    void EDelete();
    void MDelete();
    void Display();
};
void SLinked::FInsert()
{
    int x;
    cout << "Enter value ";
    cin >> x;
    node *n = new node;
    n->info = x;
    // n->next=NULL;
    if (start == NULL)
    {
        start = n;
        n->next = NULL;
    }
    else
    {
        n->next = start;
        start = n;
    }
}
void SLinked::EInsert()
{
    int x;
    cout << "Enter value ";
    cin >> x;
    node *n = new node;
    n->info = x;
    n->next = NULL;
    if (start == NULL)
    {
        start = n;
    }
    else
    {
        Temp = start;
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = n;
    }
}
void SLinked::MInsert()
{
    int x, y;
    cout << "Enter value ";
    cin >> x;
    node *n = new node;
    n->info = x;
    n->next = NULL;
    if (start == NULL)
    {
        start = n;
    }
    else
    {
        Temp = start;
        cout << "Enter the Value Which you insert after the element ";
        cin >> y;
        while (Temp->info != y)
        {
            Temp = Temp->next;
        }
        n->next = Temp->next;
        Temp->next = n;
    }
}
void SLinked::FDelete()
{
    if (start == NULL)
    {
        cout << "Linked list is Empty ! ";
    }
    else
    {
        Temp = start;
        start = start->next;
        delete Temp;
    }
}
void SLinked::EDelete()
{
    if (start == NULL)
    {
        cout << "Linked list is Empty !";
    }
    else
    {
        prev = Temp = start;
        while (Temp->next != NULL)
        {
            prev = Temp;
            Temp = Temp->next;
        }
        prev->next = NULL;
        delete Temp;
    }
}
void SLinked::MDelete()
{
    int y;
    if (start == NULL)
    {
        cout << "LInked List is empty !";
    }
    else
    {
        prev = Temp = start;
        cout << "Enter the Value Which you want to Delete the element ";
        cin >> y;
        while (Temp->info != y)
        {
            prev = Temp;
            Temp = Temp->next;
        }
        prev->next = Temp->next;
        delete Temp;
    }
}
void SLinked::Display()
{
    node *q;
    if (start == NULL)
    {
        cout << "List is Empty !";
    }
    else
    {
        cout << "***** Elements of Linked List ***** \n";
        q = start;
        while (q != NULL)
        {
            cout << q->info << "\n";
            q = q->next;
        }
    }
}
int main()
{
    bool x;
    int choice, sec;
    SLinked l;
    do
    {
        cout << "-------------------Singly Linked List-------------------\n"
             << "1] You want to Insert a Node  \n"
             << "2] You want to Delete a Node \n"
             << "3] You want to Display Linked List \n"
             << "4] Exit \n";
        cout << "Enter Your Choice ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "1] you want to Insert a Node on Starting \n"
                 << "2] you want to Insert a Node on Middle \n"
                 << "3] you want to Insert a Node on Ending \n"
                 << "4] Exit\n";
            cin >> sec;
            switch (sec)
            {
            case 1:
                l.FInsert();
                break;

            case 2:
                l.MInsert();
                break;

            case 3:
                l.EInsert();
                break;

            case 4:
                return 0;
            }
            break;
        case 2:
            cout << "1] you want to Deletion a Node on Starting \n"
                 << "2] you want to Deletion a Node on Middle \n"
                 << "3] you want to Deletion a Node on Ending \n"
                 << "4] Exit \n";
            cin >> sec;
            switch (sec)
            {
            case 1:
                l.FDelete();
                break;

            case 2:
                l.MDelete();
                break;

            case 3:
                l.EDelete();
                break;

            case 4:
                return 0;
            }
        case 3:
            l.Display();
            break;
        case 4:
            return 0;

        default:
            cout << "You enter wrong choice ! ";
            break;
        }
    } while (choice != 9);

    return 0;
}