/*
** my_putstr.c for my_lib in /home/tessie_g//lib
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Fri Jan 20 23:03:27 2012 adrian tessier
** Last update Sun May 20 16:09:31 2012 adrian tessier
*/

#include	<unistd.h>
#include	"my.h"

int		my_putstr(char *str)
{
  if (!str)
    return (-1);
  return (write(1, str, my_strlen(str)));
}
