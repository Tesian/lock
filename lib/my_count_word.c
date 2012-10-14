/*
** my_count_word.c for libmy in /home/tessie_g//afs/rendu/projets/42sh/lib
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Wed Apr  4 00:39:28 2012 adrian tessier
** Last update Wed May 16 15:21:14 2012 adrian tessier
*/

int	is_sep(char c, char *sep)
{
  int	i;
  int	ret;

  ret = 0;
  i = -1;
  while (sep[++i] && ret == 0)
    if (c == '\0' || c == sep[i])
      ret = 1;
  return (ret);
}

int	my_count_word(char *str, char *sep)
{
  int	i;
  int	count;

  i = -1;
  count = 0;
  while (str[++i])
    if (is_sep(str[i], sep) == 0 && (i == 0 || is_sep(str[i - 1], sep) == 1))
      count++;
  return (count);
}
