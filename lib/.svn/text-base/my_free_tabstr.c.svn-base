/*
** my_free_tabstr.c for my_sh2 in 
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Thu Mar  1 18:04:23 2012 adrian tessier
** Last update Sun May 20 16:03:24 2012 adrian tessier
*/

#include	<stdlib.h>
#include	"my.h"

void		my_free_tabstr(char **tabstr)
{
  int		i;

  i = -1;
  if (tabstr == NULL)
    return ;
  if (tabstr[0] == NULL)
    {
      free(tabstr);
      return ;
    }
  i = -1;
  while (tabstr[++i])
    free(tabstr[i]);
  free(tabstr);
}
