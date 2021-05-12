#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int ch)
{
	while (*s)
	{
		if (*s++ == (char)ch)
			return ((char *)s - 1);
		if (ch == '\0')
			return ((char *)s);
	}
	return (NULL);
}
