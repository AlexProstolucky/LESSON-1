#include <iostream>
#include "Source2.cpp"
#include "Source1.cpp"
using namespace std;
int main()
{
	Test1 object_0(10);
	object_0.Set_a(100);
	Test2 test;
	test.foo(object_0);
	Test2::foo2(object_0);
	cout<<object_0.Geta();
}