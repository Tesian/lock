/*
** my.h for my_lib in /home/tessie_g//lib
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Fri Jan 20 23:22:49 2012 adrian tessier
** Last update Sun May 20 17:13:11 2012 adrian tessier
*/

#ifndef		MY_H_
# define	MY_H_

# include	"get_next_line.h"

typedef struct	s_list
{
  char		*str;
  struct s_list	*next;
}		t_list;

t_list	*my_str_to_wordlist(char *str, char *sep);
int	my_tablen(char **tab);
char	**my_tabcpy(char **tab);
int	is_sep(char c, char *sep);
void	my_free_tabstr(char **tabstr);
int	my_count_word(char *str, char *sep);
void	my_show_tabstr(char **tabstr);
char	**my_str_to_wordtab(char *str, char *sep);
t_list	*my_put_in_list(char *str, t_list *src);
void	my_free_list(t_list *list);
void	my_show_list(t_list *list);
int	my_listlen(t_list *list);
char	*my_int_to_char(int nb);
int	my_calc_int_to_char(int nbr, char *res, int i);
int	my_int_len(int nbr);
char	is_lower(char c);
char	is_upper(char c);
char	is_alphanum(char c);
char	is_alpha(char c);
char	is_num(char c);
void	my_memset(char *str, int nb, char c);
void	*my_xmalloc(int nb);
void	my_putnbr(int nb);
char	*my_strcpy(char *src, char *dest);
int	my_getnbr(char *str);
int	my_strlen(char *str);
int	my_putchar_error(char c);
int	my_putstr_error(char *str);
int	my_putstr(char *str);
int	my_putchar(char c);
int	my_strcmp(char *s1, char *s2);
char	*my_strdup(char *src);
char	*my_strcat(char *src, char *dest);
int	is_in_base(char c, char *base);
int	my_getnbr_base(char *nbr, char *base);

#endif	/* !MY_H_ */
