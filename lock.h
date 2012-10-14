/*
** lock.h for lock in /home/tessie_g//lock
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Fri Apr 13 10:45:59 2012 adrian tessier
** Last update Mon Apr 16 15:50:25 2012 adrian tessier
*/

#ifndef __LOCK_H__
#define __LOCK_H__

#include "SDL/SDL.h"
#include "lib/my.h"

typedef	struct	s_lock
{
  SDL_Surface	*screen;
  t_list	*list;
}		t_lock;

#define	PWD_KEY			21
#define	LOCK_DEFAULT_DIRECTORY	"/home/tesian/Images/lock/"
#define PWD_FILE		"/home/tesian/Prog/kikoo/lock/.password"

#define DEFAULT_RANDOM		0
#define RANDOM_STD		1
#define SORT_ALPHA		2
#define	SORT_NUMERIC		3

#define RANDOM_STD_STR		"-t.rand"
#define SORT_ALPHA_STR		"-t.alpha"
#define SORT_NUMERIC_STR       	"-t.numeric"

#define HELP			"\nHelp lock:\n\
     le password doit faire moins de 60 caractères, liste des caractères\n\
     autorisés : azertyuiopqsdfghjklmwxcvbnAZERTYUIOPQSDFGHJKLMWXCVBN\n\
     123456789&\"'(-_)=/*-+$%!:/;.,?~#{[|`\\@]}\n\
lock lance le lock avec les images contenues dans le dossier par default\n\
     (voir lock.h)\n\
-h   affiche ce récapitulatif.\n\
-p   \"password\" remplace le password courant par \"password\".\n\
     lock dir1 dir2 dir3 lance le lock avec les images contenues dans les 3\n\
     dossiers.\n\n\
Options de tris des images :\n\
           tri par default \"vrai aléatoire\" une images peut se répéter\n\
           deux fois (chaque fois une images et choisi aux hasards dans \n\
           l'ensemble des images).\n\
-t.rand    random organisé une images ne peut pas se répéter deux fois (une \n\
           liste est fait au départ qui met les images dans le désordre).\n\
-t.alpha   tri alphaphabétiques.\n\
-t.numeric tri numérique.\n\n"

/* sort_img.c */
char    my_pars_sort(char **av);
t_list  *my_manage_sort(t_list *list, char sort);

/* my_strcat_op.c */
char    *my_strcat_op(char *s1, char *s2);

/* func_img.c */
Uint32  put_img_in_screen(Uint32 intervalle, void *param);
t_list  *get_img(int ac, char **av, char sort);

/* password.c */
char    *get_password();
int     make_password(char *password);
char    *my_crypt(char *password);

/* main.c */
int     my_manage_password(int key, unsigned char unicode, char *pass);
void    hook(t_lock *lock, int ac, char **av, char sort);
void    my_lock(int ac, char **av, char sort);
int     main(int argc, char **argv);

#endif
