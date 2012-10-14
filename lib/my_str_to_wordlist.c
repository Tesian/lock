/*
** my_str_to_wordlist.c for libmy in /home/tessie_g//afs/rendu/projets/42sh/lib
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Wed Apr  4 00:55:22 2012 adrian tessier
** Last update Sun May 20 16:20:30 2012 adrian tessier
*/

#include	<stdlib.h>
#include	"my.h"

t_list		*my_str_to_wordlist(char *str, char *sep)
{
  t_list	*backup;
  t_list	*wordlist;
  int		i;

  i = -1;
  backup = NULL;
  wordlist = NULL;
  while (str[++i])
    if (is_sep(str[i], sep) == 0 && (i == 0 || is_sep(str[i - 1], sep) == 1))
      {
	if ((wordlist = my_put_in_list(str + i, wordlist)) == NULL)
	  {
	    my_free_list(backup);
	    return (NULL);
	  }
	backup = wordlist;
      }
    else if (is_sep(str[i], sep) == 1)
      str[i] = '\0';
  return (wordlist);
}
