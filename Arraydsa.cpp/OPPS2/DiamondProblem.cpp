#include <iostream>
using namespace std;
class A
{
public:
    int a_ka_public;
    A()
    {
        cout << "a ka constructor call hua \n";
    }
};
class B : virtual public A
{
public:
    int B_ka_public;
    B()
    {
        cout << "b ka constructor call hua \n";
    }
};
class C : virtual public A
{
public:
    int c_ka_public;
    C()
    {
        cout << "c ka constructor call hua \n";
    }
};
class D : virtual public B, virtual public C
{
public:
    void show()
    {
        cout << a_ka_public;
    }
};
int main()
{
    D obj;
    obj.a_ka_public = 10;
    cout << obj.a_ka_public;
}
