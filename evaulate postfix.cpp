#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool IsNumber(char c)
{
    if((int)c >= (int)'0'&& (int)c<=(int)'9')
return true;
else
    return false;
}
bool Isoperator(char c)
{
    if((c=='+')||c=='-'||c=='*'||c=='/')
return true;
else
    return false;

}
float calculate(char c,int nu1,int nu2)
{
    if(c=='+')
    return nu1+nu2;
else if (c=='-') return nu1-nu2;
else if(c=='*') return nu1*nu2;
else if (c=='/') return nu1/nu2;
return 0;
}
float evaluate (string x)
{
    stack <float> s;
for(int i=0;i<x.length();i++)
{
    if(x[i]==' ')
        continue;
    else if(Isoperator(x[i]))
        {
            int nu1=s.top();
            s.pop();
            int nu2=s.top();
            s.pop();
            s.push(calculate(x[i],nu1,nu2));
        }
        else if(IsNumber(x[i]))
        {
            int nu;
            nu=x[i]-'0';
            s.push(nu);
        }
}

return s.top();
}

int main()
{
    cout << "please enter the postfix expression" << endl;
    string x;
getline(cin,x);
float output= evaluate(x);
cout<<" output is : "<<output<<endl;
    return 0;
}

