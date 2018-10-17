/*
** EPITECH PROJECT, 2018
** cat.c
** File description:
** *
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int  my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
	my_putchar(str[i]);
	i++;
    }
    return (0);
}

int our_cat (char *argv)
{
    int fd;
    char my_tab[30000];
    int size;

    fd = open(argv, O_RDONLY);
    size = read(fd, my_tab, 29999);
    if (fd == -1) {
	return (0);
    }
    my_putstr(my_tab);
    close(fd);
    return (0);
}

int main(int argc, char **argv)
{
    int fd = 0;
    int cpt = 1;
    char my_tab[30000];
    int i = 1;

    if (argc <= 1) {
	while (i == 1) {
	    read(1, my_tab, 1);
	    write(1, my_tab, 1);
	}
    }

    while (cpt < argc) {
	our_cat(argv[cpt]);
	cpt = cpt + 1;
    }
    return (0);
}
