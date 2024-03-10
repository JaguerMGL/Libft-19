/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndessard <ndessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:49:09 by ndessard          #+#    #+#             */
/*   Updated: 2023/10/25 14:41:03 by ndessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	verif;

	verif = count * size;
	if (count != 0 && size != 0)
	{
		if (verif / count != size)
			return (NULL);
	}
	if (count == 0 || size == 0)
		verif = 0;
	ptr = malloc(verif);
	if (ptr)
	{
		ft_bzero(ptr, count * size);
		return (ptr);
	}
	else 
		return (NULL);
}
