/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 21:17:57 by pbourmea          #+#    #+#             */
/*   Updated: 2016/01/28 23:04:32 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*RECURSIVE*/
int	call(int nb)
{
	if (nb == 0)
		return (1);
	else
	{
		/*tant que i != 0, on n a pas ouvert toutes les boites, comme nombre
		de boites sera le nombre de fois que nb sera modifie*/
	 	return (nb*call(nb-1));	/*se rappelle*/
	}

}


/*ITERATIVE*/
/*int	call(int nb)
{
	static int fact;
	
	fact = 1;
	while (nb != 0)
		fact = fact * nb--;
	return (fact);
}
*/

int	main(void)
{
	int nb;

	/*change la valeur de nb pour tester la factorielle*/
	nb = 0;


	printf("%d", call(nb));
	return (0);
}
