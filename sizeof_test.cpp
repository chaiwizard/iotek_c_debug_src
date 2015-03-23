#include <iostream>
using namespace::std;

class B{
public:
	virtual void f() {}
private:
	char a;
	int b;
	char c;
};

int main(int argc, char *argv[])
{
	char s[] = "Hello World";
	char *p = "Hello World";
	int data[100] = {0};
	cout << sizeof(s) << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(data) << endl;
	
	B b;
	cout << sizeof(B) << endl;
	cout << sizeof(b) << endl;

	return 0;
}
