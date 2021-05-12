#include "libft.h"

static char	**ft_malloc(char const *s, char c)
{
	size_t	i;
	char	**split;
	size_t	total;

	i = 0;
	total = 0;
	while (s[i])
	{
		if (s[i] == c)
			total++;
		i++;
	}
	split = (char **)malloc(sizeof(s) * (total + 2));
	if (!split)
		return (NULL);
	return (split);
}

void	*ft_free(char **split, size_t elts)
{
	size_t	i;

	i = 0;
	while (i < elts)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static void	*ft_subsplit(char **split, char const *s, t_strs *st, t_strs *lt)
{
	split[lt->len] = ft_substr(s, st->start, st->len);
	if (!split[lt->len])
		return (ft_free(split, lt->len));
	lt->len++;
	return (split);
}

static void	*ft_findsplit(char **split, char const *s, char c)
{
	size_t	i;
	t_strs	st;
	t_strs	lt;

	i = 0;
	lt.len = 0;
	lt.start = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			st.start = lt.start;
			st.len = (i - lt.start);
			if (i > lt.start && !ft_subsplit(split, s, &st, &lt))
				return (NULL);
			lt.start = i + 1;
		}
		i++;
	}
	st.start = lt.start;
	st.len = (i - lt.start);
	if (i > lt.start && i > 0 && !ft_subsplit(split, s, &st, &lt))
		return (NULL);
	split[lt.len] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	strs = ft_malloc(s, c);
	if (!strs)
		return (NULL);
	if (!ft_findsplit(strs, s, c))
		return (NULL);
	return (strs);
}
