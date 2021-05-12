#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int ch)
{
	if (ch == '\0')
		return ((char *)s);
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s++ == (char)ch)
			return ((char *)s - 1);
	}
	return (NULL);
}
