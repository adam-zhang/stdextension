#include <iostream>
#include <cassert>
#include <string>
#include "std_extension.hpp"

using namespace std;

int main(int, char**)
{
	auto s1 = string("Hello");
	auto s2 = string("hello");
	cout << icompare(s1, s2) << endl;
	return 0;
}
