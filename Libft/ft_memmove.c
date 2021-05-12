#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (!dest && !src)
		return (dest);
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (dest > src)
	{
		while (n--)
			s1[n] = s2[n];
	}
	else
		while (n--)
			*s1++ = *s2++;
	return (s1);
}
