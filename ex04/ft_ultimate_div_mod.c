/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:10:45 by hwong             #+#    #+#             */
/*   Updated: 2022/08/23 13:53:47 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_temp;
	int	mod_temp;

	div_temp = *a / *b;
	mod_temp = *a % *b;
	*a = div_temp;
	*b = mod_temp;
}

/*
int main(void)
{
	int i = 10;
	int j = 3;

	ft_ultimate_div_mod(&i, &j);
}
*/