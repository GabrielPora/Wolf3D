/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 15:42:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/05/10 07:50:48 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwstr_fd(wchar_t const *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putwchar_fd((wchar_t)(s[i]), fd);
		i++;
	}
}
