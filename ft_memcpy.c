/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:51:03 by amerlino          #+#    #+#             */
/*   Updated: 2023/09/09 20:24:33 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destinazione;
	char	*sorgente;
	size_t	i;

	i = 0;
	sorgente = (char *) src;
	destinazione = dst;
	if (!src && !dst)
		return (NULL);
	else
	{
		while (i < n)
		{
			*destinazione++ = *sorgente++;
			i++;
		}
	}
	return (destinazione - n);
}
