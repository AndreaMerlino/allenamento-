/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:53:34 by amerlino          #+#    #+#             */
/*   Updated: 2023/09/10 20:19:40 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	s = (char *)src;
	if (!dst)
		return (len);
	else if (!src || dstsize < 1)
		return (len);
	while ((i < dstsize - 1) && (*s != '\0'))
	{
		*dst++ = *s++;
		i++;
	}
	*dst = '\0';
	return (len);
}
