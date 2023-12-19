#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	size;

	if (!s)
		return (NULL);
	else if (s[start] == '\0')
	{
		res = (char *)malloc(1);
		if (res == NULL)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	size = ft_strlen(s + start);
	if (size < len)
		res = (char *)malloc(size + 1);
	else
		res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, (s + start), (len + 1));
	return (res);
}
