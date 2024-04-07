#include <iostream>
using namespace std;

template<class T1, class T2>
class myClass
{
    public:
    // int data1;
    // char data2;
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout<< this->data1 <<" "<< this->data2;
    }
        
};

int main()
{ 
    // myClass<int, char> obj(1, 'C');
    // obj.display();
    myClass<char, float> obj('C', 1.5);
    obj.display();

    return 0;
}
