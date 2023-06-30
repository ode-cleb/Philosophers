/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-cleb <ode-cleb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:07:27 by ode-cleb          #+#    #+#             */
/*   Updated: 2023/06/30 14:11:27 by ode-cleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int handling_errors(int argc, char **argv)
{
    if (argc  != 6 && argc != 5)
	{
		printf("Too much or not enough arguments\n");
		return (0);
	}
	if (check_numbers(argv) == 0)
	{
		printf("wrongs caracters\n");
		return 0;
	}
    return (1);
}