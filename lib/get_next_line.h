/*
** get_next_line.h for get_next_line in /home/tessie_g//afs/rendu/projets/getnextline
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Mon Nov 21 10:51:25 2011 adrian tessier
** Last update Sun May 20 17:13:22 2012 adrian tessier
*/

#ifndef		GET_NEXT_LINE_H_
# define	GET_NEXT_LINE_H_

# define	NUMBER_CHAR_READ	10000
# define	BUFF_SIZE		50000

int		is_backline(char *str);
int		manage_buffers_begin(char *buff_st, char *buff);
int		manage_buff_st(char *buff_st);
char		*get_next_line(const int fd);

#endif		/* !GET_NEXT_LINE_H_ */
