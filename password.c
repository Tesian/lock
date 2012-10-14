#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "lock.h"

char	*get_password()
{
  int	fd;
  char	str[64];
  char	c = '\0';
  int	i = -1;

  if ((fd = open(PWD_FILE, O_RDONLY)) == -1)
    return (NULL);
  while (read(fd, &c, 1) == 1 && c != '\n')
    if (i < 62)
      str[++i] = c;
  str[++i] = '\0';
  if (close(fd) == -1)
    return (NULL);
  return (my_strdup(str));
}

int	make_password(char *password)
{
  int	fd;
  char	*encrypt_password;

  if ((fd = open(PWD_FILE, O_CREAT | O_TRUNC | O_WRONLY,
		 S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)) == -1)
    {
      my_putstr_error("Une erreur a empêché la modification du mot de passe.\n");
      return (-1);
    }
  encrypt_password = my_crypt(password);
  write(fd, encrypt_password, my_strlen(encrypt_password));
  write(fd, "\n", 1);
  if (close(fd) == -1)
    return (-1);
  my_putstr("Change password done.\n");
  return (0);
}

char	*my_crypt(char *password)
{
  int	i = -1;

  while (password[++i])
    password[i] = password[i] ^ PWD_KEY;
  password[i] = '\0';
  return (password);
}
