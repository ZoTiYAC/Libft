#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	if (!dest && !src)
	{
		return (dest);
	}
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	i = 0;
	while (n--)
	{
		s1[i] = s2[i];
		if (s2[i] == (unsigned char)c)
		{
			return (s1);
		}
		i++;
	}
	return (NULL);
}
