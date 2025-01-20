#include "BitcoinExchange.hpp"
#include <fstream>

BitcoinExchange::BitcoinExchange(std::string filePath)
{
	std::string line;
	std::ifstream database("data.csv");

	if (!database.is_open())
		throw(BitcoinExchange::failedOpen("Database file failed to open"));
	getline(database, line); // skips info

	// Parsing the database file
	while (getline(database, line))
		parseLine(line);

	std::ifstream file(filePath);
	
	if (!file.is_open())
		throw(BitcoinExchange::failedOpen("Input file failed to open"));
	getline(file, line); // skips info
}

void BitcoinExchange::parseLine(std::string line)
{
	size_t separator = line.rfind(",");

	std::string date = line.substr(0, separator);

	if (checkDate(date))
		std::cout << "\n";

	std::string value = line.substr(separator + 1, line.size() - separator);

	// error check
		m_data[date] = value;
	//std::cout << value << "\n";
}

int BitcoinExchange::checkDate(std::string date)
{
	// years are 4 long
	std::cout << date.find("-") << "\n";

	return (0);
}

//BitcoinExchange::BitcoinExchange(const BitcoinExchange& input)
//{
//}

//BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& input)
//{

//	return (*this);
//}

BitcoinExchange::~BitcoinExchange()
{

}