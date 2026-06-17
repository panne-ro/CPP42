/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:15:39 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 10:21:01 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data;

    Data *originalPtr = &data;

    uintptr_t raw = Serializer::serialize(originalPtr);

    Data *deserializedPtr = Serializer::deserialize(raw);

    std::cout << "Original pointer     : "
              << originalPtr << std::endl;

    std::cout << "Serialized uintptr_t : "
              << raw << std::endl;

    std::cout << "Deserialized pointer : "
              << deserializedPtr << std::endl;

    std::cout << std::endl;

    if (originalPtr == deserializedPtr)
        std::cout << "SUCCESS: pointers are identical"
                  << std::endl;
    else
        std::cout << "ERROR: pointers differ"
                  << std::endl;

    std::cout << std::endl;

    std::cout << "Data contents:" << std::endl;
    std::cout << "id    = " << deserializedPtr->GetID() << std::endl;
    std::cout << "value = " << deserializedPtr->GetValue() << std::endl;

    return 0;
}
