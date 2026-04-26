/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:01:28 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/26 12:17:35 by panne-ro         ###   ########.fr       */
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
	if (s1 == "")
		return std::string::npos;
	size_t buffer = file.find(s1);
	return (buffer);
}

void 	Replace::ChangeString(std::string s1, std::string s2, size_t pos)
{
		fileContent.erase(pos, s1.length());
		fileContent.insert(pos, s2);
} 

void	Replace::replaceByS2(std::string s1, std::string s2)
{
	size_t	pos = sherchS1(fileContent, s1);
	while (pos != std::string::npos)
	{
		ChangeString(s1, s2, pos);
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