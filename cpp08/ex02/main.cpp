#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	std::cout << "MutantStack:\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << "----------------------------------\nshould be the same as above list:\n";

	std::list<int> mlist;

    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl; 

    mlist.pop_back();
    std::cout << mlist.size() << std::endl;

    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    //[...]
    mlist.push_back(0);

    std::list<int>::iterator it2 = mlist.begin();
    std::list<int>::iterator ite2 = mlist.end();
    ++it2;
    --it2;

    while (it2 != ite2) {
        std::cout << *it2 << std::endl;
        ++it2;
    }

	std::cout << "----------------------------------\nother tests:\n";
	const MutantStack<int> newmstack(mstack);
	MutantStack<int>::const_reverse_iterator reverseIt = newmstack.rbegin();

	while (reverseIt < newmstack.rend())
	{
		std::cout << *reverseIt << "\n";
		reverseIt++;
	}

	std::cout << "----------------------------------\n";

	MutantStack<int> copy;
	copy = newmstack;

	copy.pop();
	copy.push(43535467);
	MutantStack<int>::reverse_iterator copyIt = copy.rbegin();

	while (copyIt < copy.rend())
	{
		std::cout << *copyIt << "\n";
		copyIt++;
	}
}