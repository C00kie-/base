/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 19:39:00 by pbourmea          #+#    #+#             */
/*   Updated: 2016/01/28 20:18:38 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


static void
call(void) {
	static int i = 0;

	printf("%d", i);
	i++;
	if (i != 10)
		call();
}

static void
call2(void) {
	static int i = 0;

	if (i != 10)
		call2();
	printf("%d", i);
	i++;
}

int	main(void)
{
	call();
	return (0);
	
}
