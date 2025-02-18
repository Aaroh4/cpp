#include "PmergeMe.hpp"
#include <iostream>
#include <chrono>

void PmergeMe::sortVec()
{
	if (m_vector.size() == 1)
		return ;
	std::vector<std::pair<int, int>> pairs;
	int odd = -1;

	for (size_t i = 0; i + 1 < m_vector.size(); i+= 2)
		pairs.push_back({m_vector[i], m_vector[i + 1]});
	if (m_vector.size() % 2 == 1)
		odd = m_vector.back();
	
	m_vector.clear();
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].first > pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
		m_vector.push_back(pairs[i].second);
	}
	if (odd != -1)
		m_vector.push_back(odd);
	sortVec();

	for (size_t i = 0; i < pairs.size(); i++)
	{
		std::vector<int>::iterator it = m_vector.begin();
		while (*it < pairs[i].first)
			it++;
		m_vector.insert(it, pairs[i].first);
	}
}

PmergeMe::PmergeMe(char **argv)
{
	for (size_t i = 1; argv[i]; i++)
	{
		int num;
		if (0 > (num = std::stoi(argv[i])))
		{
			std::cout << "Error\n";
			exit (1);
		}
		m_list.push_back(num);
		m_vector.push_back(num);
	}

	auto start = std::chrono::high_resolution_clock::now();

	sortVec();

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::micro> elapsed = end - start;

    std::cout << "Elapsed time: " << elapsed.count() << " µs" << std::endl;
	for (size_t i = 0; i < m_vector.size(); i++)
		std::cout << m_vector[i] << "\n";
}

PmergeMe::~PmergeMe()
{
	
}