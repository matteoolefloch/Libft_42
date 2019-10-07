/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 07:13:20 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/08 00:53:57 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dsize)
{
	const char *tmp_src = src;
	size_t tmp_size = dsize;

	if (tmp_size != 0) {
		while (--tmp_size != 0) {
			if ((*dst++ = *src++) == '\0')
				break;
		}
	}

	if (tmp_size == 0) {
		if (dsize != 0)
			*dst = '\0';
		while (*src++)
			;
	}

	return(src - tmp_src - 1);
}
