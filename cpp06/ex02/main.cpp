#include "Base.hpp"

Base	*generate(void)
{
	Base*	p;
	int i = rand() % 3;
	switch(i)
	{
		case 0:
			std::cout << "Base generated" << std::endl;
			p = new A();
			break;
		case 1:
			std::cout << "Base B generated" << std::endl;
			p = new B();
			break;
		case 2:
			std::cout << "Base C generated" << std::endl;
			p = new C();
			break;
	}
	return p;
}

void	identify(Base* p)
{
	std::cout << "Pointer *" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	A a;
	B b;
	C c;

	std::cout << "Reference &" << std::endl;
	try 
	{
		a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} 
	catch (std::bad_cast & e) 
	{
		try 
		{
			b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast & e) 
		{
			try 
			{
				c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast & e)
			{
			}
		}
	}
}

int main(void)
{
	Base *p;

	srand(time(NULL));
	p = generate();
	identify(p);
	identify(*p);
	std::cout << "================" << std::endl;
	p = generate();
	identify(p);
	identify(*p);
	std::cout << "================" << std::endl;
	p = generate();
	identify(p);
	identify(*p);
}