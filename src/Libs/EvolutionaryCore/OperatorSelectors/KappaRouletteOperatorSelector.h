/***********************************************************************\
|                                                                       |
| KappaRouletteOperatorSelector.h |
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

/**
 * @file KappaRouletteOperatorSelector.h
 * 
 * A sophisticated blend of DMAB and roulette wheel, with subtle hints 
 * of randomness and a well-balanced meta-parameter Kappa.
 */

#ifndef HEADER_UGP3_CORE_KAPPAROULETTEOPERATORSELECTOR
#define HEADER_UGP3_CORE_KAPPAROULETTEOPERATORSELECTOR

#include <DMABOperatorSelector.h>

namespace ugp3 {
namespace core {

class KappaRouletteOperatorSelector : public DMABOperatorSelector
{
private:
    /**
     * Kappa = 0 → random
     * Kappa = 1 → roulette on DMAB scores
     * Kappa = inf → UCB1 DMAB
     */
    double kappa = 15;
    
protected:
    virtual Result selectWithMAB() const override;
    
public:
    KappaRouletteOperatorSelector(Statistics& stats);
    virtual ~KappaRouletteOperatorSelector() {}
    
    static const std::string XML_NAME;
    static const std::string XML_CHILD_ELEMENT_KAPPA;
    static const std::string XML_ATTRIBUTE_VALUE;
    
    virtual const std::string& getXmlName() const { return XML_NAME; }
    virtual void readXml(const xml::Element& element);
    virtual void writeInnerXml(std::ostream& output) const;
};
}
}

#endif // HEADER_UGP3_CORE_KAPPAROULETTEOPERATORSELECTOR
