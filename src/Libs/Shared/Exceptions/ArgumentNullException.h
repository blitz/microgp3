/***********************************************************************\
|                                                                       |
| Exceptions/ArgumentNullException.h                                    |
|                                                                       |
| This file is part of MicroGP v3 (ugp3)                                |
| https://github.com/squillero/microgp3                                 |
|                                                                       |
| Copyright (c) 2006-2016 Giovanni Squillero                            |
|                                                                       |
|-----------------------------------------------------------------------|
|                                                                       |
| This program is free software; you can redistribute it and/or modify  |
| it under the terms of the GNU General Public License as published by  |
| the Free Software Foundation, either version 3 of the License, or (at |
| your option) any later version.                                       |
|                                                                       |
| This program is distributed in the hope that it will be useful, but   |
| WITHOUT ANY WARRANTY; without even the implied warranty of            |
| MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU      |
| General Public License for more details                               |
|                                                                       |
|***********************************************************************'
| $Revision: 644 $
| $Date: 2015-02-23 14:50:30 +0100 (Mon, 23 Feb 2015) $
\***********************************************************************/

#ifndef HEADER_UGP3_ARGUMENTNULLEXCEPTION
#define HEADER_UGP3_ARGUMENTNULLEXCEPTION

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "ArgumentException.h"

namespace ugp3
{
    /** An exception to be thrown when a method parameter is null. */
	class ArgumentNullException : public ArgumentException
	{
	public:
		ArgumentNullException(const ArgumentNullException & e);
		explicit ArgumentNullException(
			const std::string& argumentName,
			const std::string& file,
			const std::string& method,
			const unsigned int line);
	};
}

namespace ugp3
{
	inline ArgumentNullException::ArgumentNullException(const ArgumentNullException & e)
	: ArgumentException(e.message, e.file, e.method, e.line)
	{ }

	inline ArgumentNullException::ArgumentNullException(
		const std::string& argumentName, 
		const std::string& file, 
		const std::string& method, 
		const unsigned int line
		)
		: ArgumentException(argumentName.empty()? "A null argument was passed to the method." : "The argument \"" + argumentName + "\" must not be null.", file, method, line)
	{ }
}

#endif
