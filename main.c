/ * *********************************************** *************************** * /
/ *                                                                             * /
/ *                                                         ::: ::::::::    * * /
/ *   main.c: +:: +:: +:    * /
/ *                                                     +: + +: + +: +      * /
/ *    Par: Renaudcini <renaudcini@gmail.com> + # + +: + + # +         * /
/ *                                                 + # + # + # + # + # + + # +            * /
/ *    Créé: 2014/09/06 16:44:10 par Renaudcini # + # # + #              * /
/ *    Mise à jour: 2014/09/07 15:13:56 par Renaudcini ### ########. Fr        * /
/ *                                                                             * /
/ * *********************************************** *************************** * /
/ * *********************************************** *************************** * /
/ *                                                                             * /
/ *                                                         ::: ::::::::    * * /
/ *    backtrack.c: +:: +:: +:    * /
/ *                                                     +: + +: + +: +      * /
/ *    Par: Renaudcini <renaudcini@gmail.com> + # + +: + + # +         * /
/ *                                                 + # + # + # + # + # + + # +            * /
/ *    Créé: 2014/09/06 16:44:10 par Renaudcini # + # # + #              * /
/ *    Mise à jour: 2014/09/07 15:13:56 par Renaudcini ### ########. Fr        * /
/ *                                                                             * /
/ * *********************************************** *************************** * /


#include "ft.h"

int		main(int ac, char **av)
{
	char	tab[9][9];
	char	x;
	char	y;
	char	compt;

	y = 0;
	compt = 0;
	if (ac == 10)
	{
		while (y < 9)
		{
			x = 0;
			while (x < 9)
			{
				((av[y + 1][x] != '.') ? tab[x][y] = av[y + 1][x] : compt++);
				((av[y + 1][x] != '.') ? 0 : (tab[x][y] = '0'));
				x++;
			}
			y++;
		}
	}
	if ((compt > 64) || (ac != 10))
		ft_putstr("Erreur\n");

	ft_putnbr(compt);
	ft_putchar('\n');
//	ft_display(tab);


	x = 0;
 	y = 0;
	while (y <= 8)
	{
		x = 0;
 		while (x <= 8)
		{
			ft_putchar(tab[x][y]);
			(x != 8) ? ft_putchar(' ') : 0 ;
  			x++;
 		}
		ft_putchar('\n');
  		y++;
	}

	return (0);
}
