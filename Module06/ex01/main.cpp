#include <iostream>
#include <string>

struct Data
{
	std::string str1;
	std::string str2;
	int			num;
};

void *serialize(void)
{
	Data *ptr = new Data;

	std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	ptr->str1.reserve(15);
	ptr->str2.reserve(15);
	for (int i = 0; i < 15; i++)
		ptr->str1 += str[rand() % 62];
	for (int i = 0; i < 15; i++)
		ptr->str2 += str[rand() % 62];
	ptr->num = rand() % 100;
	std::cout << "\t=====SERIALIZE=====" << std::endl;
	std::cout << "String 1 serialize - " << ptr->str1 << std::endl;
	std::cout << "String 2 serialize - " << ptr->str2 << std::endl;
	std::cout << "Num serialize - " << ptr->num << std::endl;
	return (ptr);
}

Data * deserialize(void * raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int	main()
{
	void	*ser;
	Data *des;

	srand (time(NULL));
	ser = serialize();
	des = deserialize(ser);
	std::cout << "\t=====DESERIALIZE=====" << std::endl;
	std::cout << "String 1 deserialize - " << des->str1 << std::endl;
	std::cout << "String 2 deserialize - " << des->str2 << std::endl;
	std::cout << "Num deserialize - " << des->num << std::endl;
	return 0;
}
