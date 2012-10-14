/*
** my_getnbr_base.c for 102matrice in /home/tessie_g//afs/rendu/projets/maths/102matrice
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Tue Nov 22 16:07:33 2011 adrian tessier
** Last update Sun May 20 16:04:14 2012 adrian tessier
*/

#include	"my.h"

int		is_in_base(char c, char *base)
{
  int		ret;
  int		i;

  ret = 0;
  i = -1;
  while (base[++i] && ret == 0)
    if (c == base[i])
      ret = 1;
  return (ret);
}

int		my_getnbr_base(char *nbr, char *base)
{
  int		nb;
  int		pos;
  int		pos2;

  pos = -1;
  nb = 0;
  while (nbr[++pos] && is_in_base(nbr[pos], base))
    {
      nb = nb * my_strlen(base);
      pos2 = -1;
      while (base[++pos2] != nbr[pos])
	;
      nb = nb + pos2;
    }
  return (nb);
}
