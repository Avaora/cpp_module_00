#include <iostream>

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while ((x < argc) && (argv[x] != NULL))
		{
			while (argv[x][y] != 0x0)
			{
				std::cout << (char)std::toupper(argv[x][y]);
				y++;
			}
			x++;
			y = 0;
		}
	}
	std::cout << std::endl;
	return (0);
}