/**
    @tanjib_mahammad
    C++ PROGRAM TO DEMONSTRATE BOTTOM TO TOP VIEW OF A STACK.
*/
#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;
void bottom_top(stack<int>stk);
int main(int argc, const char* argv[])
{
    int no, dta;
    stack<int>stk;
    cout << "PLEASE ENTER HOW MANY DATA TO PUSH IN THE STACK: ";
    cin >> no;
    cout << "PLEASE ENTER THE DATA TO STORE IN THE STACK:" << endl;
    for(int inc = 0; inc < no; ++inc)
    {
        cin >> dta;
        stk.push(dta);
    }
    cout << "BOTTOM TO TOP APPROCHED DATA EXISTED IN THE STACK:" << endl;
    bottom_top(stk);
    exit(EXIT_SUCCESS);
}
void bottom_top(stack<int>stk)
{
    if(stk.empty())
        return;
    else
    {
        int tp = stk.top();
        stk.pop();
        bottom_top(stk);
        cout << tp << endl;
        stk.push(tp);
        return;
    }
}
