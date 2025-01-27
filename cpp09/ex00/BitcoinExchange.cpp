#include "BitcoinExchange.hpp"
#include <fstream>
#include <ctime>

BitcoinExchange::BitcoinExchange(std::string filePath)
{
	std::string line;
	std::ifstream database("data.csv");

	if (!database.is_open())
		throw(BitcoinExchange::failedOpen("Database file failed to open"));
	getline(database, line); // skips info

	// Parsing the database file
	while (getline(database, line))
		parseDatabase(line);

	std::ifstream file(filePath);
	
	if (!file.is_open())
		throw(BitcoinExchange::failedOpen("Input file failed to open"));
	getline(file, line); // skips info

	// Parsing the input file
	while (getline(file, line))
		parseInput(line);

}

void BitcoinExchange::parseDatabase(std::string line)
{
	size_t separator = line.rfind(",");

	std::string date = line.substr(0, separator);

	if (checkDate(date))
		throw(BitcoinExchange::parsingFail("Database: Format is wrong!"));


	std::string value = line.substr(separator + 1, line.size() - separator);

	if (checkFloat(value))
		throw(BitcoinExchange::parsingFail("Database: Value is not a float!"));
	m_data[date] = value;
}

void BitcoinExchange::parseInput(std::string line)
{
	size_t separator = line.rfind("|");
	if (separator == std::string::npos)
	{
		std::cerr << "Error: bad input => " << line << "\n";
		return ;
	}

	float value;
	try
	{
		value = std::stof(line.substr(separator + 1, std::string::npos));
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << "\n";
		return ;
	}

	if (value > 2147483647.0)
	{
		std::cerr << "Error: too large a number.\n";
		return ;
	}
	else if (value < 0)
	{
		std::cerr << "Error: not a positive number.\n";
		return ;
	}
	std::string date = line.substr(0, separator - 1);

	if (checkDate(date))
		throw(BitcoinExchange::parsingFail("Input: Format is wrong!"));

	auto it = m_data.lower_bound(date);

	if (it->first != date && it != m_data.begin())
		it--;
	float dataValue = std::stof(it->second);

	std::cout << date << " => " << value << " = " << value * dataValue << "\n";
}

int BitcoinExchange::checkFloat(std::string value)
{
	bool dot = false;

	for (char c : value)
	{
		if (isdigit(c))
			continue;
		else if (c == '.' && dot == false)
			dot = true;
		else
			return (1);
	}
	if (value.find(".") == 0 || value.find(".") == value.size() - 1)
		return (1);

	return (0);
}

int BitcoinExchange::checkDate(std::string date)
{
	int day = stoi(date.substr(8, std::string::npos));
	int month = stoi(date.substr(5, 7));
	int year = stoi(date.substr(0, 4));

	// tm_mon is 0-based, tm_year is years since 1900 
	std::tm tm = {};
	tm.tm_mday = day;
	tm.tm_mon = month - 1;
	tm.tm_year = year - 1900;

    std::time_t time = std::mktime(&tm);

    if (time == -1 || tm.tm_mday != day || tm.tm_mon != month - 1 || tm.tm_year != year - 1900)
        return (1);

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