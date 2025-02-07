#include <list>
#include <vector>

class PmergeMe
{
	public:
		void	sortVec();

		PmergeMe(char **argv);
		~PmergeMe();
	private:
		std::vector<int>	m_vector;
		std::list<int>		m_list;
};