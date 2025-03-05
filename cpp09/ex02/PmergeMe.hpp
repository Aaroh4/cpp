#pragma once

#include <list>
#include <vector>
#include <iostream>

class PmergeMe
{
	public:
		std::vector<size_t> generateJacobsthalIndicesV(size_t n);
		std::list<size_t> generateJacobsthalIndicesL(size_t n);
		size_t binarySearchInsertion(const std::vector<int>& sorted, int target);
		size_t binarySearchInsertion(const std::list<int>& sorted, int target);
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