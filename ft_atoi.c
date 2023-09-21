/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <amerlino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:41:28 by amerlino          #+#    #+#             */
/*   Updated: 2023/09/19 18:56:43 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_atoi(const char *nptr)
{
  int i;
  char *str;
  int a;

  i = 0;
  str = (char *) nptr;
  while (*str)
  {
    if (*str)
    i = i * 10 + (*str - 48);
    str++;
  }
  return (i);

}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        int d = ft_atoi(av[1]);
        printf("%d\n", d);
    }
}