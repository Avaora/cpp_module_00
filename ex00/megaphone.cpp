#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int x = 1; (x < argc) && (argv[x] != NULL); x++)
		{
			for (int y = 0; (argv[x][y] != 0x0); y++)
				std::cout << (char)std::toupper(argv[x][y]);
		}
	}
	std::cout << std::endl;
	return (0);
}