/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:26:56 by amerlino          #+#    #+#             */
/*   Updated: 2023/09/12 18:46:48 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*pagliaio;
	char	*ago;
	int		l;
	int		a;

	pagliaio = (char *) haystack;
	if(!needle)
		return (pagliaio);
	ago = (char *) needle;
	l = ft_strlen(ago);
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
