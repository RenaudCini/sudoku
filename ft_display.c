/ * *********************************************** *************************** * /
/ *                                                                             * /
/ *                                                         ::: ::::::::    * * /
/ *   ft_display.c: +:: +:: +:    * /
/ *                                                     +: + +: + +: +      * /
/ *    Par: Renaudcini <renaudcini@gmail.com> + # + +: + + # +         * /
/ *                                                 + # + # + # + # + # + + # +            * /
/ *    Créé: 2014/09/06 16:44:10 par Renaudcini # + # # + #              * /
/ *    Mise à jour: 2014/09/07 15:13:56 par Renaudcini ### ########. Fr        * /
/ *                                                                             * /
/ * *********************************************** *************************** * /


#include "ft.h"

void	ft_display(char **tab)
{
	int x;
	int y;

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
}
