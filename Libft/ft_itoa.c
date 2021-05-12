#include "libft.h"

static int	ft_inlen(int n)
{
	int	num;
	int	i;

	num = n;
	i = 0;
	while (num)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

static char	*ft_itoa_malloc(int n)
{
	char	*s;

	s = (char *)malloc(ft_inlen(n) + 2);
	if (!s)
		return (NULL);
	return (s);
}

static char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	buff;

	i = 0;
	length = ft_strlen(str);
	while (length > i)
	{
		buff = str[i];
		str[i] = str[length - 1];
		str[length - 1] = buff;
		length--;
		i++;
	}
	return (str);
}

static char	*ft_convert(char *s, int num)
{
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	if (num == 0)
		s[i++] = '0';
	if (num < 0)
	{
		num = num * (-1);
		neg = 1;
	}
	while (num != 0)
	{
		s[i] = (num % 10) + 48;
		num /= 10;
		i++;
	}
	if (neg == 1)
	{
		s[i] = '-';
		i++;
	}
	s[i] = '\0';
	return (ft_strrev(s));
}

char	*ft_itoa(int n)
{
	char	*s;

	if (n == -2147483648)
		return ("-2147483648");
	s = ft_itoa_malloc(n);
	if (!s)
		return (NULL);
	if (!ft_convert(s, n))
		return (NULL);
	return (s);
}
