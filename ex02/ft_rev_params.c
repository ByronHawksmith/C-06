#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	argc--;
	while (argc > 0 && *argv[argc])
	{
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
