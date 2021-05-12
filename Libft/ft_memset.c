#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	len;

	str = (unsigned char *)s;
	len = (unsigned int)n;
	while (len != 0)
	{
		*str++ = c;
		len--;
	}
	return (str);
}
