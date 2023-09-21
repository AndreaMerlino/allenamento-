#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


char	*ft_substr(char const *s,  int start, int len)
{
	char	*ps;
	int	size;

	if (!s)
		return (NULL);
	if (start >= strlen(s))
		return (strdup(""));
	size = strlen(s + start);
	if (size < len)
		len = size;
	ps = (char *)malloc(sizeof(char) * (len + 1));
	if (!ps)
		return (NULL);
	strncpy(ps, s + start, len + 1);
	return (ps);
}



char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int i;
    int len;

    len = strlen(s1) -1;
    i = 0;
    str = (char *) s1;

    while (strchr(set, str[i]))
        i++;
    while (strchr(set, str[len]))
        len--;
    return (ft_substr(str, i, len -  i));
}

int main (int ac, char **av)
{
if( ac == 3)
{
    printf("%s\n", ft_strtrim(av[1], av[2]));
}

}