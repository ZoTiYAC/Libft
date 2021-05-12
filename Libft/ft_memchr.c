#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*str++ == ch)
			return (str - 1);
	}
	return (NULL);
}

int main()
{
	char *s = "1234fhjk";
	char ch = '4';
	size_t i = 5;

	printf("%p\n", memchr(s, ch, i));
	printf("%p\n", ft_memchr(s, ch, i));
}
