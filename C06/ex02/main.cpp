#include <stdlib.h>
#include <time.h> 
#include <iostream> 
#include <typeinfo>

class Base{
		public : 
			virtual ~Base(void){} 
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

void identify(Base* p)
{
	A * p1 = NULL;
	B * p2 = NULL;
	C * p3 = NULL;

	p1 = dynamic_cast<A *>(p);
	if (p1)
		std::cout << "A" << std::endl;
	p2 = dynamic_cast<B *>(p);
	if (p2)
		std::cout << "B" << std::endl;
	p3 = dynamic_cast<C *>(p);
	if (p3)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	int a = 1;
	int b = 1;
	int c = 1;
	try
	{
		A & p1 = dynamic_cast<A &>(p);
		(void)p1;
	}
	catch (std::bad_cast & bc){ a = 0;}
	try
	{
		B & p2 = dynamic_cast<B &>(p);
		(void)p2;
	}
	catch (std::bad_cast & bc){ b = 0;}
	try
	{
		C & p3 = dynamic_cast<C &>(p);
		(void)p3;
	}
	catch (std::bad_cast & bc){ c = 0;}
	
	if (a)
		std::cout << "A" << std::endl;
	if (b)
		std::cout << "B" << std::endl;
	if (c)
		std::cout << "C" << std::endl;

}

Base * generate(void)
{
	int classType;
	srand (time(NULL));
	classType = rand() % 3 + 1;
//	std::cout << classType << std::endl;
	switch (classType)
	{
		case 1 :
			return (new A);
		case 2 :
			return (new B);
		case 3 :
			return (new C);
		default :
			return NULL;
	}
}

int main ()
{
	Base * unknown = NULL;
	unknown = generate();
	identify(unknown);
	identify(*unknown);
	delete unknown;
	return (0);
}
