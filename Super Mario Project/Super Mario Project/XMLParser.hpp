////////////////////////////////////////////////////////////////////////
// XMLParser.hpp
// Super Mario Project
// Copyright (C) 2011  
// Lionel Joseph lionel.r.joseph@gmail.com
// Olivier Guittonneau openmengine@gmail.com
////////////////////////////////////////////////////////////////////////

#pragma once
#ifndef HPP_XMLPARSER
#define HPP_XMLPARSER

#include <iostream>

namespace smp
{
	typedef struct
	{
		void* ctxt;
	} XMLParserContext;

	class XMLParser
	{
	public :
		virtual ~XMLParser() = 0;

	protected :
		int validateSchema(const char * XMLSchemaFile_shorterNamename, const char * XMLfile_shorterNamename);
		int convertHexToInt(const char* hexa);
	};
}
#endif
