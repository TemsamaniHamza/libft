/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:11:14 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 12:11:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void *ft_memmove(void *dest, const void *src, size_t n){
    size_t i = 0;
    size_t j = n - 1;
    unsigned char *src_start = (char *)src;
    unsigned char *src_end = src_start + n;
    unsigned char *dest_start = dest;
    unsigned char *dest_end = dest_start + n;


    if ((src_start >= dest_start && src_start < dest_end) || 
    (src_end >= dest_start && src_end < dest_end)){
        while (i < n && j > 0){
            dest_start[i] = src_start[j];
            i++;
            j--;
        }
    }
    else 
    {
        while (i < n){
            dest_start[i] = src_start[i];
            i++;
        }
    }
    return (dest_start);
}
 */
void *ft_memmove(void *dest, const void *src, size_t n){
    char *d = dest;
    const char *s = src;
    size_t i = 0;

    if (d<s) {
        while (i < n){
            d[i] = s[i];
            i++;
        }
    } else if (d>s) {
        i = n;
        while (i > 0){
            d[i-1] = s[i-1];
            i--;
        }
    }
    return dest;
}
/* int main()
{
    char *src = "hellosworld!";
    char dest[10];
    size_t n = 6;
    ft_memmove(dest,src,n);
    printf("%s\n", dest);
} */