/*
** my_tablen.c for my_sh in /home/tessie_g//afs/rendu/projets/minishell
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Thu Dec 15 16:54:15 2011 adrian tessier
** Last update Wed May  2 23:06:56 2012 adrian tessier
*/

int	my_tablen(char **tab)
{
  int	i;

  i = -1;
  if (!tab)
    return (0);
  while (tab[++i]);
  return (i);
}
