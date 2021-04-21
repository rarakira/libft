/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:39:57 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 11:59:16 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  srcsize;

    srcsize = ft_strlen(src);
    if (dstsize == 0)
        return(srcsize);
    if (dstsize < srcsize)
    {
        printf("Dest is < than Src\n");
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = '\0';
    }
    else
    {
        printf("Dest is >= than Src\n");
        ft_memcpy(dst, src, srcsize - 1);
        dst[srcsize - 1] = '\0';
    }
    return (srcsize);
}