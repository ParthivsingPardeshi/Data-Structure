#include <iostream>

#include <cstring>

using namespace std;

char Q[10], P[10], S[10];

int top = -1, top_p = -1;

class postfix

{

  public:

     void postfix1();

     int pres(char p);

     // void length_of_Q();

};

int postfix::pres(char p)

{

     switch (p)

    {

     case '+':

          return 1;

     case '-':

          return 1;

          break;

     case '*':

          return 2;

     case '/':

          return 2;

          break;

     case '^':

          return 3;

          break;

     default:

          return 0;

          break;

         
    }

     return 0;

}

void postfix::postfix1()

{

     int i, l, A, B;

     cout << "Enter Infix expereation \n";

     cin >> Q;

     l = strlen(Q); //claculate the length of Q using string function

           // cout<<i;

     Q[l] = ')';

     cout << Q << endl;

     top++;

     S[top] = '(';

     cout << S[top]; //( push of stack

     top++;

     top_p++;

     for (i = 0; i <= l; i++)

          {

          if (Q[top] == '\0')

              {

               cout << "Queue is empty";

             
              }

          else

              {

               if (Q[i] >= 'a' && Q[i] <= 'z' || Q[i] >= 'A' && Q[i] <= 'Z')

                    {

                    P[top_p] = Q[i];

                    top_p++;

                    }

               else

                    {

                        if (Q[i] == '(')

                        {
                                top++;
                             S[top] = Q[i];
                              

                        }

                        else

                        {

                             if (Q[i] == '*' || Q[i] == '/' || Q[i] == '+' || Q[i] == '-' || Q[i] == '^')

                              {

                                  if (S[top] == '*' || S[top] == '/' || S[top] == '+' || S[top] == '-' || S[top] == '^')

                                  {
   
                                       while (pres(Q[i]) <= pres(S[top]))

                                       {

                                            P[top_p] = S[top];

                                            top--;

                                            top_p++;
                                        
                                       }
                                        top++;
                                        S[top]=Q[i];

                                 
                                   }
                                   else
                                  {
                                     top++;  //change
                                     S[top] = Q[i];
                                      
                                  }
                               }
                               else
                               {

                                   if (Q[i] == ')')

                                   {
                                       while (S[top] != '(')
                                       {

                                           P[top_p] = S[top];

                                           top=top-2;

                                           top_p++;
                                       }
                                    
                                    }
                                    else
                                    {   
                                     P[top_p]=S[top];
                                        top--;
                                        top_p++;
                                   }
                               }
                       }
                    }
                }
            }

cout << "Postfix Experection is " << P;

}

int main()

{

     postfix p;

     p.postfix1();

     return 0;

}