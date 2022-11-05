#pragma once
class Test2;
class Test1
{
	int a = 10;
public:
	void Set_a(int a);
	int Geta();

	Test1(int b)
	{
		a = b;
	};

	//friend void static Test2::foo(Test1& obj);
	friend Test2;
	
};