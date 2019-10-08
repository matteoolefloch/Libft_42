/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 01:44:55 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/08 01:46:25 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int main(int argc, char const *argv[]) {
	int tt = 32;

	printf("%d\n", isprint(tt));
	printf("%d\n", ft_isprint(tt));
	return 0;
}
