/***********************************************************************\
|                                                                       |
| MOFitness.h                                                           |
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

#ifndef MOFITNESS_H_
#define MOFITNESS_H_

#include "ScaledFitness.h"

namespace ugp3
{
	namespace core
	{				
		class MOFitness : public ScaledFitness
		{		
		public:
			MOFitness();
			MOFitness(unsigned int parameterCount);
			virtual ~MOFitness() {};
			
		public: // IComparable<Fitness> interface
			virtual bool equals(const Fitness& fitness) const;
			virtual int compareTo(const Fitness& instance) const;
		};
	}
}

#endif /*MOFITNESS_H_*/
