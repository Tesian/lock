/*
** main.c for lock in /home/tessie_g//lock
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Fri Apr 13 10:44:59 2012 adrian tessier
** Last update Mon Jun 25 13:29:14 2012 adrian tessier
*/

#include <time.h>
#include <unistd.h>
#include <crypt.h>
#include "lock.h"

#define KEY     event.key.keysym.sym
#define UNICODE event.key.keysym.unicode

int	my_manage_password(int key, unsigned char unicode, char *pass)
{
  static int	i = -1;
  static char	pass_enter[64];
  int		ret = 1;
  static unsigned char	c = 0;
  char		*pass_enter_crypt;

  if (c == unicode)
    return (1);
  if (key == SDLK_ESCAPE)
    {
      my_memset(pass_enter, 63, '\0');
      i = -1;
      return (1);
    }
  if (key == SDLK_BACKSPACE)
    {
      if (i > -1)
	i--;
      return (1);
    }
  if ((c = unicode) != 0)
    {
      if (i < 62)
	pass_enter[++i] = c;
      if (key == SDLK_RETURN)
	{
	  pass_enter[i] = '\0';
	  pass_enter_crypt = my_crypt(pass_enter);
	  if (strcmp(pass, pass_enter_crypt) == 0)
	    ret = 0;
	}
    }
  return (ret);
}

void	hook(t_lock *lock, int ac, char **av, char sort)
{
  int		continuer = 1;
  SDL_Event	event;
  int tempsPrecedent = 0, tempsActuel = 0;
  char		*password = get_password();

  if ((lock->list = get_img(ac, av, sort)) == NULL)
    return ;
  put_img_in_screen(0, lock);
  while (continuer)
    {
      SDL_PollEvent(&event);
      if (event.type == SDL_KEYDOWN)
	continuer = my_manage_password(KEY, UNICODE, password);
      /* if ((KEY >= 20 && KEY <= 126) || KEY == SDLK_RETURN */
      /*     || KEY == SDLK_BACKSPACE || KEY == SDLK_ESCAPE) */
      tempsActuel = SDL_GetTicks();
      if (tempsActuel - tempsPrecedent > 3000)
        {
	  put_img_in_screen(0, lock);
	  tempsPrecedent = tempsActuel;
        }
      else
	usleep(30);
    }
  my_free_list(lock->list);
  free(password);
}

void	my_lock(int ac, char **av, char sort)
{
  t_lock	*lock;

  lock = my_xmalloc(sizeof(t_lock));
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) == -1)
    {
      fprintf(stderr, "Fail SDL INIT.\n");
      return ;
    }
  if ((lock->screen = SDL_SetVideoMode(1920, 1080, 32,
                                SDL_HWSURFACE | SDL_FULLSCREEN |
				 SDL_DOUBLEBUF)) == NULL)
    {
      fprintf(stderr, "Fail make window.\n");
      return ;
    }
  if (SDL_EnableUNICODE(1) == 1)
    return ;
  SDL_ShowCursor(SDL_DISABLE);
  SDL_WM_GrabInput(SDL_GRAB_ON);
  hook(lock, ac, av, sort);
  SDL_Quit();
  free(lock);
}

int	main(int argc, char **argv)
{
  char sort;

  srand(time(NULL));
  sort = my_pars_sort(argv);
  if (argc == 2 && my_strcmp(argv[1], "-h") == 0)
    my_putstr(HELP);
  else if (argc == 3 && my_strcmp(argv[1], "-p") == 0)
    make_password(argv[2]);
  else
    my_lock(argc, argv, sort);
  return (0);
}
