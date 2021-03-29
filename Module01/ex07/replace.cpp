#include <iostream>
#include <fstream>

std::string ReplaceString(std::string line, std::string search, std::string replace)
{
	size_t pos = 0;
	while ((pos = line.find(search, pos)) != std::string::npos)
	{
		line.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return line;
}

int	main(int agrc, char **agrv)
{
	std::string line;

	if (agrc == 4)
	{
		std::ifstream ifs(agrv[1]);

		if (ifs.is_open() == 0)
		{
			std::cout << "Error open file" << std::endl;
			return 1;
		}
		else
		{
			std::ofstream ofs(std::string(agrv[1]) + ".replace");
			if (ofs.is_open() == 0)
			{
				std::cout << "Error create file" << std::endl;
				return 1;
			}
			else
			{
				while (std::getline(ifs, line))
				{
					ofs << ReplaceString(line, agrv[2], agrv[3]) << std::endl;
				}
			}
			ofs.close();
		}
		ifs.close();
	}
	else
		std::cout << "Error argument !!!" << std::endl;
	return 0;
}
