/*
** my_strcat.c for libmy in /home/tessie_g//mini42/lib
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Tue May  1 18:44:54 2012 adrian tessier
** Last update Sun May 20 16:14:41 2012 adrian tessier
*/

#include	"my.h"

char		*my_strcat(char *src, char *dest)
{
  int		i;
  int		i2;

  i2 = 0;
  while (dest[i2])
    ++i2;
  i2 = i2 - 1;
  i = -1;
  while (src[++i])
    dest[++i2] = src[i];
  dest[++i2] = '\0';
  return (dest);
}
