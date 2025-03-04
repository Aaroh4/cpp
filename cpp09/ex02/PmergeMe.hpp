#pragma once

#include <list>
#include <vector>

class PmergeMe
{
	public:
		void	sortVec();
		void	sortList();

		PmergeMe(char **argv);
		~PmergeMe();
	private:
		PmergeMe() = delete;
		PmergeMe(const PmergeMe&) = delete;
		PmergeMe& operator=(const PmergeMe&) = delete;
		std::vector<int>	m_vector;
		std::list<int>		m_list;
};