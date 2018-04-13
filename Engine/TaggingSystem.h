#pragma once
#include <string>



class Tag
{
public:
	Tag() = default;
	Tag(std::string string)
		:
		Tg(string)
	{}
	std::string Tg;
};