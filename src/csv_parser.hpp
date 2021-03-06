#pragma once

#include <fstream>
#include <vector>
#include <boost/noncopyable.hpp>

namespace vakkenranking
{
	class csv_parser : private boost::noncopyable
	{
		size_t linenr = 0;
		std::ifstream s;
	public:
		csv_parser(const std::string& filename);
		
		bool read(std::vector<std::string>& result);
	};
}
