#include <iostream>
using namespace std;
class Number1
{
int a;
public:
void get()
{
    cout<<"Input:";
cin>>a;
if(a<0)
{
get();
}
if(a>100000)
{
    get();
}
}
void check()
{
    cout<<"Output:";
if(a>0)
{cout<<"Positive";
}
else
{
cout<<"Zero";
}
}
};
int main() {
Number1 n;
n.get();
n.check();
return 0;
}