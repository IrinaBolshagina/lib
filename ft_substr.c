#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{
		if (!(str = malloc(len + 1)))
			return (NULL);
		while (i < len && s[start])
			str[i++] = s[start++];
	}
	else	if (!(str = malloc(1)))
		return (NULL);
	str[i] = '\0';
	return (str);
}
