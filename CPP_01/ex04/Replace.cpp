/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:01:28 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/13 18:38:21 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int 	Replace::fileCanOpen()
{
	if (canOpenFile == 1)
		return (1);
	else 
		return (0);
}

size_t	Replace::sherchS1(std::string &file, std::string s1)
{
	size_t buffer = file.find(s1);
	return (buffer);
}

void	Replace::replaceByS2(std::string s1, std::string s2)
{
	size_t	pos = sherchS1(fileContent, s1);
	while (pos != std::string::npos)
	{
		fileContent.replace(pos, s1.length(), s2);
		pos = fileContent.find(s1, pos + s2.length());
	}
	createFile();
}

void	Replace::createFile()
{
	std::ofstream	newFile((name + ".replace").c_str());
	newFile << fileContent;
}

Replace::Replace(char *argv)
{
	canOpenFile = 1;
	fileReceive.open(argv);
	if (!fileReceive)
	{
		std::cout << "Error can't open file";
		canOpenFile = 0;
	}
	name = (argv);
	std::stringstream buffer;
	buffer << fileReceive.rdbuf();
	fileContent = buffer.str();
}

Replace::~Replace()
{
}