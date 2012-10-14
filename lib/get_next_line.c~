/*
** getnextline.c for get_next_line in /home/tessie_g//afs/rendu/projets/getnextline
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Fri Nov 25 12:07:37 2011 adrian tessier
** Last update Sun May 20 15:55:46 2012 adrian tessier
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"my.h"
#include	"get_next_line.h"

int		is_backline(char *str)
{
  int		i;
  int		ret;

  ret = 0;
  i = 0;
  while (str[i])
    {
      if (str[i] == '\n')
        ret = 1;
      i++;
    }
  return (ret);
}

int		manage_buffers_begin(char *buff_st, char *buff)
{
  int		i;
  int		i2;

  i2 = -1;
  i = -1;
  if (buff)
    {
      my_memset(buff, BUFF_SIZE, '\0');
      while (buff_st[++i2] && buff_st[i2] != '\n')
	if (buff_st[i2] != '\r')
	  buff[++i] = buff_st[i2];
      if (is_backline(buff_st) == 0)
	my_memset(buff_st, NUMBER_CHAR_READ, '\0');
    }
  return (i);
}

int		manage_buff_st(char *buff_st)
{
  int		i;

  i = -1;
  while (buff_st[++i] && buff_st[i] != '\n')
    buff_st[i] = '\r';
  if (buff_st[i] == '\n')
    buff_st[i] = '\r';
  return (0);
}

char		*get_next_line(const int fd)
{
  static char	buff_st[NUMBER_CHAR_READ + 1];
  char		*buff;
  int		i;
  int		i2;
  int		ret;

  ret = 1;
  buff = my_xmalloc(BUFF_SIZE + 1);
  i = manage_buffers_begin(buff_st, buff);
  while (buff && is_backline(buff_st) == 0 && ret > 0)
    {
      ret = read(fd, buff_st, NUMBER_CHAR_READ);
      if ((ret == 0 && buff_st[0] == '\0' && buff[0] == '\0') || ret == -1)
	{
	  free(buff);
	  return (NULL);
	}
      if (ret == 0 && buff_st[0] == '\0' && buff[0] != '\0')
	return (buff);
      i2 = -1;
      while (buff_st[++i2] && buff_st[i2] != '\n' && (i + 1) < BUFF_SIZE)
	buff[++i] = buff_st[i2];
    }
  manage_buff_st(buff_st);
  return (buff);
}
