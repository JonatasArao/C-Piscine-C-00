/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:27:56 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/15 19:54:21 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	char_number;

	char_number = 97;
	while (char_number <= 122)
	{
		write(1, &char_number, 1);
		char_number = char_number + 1;
	}
}
