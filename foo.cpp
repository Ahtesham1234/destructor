//foo.cpp
//demonstrates destructor

#include <iostream>
using namespace std;

class Foo
{
private:
int data;
public:
Foo() : data(0)
{  }
-Foo()
{  }
};

// just the representation of the use of destructor
