#include <iostream>
using namespace std;
class node
{
public:
    int info;
    node *left, *right;
};
node *start = NULL, *p;
class dll
{
public:
    void create();
    void nodeinsert();
    void nodedelete();
    void search();
    void display();
};
void dll::create()
{
    int x;
    p = new node;
    p->left = p->right = NULL;
    cout << "enter node info:";
    cin >> x;
    p->info = x;
    if (start == NULL)
    {
        start = p;
    }
}
void dll::nodeinsert()
{
    int x, c;
    node *n;
    n = start;
    p = new node;
    cout << "1.insert at beginning" << endl;
    cout << "2.insert at end" << endl;
    cout << "3.insert at middle" << endl;
    cin >> c;
    if (c == 1)
    {
        cout << "enter info:";
        cin >> x;
        p->left = NULL;
        p->info = x;
        p->right = n;
        p->left = p;
        start = p;
    }
    if (c == 2)
    {
        cout << "enter info:";
        cin >> x;
        p->info = x;
        while (n->right != NULL)
        {
            n = n->right;
        }
        p->left = n;
        n->right = p;
    }
    if (c == 3)
    {
        int a;
        cout << "enter value of information:";
        cin >> a;
        cout << "enter info:";
        cin >> x;
        p->info = x;
        while (n->info != a)
        {
            n = n->right;
        }
        p->left = n;
        p->right = n->right;
        p->right->left = p;
        n->right = p;
    }
}
void dll::nodedelete()
{
    if (start == NULL)
    {
        cout << "linked list is empty";
    }
    int k, c;
    node *n;
    n = start;
    if (n->left == NULL && n->right == NULL)
    {
        k = n->info;
        cout << k << "deleted";
        delete n;
        start = NULL;
    }
    else
    {
        cout << "1.delete at beginning" << endl;
        cout << "2.delete at end" << endl;
        cout << "3.delete at middle" << endl;
        cin >> c;
        if (c == 1)
        {
            k = n->info;
            cout << k << "deleted";
            start = start->right;
            delete n;
        }
        if (c == 2)
        {
            while (n->right != NULL)
            {
                n = n->right;
            }
            k = n->info;
            p = n->left;
            p->right = NULL;
            delete n;
            cout << k << "deleted";
        }
        if (c == 3)
        {
            int a;
            cout << "enter value of info:";
            cin >> a;
            while (n->info != a)
            {
                n = n->right;
            }
            k = n->info;
            n->left->right = n->right;
            n->right->left = n->left;
            delete n;
            cout << k << "delete";
        }
    }
}
void dll::search()
{
    node *t;
    int z, i = 0, j = 0;
    t = start;
    cout << "enter data for search information;";
    cin >> z;
    while (t != NULL)
    {
        i++;
        if (t->info == z)
        {
            cout << t->info << "found in" << i << "position";
            j = 1;
            break;
        }
        else
        {
            j = 0;
        }
        t = t->right;
    }
    if (j == 0)
    {
        cout << "item is not found";
    }
}
void dll::display()
{
    if (start == NULL)
    {
        cout << "linked list empty";
    }
    node *t;
    t = start;
    while (t != NULL)
    {
        cout << t->info << " ";
        t = t->right;
    }
}
int main()
{
    dll d;
    int k, n = 1;
    char c;
    do
    {
        cout << endl
             << "1.create" << endl;
        cout << "2.insert_node" << endl;
        cout << "3.delete_node" << endl;
        cout << "4.search" << endl;
        cout << "5.display" << endl;
        cout << "6.exit" << endl;
        cout << "enter choice:";
        cin >> k;
        switch (k)
        {
        case 1:
            if (n == 1)
            {
                d.create();
                n = 2;
            }
            else
            {
                cout << "choose another option";
            }
            break;
        case 2:
            d.nodeinsert();
            break;
        case 3:
            d.nodedelete();
            break;
        case 4:
            d.search();
            break;
        case 5:
            d.display();
            break;
        case 6:
            c = '4';
            break;
        default:
            cout << "option not found" << endl;
        }
    } while (c != '4');
}