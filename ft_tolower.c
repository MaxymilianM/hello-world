/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 12:44:08 by mminenko          #+#    #+#             */
/*   Updated: 2017/11/01 12:44:09 by mminenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_tolower(int c)
{
	unsigned char	bulba;

	if (c > 64 && c < 91)
	{
		bulba = c + 32;
		return (bulba);
	}
	return (c);
}