/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndessard <ndessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:00:59 by ndessard          #+#    #+#             */
/*   Updated: 2023/10/25 11:46:39 by ndessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	i = ft_strlen(s2);
	while (*s1 && len-- >= i)
	{
		if (*s1 && *s2 && !ft_strncmp((char *)s1, (char *)s2, i))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
