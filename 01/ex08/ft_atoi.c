/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdieng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 17:47:32 by mdieng            #+#    #+#             */
/*   Updated: 2017/09/05 23:00:07 by mdieng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_atoi(char *str)
{
	int i;
	int neg;
	int nbr;
	i = 0;
	nbr = 0;
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == 45)
		neg = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while(str[i] >= 48 && str[i] <= 57)
	{
		nbr = nbr * 10;
		nbr = nbr + (int)str[i] - 48;
		i++;
	}
	if (neg == 1)
		return (-nbr);
	else
		return (nbr);
}
int main()
{
	int val;
	char str[20];

	strcpy(str, "45dfs56 87");
	val = ft_atoi(str);
	printf("String Value = %s, int value = %d\n", str, val);

	return(0);
}      
