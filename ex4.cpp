#include <iostream>
using namespace std;
class MyClass
{

public :

	MyClass();
	~MyClass();
};

MyClass::MyClass()
{
	cout << "c'est la constracteur" << endl;
}

MyClass::~MyClass()
{
	cout << "c'est la dustracteur" << endl;
}
using namespace std;

int main()
{
    MyClass a1;
    a1.~MyClass();
return 0;
}