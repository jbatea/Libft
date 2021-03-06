/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 18:14:31 by jbateau           #+#    #+#             */
/*   Updated: 2015/12/05 16:09:08 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sect;
	size_t	i;

	i = 0;
	sect = (char *)malloc(sizeof(char) * (len + 1));
	if (sect == NULL)
		return (NULL);
	while (i < len)
	{
		sect[i] = s[start];
		i++;
		start++;
	}
	sect[i] = '\0';
	return (sect);
}
