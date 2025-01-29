#pragma once

#include <iostream>
#include <deque>
#include <variant>

class RPN
{
	public:
			void makeCalc();

			RPN(std::string arg);
			~RPN();
	private:
			RPN(const RPN&)  = delete;
			RPN& operator=(const RPN&)  = delete;
			std::deque<std::variant<int64_t, char>> m_elements;
};