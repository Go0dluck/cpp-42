#include <iostream>
#include <string.h>

int		main(int agrc, char **agrv)
{
	if (agrc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < agrc; i++)
		{
			for (size_t y = 0; y < strlen(agrv[i]); y++)
			{
				std::cout << (char)toupper(agrv[i][y]);
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
