MicroGP v3
==========

[![License: GPL](https://img.shields.io/badge/license-gpl--3.0-green.svg)](https://opensource.org/licenses/GPL-3.0)
![Language: C++](https://img.shields.io/badge/language-C++-blue.svg)
![](https://www.google-analytics.com/collect?v=1&t=pageview&tid=UA-28094298-5&uid=666&dp=squillero%2Fugp3)

MicroGP (µGP, `&micro;GP`) is a versatile optimizer able to outperform both human experts and conventional heuristics in finding the optimal solution of hard problems. Given a task, it first fosters a set of random solutions, then iteratively refines and enhances them. Its heuristic algorithm uses the result of the evaluations, together with other internal information, to efficiently explore the search space, and eventually to produce the optimal solution. MicroGP has been devised in [2002](https://github.com/squillero/microgp2), and subsequently developed thanks to the effort of [several people](CONTRIBUTORS.md).

MicroGP original application was the creation of assembly-language programs for testing different microprocessors, hence the Greek letter micro in its name. Afterward, it has been used on a wider range of problems, such as: creation of test programs for pre- and post-silicon validation; design of bayesian networks; creation of mathematical functions represented as trees; integer and combinatorial optimization; real-value parameter optimization; and even creation of corewar warriors.

MicroGP is an evolutionary algorithm, hence the acronym GP (genetic programming) in its name. A population of different solutions is considered in each step of the search process, and new individuals are generated through mechanisms that ape both sexual and asexual reproduction. New solutions inherit distinctive traits from existing ones, and may coalesce the good characteristics of different parents. Better solutions have a greater chance to reproduce and to succeed in the simulated struggle for existence.

This is MicroGP version 3, also known as MicroGP³, MicroGP^3, ugp3 (due to typographic limitations) and MicroGP++ (being written in
C++). 

**Copyright © 2006-2016 Giovanni Squillero.**

MicroGP v3 is free software: you can redistribute it and/or modify it under the terms of the [GNU General Public License](http://www.gnu.org/licenses/) as published by the *Free Software Foundation*, either [version 3](https://opensource.org/licenses/GPL-3.0) of the License, or (at your option) any later version.
