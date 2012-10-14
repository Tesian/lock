/*
** my_put_in_list.c for my_sh in /home/tessie_g//afs/rendu/projets/minishell
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Tue Dec 20 21:45:37 2011 adrian tessier
** Last update Sun May 20 16:08:45 2012 adrian tessier
*/

#include	<stdlib.h>
#include	"my.h"

t_list		*my_put_in_list(char *str, t_list *src)
{
  t_list	*backup;
  t_list	*dest;

  if ((dest = my_xmalloc(sizeof(t_list))) == NULL)
    return (NULL);
  dest->str = str;
  if (src == NULL)
    dest->next = src;
  else
    {
      dest->next = NULL;
      backup = src;
      while (src->next)
	src = src->next;
      src->next = dest;
      dest = backup;
     }
  return (dest);
}
