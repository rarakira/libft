/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:43:01 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 16:21:32 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  srclen;
    size_t  dstlen;
    size_t  catlen;

    srclen = ft_strlen(src);
    dstlen = ft_strlen(dst);
    catlen = dstsize - dstlen;
    if (catlen > 1)
    {
        ft_memcpy(dst + dstlen, src, catlen - 1);
        dst[srclen + dstlen] = '\0';
    }
    return (srclen + dstlen);
}
