/*
** my_strcpy.c for my_lib in /home/tessie_g//lib
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Fri Jan 20 23:16:27 2012 adrian tessier
** Last update Sun May 20 16:16:02 2012 adrian tessier
*/

#include	<stdlib.h>

char		*my_strcpy(char *src, char *dest)
{
  int		i;

  if (src == NULL)
    return (NULL);
  i = -1;
  while (src[++i])
    dest[i] = src[i];
  dest[i] = '\0';
  return (dest);
}
