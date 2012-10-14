/*
** my_int_to_char.c for my_int_to_char in /home/tessie_g//afs/rendu/projets/bistro
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Thu Nov  3 19:45:27 2011 adrian tessier
** Last update Sun May 20 16:06:54 2012 adrian tessier
*/

#include	<stdlib.h>
#include	"my.h"

int		my_int_len(int nbr)
{
  int		len;

  len = 0;
  while (nbr > 0)
    {
      nbr = nbr / 10;
      len = len + 1;
    }
  return (len - 1);
}

int		my_calc_int_to_char(int nbr, char *res, int i)
{
  if (nbr / 10 > 0)
    my_calc_int_to_char(nbr / 10, res, i - 1);
  res[i] = nbr % 10 + '0';
  return (0);
}

char		*my_int_to_char(int nb)
{
  char		*res;

  if (nb == 0)
    {
      if ((res = my_xmalloc(2)) == NULL)
	return (NULL);
      res[0] = '0';
      res[1] = '\0';
    }
  else
    {
      if ((res = my_xmalloc(my_int_len(nb) + 2)) == NULL)
	return (NULL);
      my_calc_int_to_char(nb, res, my_int_len(nb));
      res[my_int_len(nb) + 1] = '\0';
    }
  return (res);
}
