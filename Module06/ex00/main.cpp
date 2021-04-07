#include <iostream>
#include <string>
#include <cmath>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define VIOLET "\033[35m"

void	convertToChar(double argF)
{
	char	i = static_cast<char>(argF);

	if (argF > static_cast<double>(CHAR_MAX) || argF < static_cast<double>(CHAR_MIN) || std::isnan(argF) || argF < 0)
		std::cout << RED << "char: impossible" << RESET << std::endl;
	else if (i < 32 || i > 126)
		std::cout << RED << "char: Non displayable" << RESET << std::endl;
	else
		std::cout << GREEN << "char: '" << i << "'"  << RESET << std::endl;
}

void	convertToFloat(double argF)
{
	float	i = static_cast<float>(argF);

	if (i == ((float)((int)i)))
		std::cout << GREEN << "float: " << i << ".0f" << RESET << std::endl;
	else
		std::cout << GREEN << "float: " << i << "f" << RESET << std::endl;
}

void	convertToDouble(double argF)
{
	double	i = static_cast<double>(argF);

	if (i == ((double)((int)i)))
		std::cout << GREEN << "double: " << i << ".0" << GREEN << std::endl;
	else
		std::cout << GREEN << "double: " << i << RESET << std::endl;
}

void	convertToInt(double argF)
{
	int i = static_cast<int>(argF);
	if (argF > static_cast<double>(INT_MAX) || argF < static_cast<double>(INT_MIN) || std::isnan(argF))
		std::cout << RED << "int: impossible" << RESET << std::endl;
	else
		std::cout << GREEN << "int: " << i << RESET << std::endl;
}

void	checkLiteral(char *arg)
{
	double	argF;
	char	*end = NULL;

	if (strlen(arg) == 1 && ((arg[0] >= 'a' && arg[0] <= 'z') || (arg[0] >= 'A' && arg[0] <= 'Z') || arg[0] == ' '))
		argF = arg[0];
	else
		argF = std::strtod(arg, &end);
	if (end != NULL)
	{
		if (end[0] != '\0' && strcmp(end, "f"))
		{
			std::cout << RED << "Error convert" << RESET << std::endl;
			return ;
		}
	}
	convertToChar(argF);
	convertToInt(argF);
	convertToFloat(argF);
	convertToDouble(argF);
}

int	main(int agrc, char **agrv)
{
	if (agrc != 2)
		std::cout << RED << "Error argument" << RESET << std::endl;
	else
	{
		checkLiteral(agrv[1]);
	}
	return 0;
}
