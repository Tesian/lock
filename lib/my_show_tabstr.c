/*
** my_show_tabstr.c for my_sh2 in /home/tessie_g//afs/rendu/projets/minishell2
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Fri Mar  2 14:20:02 2012 adrian tessier
** Last update Sun May 20 16:14:10 2012 adrian tessier
*/

#include	"my.h"

void		my_show_tabstr(char **tabstr)
{
  int		i;

  if (!tabstr || !tabstr[0])
    return ;
  i = -1;
  while (tabstr[++i])
    {
      my_putstr(tabstr[i]);
      my_putchar('\n');
    }
}
