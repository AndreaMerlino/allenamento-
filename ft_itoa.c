#include <stdio.h>
#include <stdlib.h>


char *itoa_2(int n, int i, char *s, int p)
{
    while(n)
    {
        while(n > 9)
        {
            i = i * 10 + (n % 10);
            n = n / 10;
        }
        s[p] = n + 48;
        p++;
        n = 0;
        while(i > 0)
        {
            n = i % 10 + (n * 10);
            i = i / 10;
        }
        if (n == 0)
        {
            s[p] = '\0';
            return (s);
        }
    }
}

char *ft_itoa(int n)
{
    char *s;
    int i;
    int p;

    i = 0;
    p = 0;
    s = (char *) malloc(12 * sizeof(char));
    if (n < 0)
    {
        s[p] = 45;
        p++;
        n = -n;
    }
    return (itoa_2(n, i, s, p));
}

int main(void)
{
    char    *str;
    str = ft_itoa(-98585);
    printf("%s\n", str);
    return (0);

}