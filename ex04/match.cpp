/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:33:58 by agan              #+#    #+#             */
/*   Updated: 2024/03/20 11:33:59 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int open_io(char **argv, std::ifstream *infile, std::ofstream *outfile)
{
	infile->open(argv[1]);
	if (infile->fail())
	{
		std::cout << "Error opening file." << std::endl;
		return 1;
	}
	std::string outfile_name = argv[1];
	outfile_name.append(".replace");
	outfile->open(outfile_name.c_str());
	if (outfile->fail())
	{
		std::cout << "Error opening file." << std::endl;
		return 1;
	}
	return 0;
}

/* Open infile and outfile
Error handling for open errs
Get each line from infile -> look for sequences of s1
If s1 found, erase s1 and insert s2 
Loop till eof */
void match(char **argv)
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string buf;
	int pos;
	int s1_len;

	pos = 0;
	if (open_io(argv, &infile, &outfile))
		return;
	s1_len = std::string(argv[2]).length();
	while (!infile.eof())
	{
		getline(infile, buf);
		while (buf.find(argv[2]) != std::string::npos)
		{
			pos = buf.find(argv[2]);
			buf.erase(pos, s1_len);
			buf.insert(pos, argv[3]);
		}
		outfile << buf;
		if (!infile.eof())
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
}