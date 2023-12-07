/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:37:24 by lraggio           #+#    #+#             */
/*   Updated: 2023/10/12 19:42:21 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	value;

	printf("Digite um número inteiro: ");
	scanf("%d", &value);
	printf("%d", ABS(value));
}
