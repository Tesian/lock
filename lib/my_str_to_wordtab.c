/*
** my_str_to_wordtab.c for my_sh in /home/tessie_g//afs/rendu/projets/minishell
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Mon Dec 12 20:22:20 2011 adrian tessier
** Last update Sun May 20 16:21:02 2012 adrian tessier
*/

#include	<stdlib.h>
#include	"my.h"

char		**my_str_to_wordtab(char *str, char *sep)
{
  char		**wordtab;
  int		i2;
  int		i;

  i2 = -1;
  i = -1;
  if ((wordtab = my_xmalloc(sizeof(char *) * (my_count_word(str, sep) + 1)))
      == NULL)
    return (NULL);
  while (str[++i])
    if (is_sep(str[i], sep) == 0 && (i == 0 || is_sep(str[i - 1], sep) == 1))
      wordtab[++i2] = str + i;
    else if (is_sep(str[i], sep) == 1)
      str[i] = '\0';
  wordtab[++i2] = NULL;
  return (wordtab);
}
