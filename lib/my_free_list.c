/*
** my_free_list.c for my_sh in /home/tessie_g//afs/rendu/projets/minishell
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Tue Dec 20 23:10:08 2011 adrian tessier
** Last update Sun May 20 16:02:42 2012 adrian tessier
*/

#include	<stdlib.h>
#include	"my.h"

void		my_free_list(t_list *list)
{
  t_list	*tmp;

  while (list)
    {
      if (list->str != NULL)
	free(list->str);
      tmp = list->next;
      free(list);
      list = tmp;
    }
}
