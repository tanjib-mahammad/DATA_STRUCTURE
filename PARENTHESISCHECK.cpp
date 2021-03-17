/**
    @tanjib_mahammad
    C++ PROGRAM TO DEMONSTRATE WHETHER A BRACKET SEQUENCE IS VALID OR NOT.
*/
#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;
bool is_balance(string sq);
int main(int argc, const char* argv[])
{
    string sq;
    cout << "PLEASE ENTER A SEQUENCE OF BRACKET TO CHECK WHETHER IT IS VALID OR NOT: ";
    cin >> sq;
    if(is_balance(sq))
        cout << "JOIOUS! THE ENTERED SEQUENCE IS VALID.";
    else
        cout << "ALAS! THE ENTERED SEQUENCE IS NOT VALID.";
    exit(EXIT_SUCCESS);
}
bool is_balance(string sq)
{
    stack<char>stk;
    for(int i = 0; i < sq.length(); ++i)
    {
        if(sq[i] == '(' || sq[i] == '{' || sq[i] == '[')
        {
            stk.push(sq[i]);
        }
        if(stk.empty())
            return false;
        else
        {
            switch(sq[i])
            {
                case ')':
                    if(stk.top() == '{' || stk.top() == '[')
                        return false;
                    else
                        stk.pop();
                    break;
                case '}':
                    if(stk.top() == '(' || stk.top() == '[')
                        return false;
                    else
                        stk.pop();
                    break;
                case ']':
                    if(stk.top() == '(' || stk.top() == '{')
                        return false;
                    else
                        stk.pop();
                    break;
                default:
                    break;
            }
        }
    }
    return stk.empty();
}
