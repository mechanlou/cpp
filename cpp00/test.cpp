#include <string>
#include <iostream>

class test
{
	public :
	test(std::string str) : a(str)
	{

	}
	test()
	{

	}
	~test()
	{

	}
	void print_a(void) const
	{
		std::cout << this->a << std::endl; 
	}
	std::string a;
	private :
};

int main(void)
{
	test a;
	test b("truc");
	a.print_a();
	b.print_a();
	std::cout << &(a.a) << std::endl;
	return (0);
}