/*
** my_tabcpy.c for my_sh in /home/tessie_g//afs/rendu/projets/minishell
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Thu Dec 15 17:00:44 2011 adrian tessier
** Last update Sun May 20 16:21:40 2012 adrian tessier
*/

#include	<stdlib.h>
#include	"my.h"

char		**return_safely_tabcpy(char **tab, int i)
{
  int		i2;

  i2 = -1;
  while (++i2 < i)
    free(tab[i2]);
  free(tab);
  return (NULL);
}

char		**my_tabcpy(char **tab)
{
  int		i;
  char		**tab_dest;

  if (tab == NULL || tab[0] == NULL)
    return (NULL);
  if ((tab_dest = my_xmalloc((my_tablen(tab) + 1) * sizeof(char *))) == NULL)
    return (NULL);
  i = -1;
  while (tab[++i])
    if ((tab_dest[i] = my_strdup(tab[i])) == NULL)
      return (return_safely_tabcpy(tab, i));
  tab_dest[i] = NULL;
  return (tab_dest);
}
