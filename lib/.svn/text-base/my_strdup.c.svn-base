/*
** my_strdup.c for libmy in /home/tessie_g//mini42/lib
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Tue May  1 18:34:46 2012 adrian tessier
** Last update Sun May 20 16:19:56 2012 adrian tessier
*/

#include	<stdlib.h>
#include	"my.h"

char		*my_strdup(char *src)
{
  int		i;
  char		*dest;

  if (src == NULL)
    return (NULL);
  if ((dest = my_xmalloc(my_strlen(src) + 1)) == NULL)
    return (NULL);
  i = -1;
  while (src[++i])
    dest[i] = src[i];
  dest[i] = '\0';
  return (dest);
}
