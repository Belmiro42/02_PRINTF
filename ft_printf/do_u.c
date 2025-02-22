/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:12:37 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/08/08 16:49:09 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	do_u(unsigned int n, unsigned int *index,
				unsigned int *length, unsigned int iteration)
{
	char	c;

	if (n / 10)
		do_u(n / 10, index, length, iteration + 1);
	c = '0' + n % 10;
	if (!iteration)
		*index += 2;
	*length += write(1, &c, 1);
}
