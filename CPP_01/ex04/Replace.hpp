/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:00:44 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/26 12:12:00 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Replace
{
	private:
		int				canOpenFile;
		std::string 	name;
		std::string		fileContent;
		std::ifstream	fileReceive;
		std::string		newContent;
		
	public:
		int 	fileCanOpen();
		size_t	sherchS1(std::string &file, std::string s1);
		void 	ChangeString(std::string s1, std::string s2, size_t pos);
		void	replaceByS2(std::string s1, std::string s2);
		void	createFile();

		Replace(char *argv);
		~Replace();
};

#endif
