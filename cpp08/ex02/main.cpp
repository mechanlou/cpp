#include "mutantstack.hpp"
#include <list>
#include <iostream>

int main()
{
	std::list<int>		lst;
	MutantStack<int>    mstack;
	mstack.push(5);
	mstack.push(17);
	lst.push_back(5);
	lst.push_back(17);
	std::cout << "mstack top : " << mstack.top() << std::endl;
	std::cout << "lst back : " << lst.back() << std::endl;
	
	mstack.pop();
	lst.pop_back();
	std::cout << "mstack size : " << mstack.size() << std::endl;
	std::cout << "lst size : " << lst.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	MutantStack<int>::iterator mstack_it = mstack.begin();
	MutantStack<int>::iterator mstack_end = mstack.end();
	std::cout << "mstack content :" << std::endl;
	while (mstack_it != mstack_end)
	{
		std::cout << *mstack_it << std::endl;
		++mstack_it;
	}
	std::list<int>::iterator lst_it = lst.begin();
	std::list<int>::iterator lst_end = lst.end();
	std::cout << "lst content :" << std::endl;
	while (lst_it != lst_end)
	{
		std::cout << *lst_it << std::endl;
		++lst_it;
	}
	std::stack<int> s(mstack);
	MutantStack<int> copy(mstack);
	MutantStack<int> assign;

	assign = copy;
	MutantStack<int>::iterator assign_it = assign.begin();
	MutantStack<int>::iterator assign_end = assign.end();
	std::cout << "assigned content :" << std::endl;
	while (assign_it != assign_end)
	{
		std::cout << *assign_it << std::endl;
		++assign_it;
	}
	return 0;
}