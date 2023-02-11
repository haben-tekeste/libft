/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:34:58 by htekeste          #+#    #+#             */
/*   Updated: 2023/02/11 15:10:50 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "printf.h"

int	ft_print_num(int nbr)
{
	int		c;
	char	str;

	c = 0;
	if (!nbr)
		return (0);
	str = ft_itoa(nbr);
	c = ft_print_str(str);
	free(str);
	return (c);
}