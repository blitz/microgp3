MO-ZDT2
-------
This sample is designed to show how ugp3 can also tackle multi-objective problems. ZDT2 is a classical benchmark for multi-objective optimization, being a set of two objective functions to be minimized:

f1 = x1
f2 = (1 + 9 * (sum_{i=2}^{n} x_i) / (n-1)) * (1 - (x1/(1 + 9 * (sum_{i=2}^{n} x_i) / (n-1)) ))^2

where n is the dimension of the problem, and x1...xn are the variables of a candidate solution. Every individual is thus a vector of floating-point numbers, in the interval [0,1]. In this example, we are evaluating the functions with dimensionality 30 (e.g. 30 variables). It is important to notice that it's impossible to minimize both equations at the same time; instead, ugp3 will try to find a Pareto front of non-comparable solutions, spread evenly as much as possible close to the "true" Pareto front of ZDT2, function x2 = 1 - x1**2 

The test function is quite complex, and ugp3 might take a few minutes to converge. For more information on ZDT2 and other multi-objective test functions, see Chase, Rademacher and Goodman, "A Benchmark Study of Multi-Objective Optimization Methods" ().

Files in this folder
--------------------
cleanup.sh			# simple script that removes all files generated by ugp3, leaving the bare minimum needed to run the sample
launch.sh			# script that compiles the evaluator, launches ugp3 and then calls the plot-results.py script
plot-results.py			# Python script that plots the results against the theoretical Pareto front
README.txt			# this file :-D
ugp3.settings.xml		# general settings for ugp3
zdt2.constraints.xml		# constraints for this sample
zdt2.cpp			# evaluator (C++)
zdt2.population.settings.xml	# population settings for ugp3

Running MO-ZDT2
---------------
If you are under Unix and you have both the g++ compiler and ugp3 installed, you just need to run "./launch.sh" inside this folder. Otherwise, you first need to compile "zdt2.cpp" into an executable named "zdt2", and then launch ugp3 inside this folder.
