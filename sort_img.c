#include "lib/my.h"
#include "lock.h"

char	my_pars_sort(char **av)
{
  int	i = -1;

  while (av[++i])
    if (my_strcmp(RANDOM_STD_STR, av[i]) == 0)
      return (RANDOM_STD);
    else if (my_strcmp(SORT_ALPHA_STR, av[i]) == 0)
      return (SORT_ALPHA);
    else if (my_strcmp(SORT_NUMERIC_STR, av[i]) == 0)
      return (SORT_NUMERIC);
  return (DEFAULT_RANDOM);
}

t_list	*my_manage_sort(t_list *list, char sort)
{
  return (list);
}
