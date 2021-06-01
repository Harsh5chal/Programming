#include <iostream>
#include <string>
using namespace std;
class A{
	float d;
   public:
	virtual void func(){
		cout<<"Hello this is class A\n";
	}
};

class B: public A{
	int a = 15;
public:
	void func(){
		cout<<"Hello this is class B\n";
	}
};

int main(int argc, char const *argv[])
{
	B b;
	b.func();
	return 0;
}
