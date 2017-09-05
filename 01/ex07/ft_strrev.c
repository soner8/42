/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdieng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 15:00:59 by mdieng            #+#    #+#             */
/*   Updated: 2017/09/05 15:33:43 by mdieng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char temp;
	int i;
	int lon;

	i = 0;
	lon = 0;
	while (str[lon])
	{
		lon++;
	}
	while (i < lon)
	{
		temp = str[lon];
		str[lon] = str[i];
		str[i] = temp;
		i++;
		lon--;
	}
	return (str);
}
