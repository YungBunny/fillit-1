/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 15:12:23 by cfu               #+#    #+#             */
/*   Updated: 2017/02/09 14:35:11 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 21
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "libft/libft.h"

static char	*g_vtets[] = {"####", "#....#....#....#", "#....#....##",
	"##...#....#", "##....#....#", "#....#...##", "###..#", "###....#",
	"#....###", "#..###", "#....##...#", "#...##....#", "###...#", "#...###",
	"##....##", "##..##", "#....##....#", "#...##...#", "##...##"};

static int	g_cy[19][4] = {{0, 0, 0, 0}, {0, 1, 2, 3}, {0, 1, 2, 2},
	{0, 0, 1, 2}, {0, 0, 1, 2}, {0, 1, 2, 2}, {0, 0, 0, 1}, {0, 0, 0, 1},
	{0, 1, 1, 1}, {0, 1, 1, 1}, {0, 1, 1, 2}, {0, 1, 1, 2}, {0, 0, 0, 1},
	{0, 1, 1, 1}, {0, 0, 1, 1}, {0, 0, 1, 1}, {0, 1, 1, 2}, {0, 1, 1, 2},
	{0, 0, 1, 1}};

static int	g_cx[19][4] = {{0, 1, 2, 3}, {0, 0, 0, 0}, {0, 0, 0, 1},
	{0, 1, 0, 0}, {0, 1, 1, 1}, {0, 0, -1, 0}, {0, 1, 2, 0}, {0, 1, 2, 2},
	{0, 0, 1, 2}, {1, -1, 0, 1}, {0, 0, 1, 0}, {0, -1, 0, 0}, {0, 1, 2, 1},
	{0, -1, 0, 1}, {0, 1, 1, 2}, {0, 1, -1, 0}, {0, 0, 1, 1}, {0, -1, 0, -1},
	{0, 1, 0, 1}};

int				main(int ac, char **av);
char			**ft_makeboard(size_t size);
int				ft_fillit(t_list *db, int tamt);
t_list			*ft_getinputs(int fd);
char			*ft_gettet(int fd, size_t *rbyt);
void			ft_repchar(char *str, char o, char n, int max);
char			*ft_trim_tet(char *str, char c);
int				ft_validate_tets(char *str);
int				**ft_getcoords(int linum);
int				**ft_getinxs(char **tet, int x, int y);
int				*ft_gettopinxs(char **tet);
int				*ft_getlefinxs(char **tet);
int				*ft_getstart(char **tet);
int				*ft_newipair(int y, int x);
t_list			*ft_list_em(t_list *db, int linum);
void			ft_initbline(char *bline, size_t len);
int				ft_solve(t_list *db, char **brd, int bwid);
int				ft_didplctet(t_list *db, char **brd, int y, int x);
int				ft_canplctet(t_list *db, char **brd, int y, int x);
int				ft_chkspot(char **brd, int x, int y);
void			ft_plctet(t_list *db, char **brd, int y, int x);
void			ft_putboard(char **brd, int bwid);
void			ft_unplace(char c, char **brd, int bwid);
int				ft_sqrt(int nb);
int				*ft_max(t_list *db);
t_list			*ft_lstcrdsnew(int **content, int c);
void			*ft_crddup(int **crds);
#endif
