#pragma once
#include "Header2.h"
#include "Header1.h"
void Test2::foo(Test1& obj)
{
	obj.a++;
}
void Test2::foo2(Test1& obj)
{
	obj.a--;
}