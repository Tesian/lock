/*
** my_strcmp.c for my_lib in /home/tessie_g//lib
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Sat Jan 21 00:48:20 2012 adrian tessier
** Last update Sun May 20 16:15:20 2012 adrian tessier
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	nbr;

  if (!s1 || !s2)
    return (0);
  i = -1;
  while (s1[++i] && s2[i] && s1[i] == s2[i])
    ;
  if (s1[i] - s2[i] < 0)
    nbr = -1;
  else if ((s1[i] - s2[i]) > 0)
    nbr = 1;
  else
    nbr = 0;
  return (nbr);
}
