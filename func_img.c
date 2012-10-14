/*
** func_img.c for lock in /home/tessie_g//lock
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Fri Apr 13 14:49:12 2012 adrian tessier
** Last update Mon Jun 25 13:32:08 2012 adrian tessier
*/

#include <errno.h>
#include <sys/types.h>
#include <dirent.h>
#include <time.h>
#include <stdlib.h>
#include "lock.h"

Uint32	put_img_in_screen(Uint32 intervalle, void *param)
{
  t_lock	*lock = param;
  static  int	i = 0;
  SDL_Surface	*img = NULL;
  int		a = -1;
  SDL_Rect	position;
  t_list	*tmp = lock->list;

  i = rand() % my_listlen(tmp);
  while (++a < i)
    if (tmp && tmp->next)
      tmp = tmp->next;
  i++;
  SDL_FillRect(lock->screen, NULL, SDL_MapRGB(lock->screen->format, 0, 0, 0));
  if (tmp && tmp->str)
    {
      if ((img = SDL_LoadBMP(tmp->str)) == NULL)
	{
	  my_putstr_error("SDL_LoadBMP failed.\n");
	  return (1);
	}
      if (img->w > 1920)
	position.x = 0;
      else
	position.x = (1920 / 2) - (img->w / 2);
      if (img->h > 1080)
	position.y = 0;
      else
	position.y = (1080 / 2) - (img->h / 2);
      if (SDL_BlitSurface(img, NULL, lock->screen, &position) == -1)
	{
	  my_putstr_error("SDL_BlitSurface failed.\n");
	  return (1);
	}
      SDL_Flip(lock->screen);
      SDL_FreeSurface(img);
    }
  return (0);
}

int	my_check_is_bmp(char *filename)
{
  int	strlen = my_strlen(filename);

  if (filename[strlen - 4] == '.' &&
      filename[strlen - 3] == 'b' &&
      filename[strlen - 2] == 'm' &&
      filename[strlen - 1] == 'p')
    return (1);
  return (0);
}

t_list	*get_img_in_one_dir(char *path, t_list *list)
{
  struct dirent *rd;
  DIR           *dirp;

  if ((dirp = opendir(path)) == NULL)
    {
      my_putstr_error("Fail opendir.\n");
      return (NULL);
    }
  while ((rd = readdir(dirp)) != NULL)
    if (rd->d_name[0] != '.' && my_check_is_bmp(rd->d_name))
      list = my_put_in_list(my_strcat_op(path, rd->d_name), list);
  closedir(dirp);
  return (list);
}

t_list	*get_img(int ac, char **av, char sort)
{
  t_list	*list = NULL;
  int		i = 0;

  if (ac == 1)
    list = get_img_in_one_dir(LOCK_DEFAULT_DIRECTORY, list);
  else
    while (++i < ac && av[i])
      if (av[i][0] != '-')
      list = get_img_in_one_dir(av[i], list);
  if (sort != 0)
    list = my_manage_sort(list, sort);
  return (list);
}
