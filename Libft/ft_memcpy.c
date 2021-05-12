#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned int	len;

	if (!dest && !src)
		return (dest);
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	len = (unsigned int)n;
	while (len != 0)
	{
		*s1++ = *s2++;
		len--;
	}
	return (s1);
}