#include <stdio.h>
#include <string.h>
#include <stddef.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && !len)
		return (0);
	if (needle[0] == '\0' && (needle == haystack))
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
int main()
{
	char h[] = "canecavallocarta";
	char n[] = "   ";
	char *holdme = ft_strnstr(h, n, 15);
	printf("%s\n", holdme);
	return(0);
}

