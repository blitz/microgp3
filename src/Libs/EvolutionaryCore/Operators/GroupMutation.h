/***********************************************************************\
|                                                                       |
| GroupMutationOperator.h                                               |
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

#ifndef HEADER_UGP3_CORE_GROUPMUTATIONOPERATOR
#define HEADER_UGP3_CORE_GROUPMUTATIONOPERATOR

#include "GroupOperator.h"

namespace ugp3
{
	namespace core
	{
		class GroupMutationOperator : public GroupOperator
		{
		public:
			GroupMutationOperator();

			/** Gets the number of parents required by the operator.
				@return The number of parents required by the operator.*/
			virtual unsigned int getParentsCardinality() const;

                public: // Xml methods
                        virtual bool hasParameters() const = 0;
                        virtual void writeXml(ostream& output) const = 0;
                        virtual void readXml(const xml::Element& element) = 0;
		};
	}
}

#endif
