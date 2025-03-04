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

void PmergeMe::sortList()
{
	if (m_list.size() == 1)
		return ;
	std::list<std::pair<int, int>> pairs;
	int odd = -1;
	std::list<int>::iterator it = m_list.begin();

	for (size_t i = 0; i + 1 < m_list.size(); i += 2)
	{
		pairs.push_back(std::pair<int, int>(*it, *(std::next(it))));
		it = std::next(it, 2);
	}
	if (m_list.size() % 2 == 1)
		odd = m_list.back();
	
	m_list.clear();
	for (std::pair<int, int> & pair : pairs)
	{
		if (pair.first > pair.second)
			std::swap(pair.first, pair.second);
		m_list.push_back(pair.second);
	}
	if (odd != -1)
		m_list.push_back(odd);
	sortList();

	for (std::pair<int, int>& pair : pairs)
	{
		it = m_list.begin();
		while (*it < pair.first)
			it++;
		m_list.insert(it, pair.first);
	}
}


PmergeMe::PmergeMe(char **argv)
{
	auto start = std::chrono::high_resolution_clock::now();
	for (size_t i = 1; argv[i]; i++)
	{
		int num;
		if (0 > (num = std::stoi(argv[i])))
		{
			std::cout << "Error: Negative number\n";
			exit (1);
		}
		m_vector.push_back(num);
	}

	sortVec();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::micro> elapsed = end - start;
	std::cout << "\nAfter: ";
	for (size_t i = 0; i < m_vector.size(); i++)
		std::cout << m_vector[i] << " ";

	std::cout << "\nTime to process a range of " << m_vector.size() <<
		" elements with std::vector : " << elapsed.count() << " µs\n";

	for (size_t i = 1; argv[i]; i++)
	{
		int num;
		if (0 > (num = std::stoi(argv[i])))
		{
			std::cout << "Error\n";
			exit (1);
		}
		m_list.push_back(num);
	}
	start = std::chrono::high_resolution_clock::now();
	sortList();
	end = std::chrono::high_resolution_clock::now();
    elapsed = end - start;
    std::cout << "Time to process a range of " << m_list.size() <<
		" elements with std::list : " << elapsed.count() << " µs\n";

    //for (auto n : m_list)
    //    std::cout << n << "\n";
}

PmergeMe::~PmergeMe()
{
	
}