#include "PmergeMe.hpp"
#include <iostream>
#include <chrono>


std::vector<size_t> PmergeMe::generateJacobsthalIndicesV(size_t n) 
{
	std::vector<size_t> indices;
	indices.push_back(0);
	
	size_t j = 1;
	while (j < n) 
	{
		indices.push_back(j);
		j = (j == 1) ? 3 : j * 2 + 1;
	}
			
	while (indices.back() < n - 1)
		indices.push_back(indices.back() + 2);
	
	return (indices);
}

std::list<size_t> PmergeMe::generateJacobsthalIndicesL(size_t n) 
{
	std::list<size_t> indices;
	indices.push_back(0);
	
	size_t j = 1;
	while (j < n) 
	{
		indices.push_back(j);
		j = (j == 1) ? 3 : j * 2 + 1;
	}
			
	while (indices.back() < n - 1)
		indices.push_back(indices.back() + 2);
	
	return (indices);
}

size_t PmergeMe::binarySearchInsertion(const std::vector<int>& sorted, int target) 
{
	size_t left = 0;
	size_t right = sorted.size();
	
	while (left < right) 
	{
		size_t mid = left + (right - left) / 2;
		
		if (sorted[mid] < target)
			left = mid + 1;
		else
			right = mid;
	}
	
	return (left);
}

size_t PmergeMe::binarySearchInsertion(const std::list<int>& sorted, int target) 
{
    size_t left = 0;
    size_t right = sorted.size();

    while (left < right) 
    {
        size_t mid = left + (right - left) / 2;
        std::list<int>::const_iterator it = sorted.begin();
        
        std::advance(it, mid);

        if (*it < target)
            left = mid + 1;
        else
            right = mid;
    }

    return (left);
}

void PmergeMe::sortVec()
{
	if (m_vector.size() <= 1)
		return;
	
	std::vector<std::pair<int, int>> pairs;
	int odd = -1;

	for (size_t i = 0; i + 1 < m_vector.size(); i += 2)
		pairs.push_back({m_vector[i], m_vector[i + 1]});
	
	if (m_vector.size() % 2 == 1)
		odd = m_vector.back();
	
	for (std::pair<int, int>& p : pairs) {
		if (p.first > p.second)
			std::swap(p.first, p.second);
	}
	
	m_vector.clear();
	for (const std::pair<int, int>& p : pairs)
		m_vector.push_back(p.second);
	
	if (odd != -1)
		m_vector.push_back(odd);
	
	sortVec();
	
	std::vector<size_t> jacobsthalIndices = generateJacobsthalIndicesV(pairs.size());
	
	for (size_t index : jacobsthalIndices) 
	{
		if (index >= pairs.size())
			break;
		
		size_t insertPos = binarySearchInsertion(m_vector, pairs[index].first);
		m_vector.insert(m_vector.begin() + insertPos, pairs[index].first);
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

	std::list<size_t> jacobsthalIndices = generateJacobsthalIndicesL(pairs.size());
	
	for (size_t index : jacobsthalIndices) 
	{
		if (index >= pairs.size())
			break;
		
		std::list<std::pair<int, int>>::const_iterator pairIt = pairs.begin();
		std::advance(pairIt, index);

		size_t insertPos = binarySearchInsertion(m_list, pairIt->first);
		std::list<int>::const_iterator listIt = m_list.begin();
		std::advance(listIt, insertPos);
		m_list.insert(listIt, pairIt->first);
	}
}


PmergeMe::PmergeMe(char **argv)
{
	auto start = std::chrono::high_resolution_clock::now();
	for (size_t i = 1; argv[i]; i++)
	{
		int num = std::stoi(argv[i]);
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

	start = std::chrono::high_resolution_clock::now();
	for (size_t i = 1; argv[i]; i++)
	{
		int num = std::stoi(argv[i]);
		m_list.push_back(num);
	}
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