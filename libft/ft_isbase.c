/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isbase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anestor <anestor@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:29:05 by anestor           #+#    #+#             */
/*   Updated: 2017/11/02 14:58:00 by anestor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isbase(int c, int base)
{
	c = ft_toupper(c);
	if (base < 11)
	{
		if (c >= '0' && c < '0' + base)
			return (1);
	}
	else if (base > 10)
	{
		if ((c >= '0' && c <= '9') || (c >= 'A' && c <= '@' + base % 10))
			return (1);
	}
	return (0);
}
