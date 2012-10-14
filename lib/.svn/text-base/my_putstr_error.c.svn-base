/*
** my_putstr_error.c for samurai_tek in /home/tessie_g//Downloads/testsdl
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Wed Jan 25 12:08:17 2012 adrian tessier
** Last update Sun May 20 16:12:37 2012 adrian tessier
*/

#include	<unistd.h>
#include	"my.h"

int		my_putchar_error(char c)
{
  return (write(2, &c, 1));
}

int		my_putstr_error(char *str)
{
  if (!str)
    return (1);
  return (write(2, str, my_strlen(str)));
}
