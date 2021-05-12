#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	a;

	a = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &a, 1);
}
