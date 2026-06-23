/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:09:19 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/23 11:11:52 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void	easyfind(T container, int n){
	typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw std::out_of_range("n not found");
    std::cout << *it << std::endl;
}	