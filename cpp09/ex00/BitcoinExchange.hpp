#pragma once
#include <iostream>
#include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange(std::string filePath);
		~BitcoinExchange();

		void parseDatabase(std::string line);
		void parseInput(std::string line);
		int checkDate(std::string date); // 1 for error and 0 for correct
		int checkFloat(std::string value); // 1 for error and 0 for correct

		class failedOpen: public std::exception
		{
			public:
				failedOpen(const std::string& message) : m_message(message) {}
				const char* what() const throw() { return m_message.c_str(); }
			private:
				std::string m_message;
		};

		class parsingFail: public std::exception
		{
			public:
				parsingFail(const std::string& message) : m_message(message) {}
				const char* what() const throw() { return m_message.c_str(); }
			private:
				std::string m_message;
		};

	private:
		BitcoinExchange(const BitcoinExchange&) = delete;
		BitcoinExchange& operator=(const BitcoinExchange&) = delete;
		BitcoinExchange() = delete;
		std::map<std::string, std::string> m_data;

};