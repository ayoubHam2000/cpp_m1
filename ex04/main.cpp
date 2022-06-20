#include <iostream>
#include <fstream>

void	process_line(std::string &line, const std::string &s1, const std::string &s2)
{
	std::string	res;
	size_t		pos = 0;
	size_t		prev = 0;

	while (1)
	{
		pos = line.find(s1, prev);
		if (pos == 18446744073709551615ULL)
		{
			res.append(line.substr(prev, pos));
			break ;
		}
		res.append(line.substr(prev, pos - prev) + s2);
		prev = pos + s1.length();
	}
	line = res;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "expected 3 argument: file s1 s2" << std::endl;
		return (1);
	}
	std::string file_name = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream file(file_name);
	std::ofstream out_file(file_name + ".replace");
	std::string	line;

	if (file.is_open() && out_file.is_open())
	{
		while (std::getline(file, line))
		{
			process_line(line, s1, s2);
			out_file << line << std::endl;
		}
		file.close();
		out_file.close();
	}
	else
	{
		std::cout << "Unable to open file" << std::endl;
	}
	return (0);
}
