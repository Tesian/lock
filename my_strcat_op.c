/*
** my_strcat.c for lock in /home/tessie_g//lock
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Fri Apr 13 14:41:41 2012 adrian tessier
** Last update Fri Apr 13 14:44:43 2012 adrian tessier
*/

#include <string.h>
#include "lock.h"

char	*my_strcat_op(char *s1, char *s2)
{
  int	i = -1;
  int	i2 = -1;
  char	*dest;

  dest = malloc(strlen(s1) + strlen(s2) + 1);
  while (s1[++i])
    dest[++i2] = s1[i];
  i = -1;
  while (s2[++i])
    dest[++i2] = s2[i];
  dest[++i2] = '\0';
  return (dest);
}
