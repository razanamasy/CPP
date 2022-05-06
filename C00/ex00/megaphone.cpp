#include <iostream>

int	main(int argc, char	**argv)
{
	int	i;
	int	arg;

	arg = 1;
	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i])
		{
			if (isalpha(argv[arg][i]))
				std::cout << (char)toupper(argv[arg][i]);
			else
				std::cout << argv[arg][i];
			i++;
		}
		arg++;
	}
	std::cout << std::endl;
	return (0);
}
