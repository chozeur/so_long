/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:34:28 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/01 01:33:59 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dst, const void *src, int len)
{
	unsigned char	*tmp;
	unsigned char	*srctmp;

	tmp = (unsigned char *)dst;
	srctmp = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (srctmp < tmp)
	{
		while (len > 0)
		{
			len--;
			tmp[len] = srctmp[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	dst = tmp;
	return (dst);
}
