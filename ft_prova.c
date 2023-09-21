#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*pagliaio;
	char	*ago;
	int		l;
	int		a;

	pagliaio = (char *) haystack;
	if(!needle || *needle == '\0')
		return (pagliaio);
	ago = (char *) needle;
	l = strlen(ago);
	a = 0;
	while (*pagliaio && len > 0)
	{
		while ((*pagliaio == *ago) && len > 0)
		{
			ago ++;
			len --;
			pagliaio ++;
			a++;
			if (*ago == '\0')
				return (pagliaio - l);
		}
		ago = ago -a;
		a = 0;
		pagliaio ++;
		len --;
	}
	return (NULL);
}

	int main()
	{
		char h[] = "canecavallocarta";
		char n[] = "";
		char *holdme = ft_strnstr(h, n, 15);
		printf("%s\n", holdme);
		return(0);
	}


