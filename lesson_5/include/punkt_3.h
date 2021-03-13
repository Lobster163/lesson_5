#pragma once

#include <iostream>
#include <string>
using namespace std;

template<class T>
class StringValuePair : public Pair<std::string, T> 
{
	public:
		StringValuePair(std::string name, T a) : Pair<std::string, T>(name, a) {}
};