#ifndef RANDOM_H
#define RANDOM_H

#include <cmath>
#include <iostream>
#include <vector>
#include <iterator>
#include <cstdlib>



	class Random
	{

	public:
		Random(){};
		virtual double get_value()=0;// return a realization of the random variable choosen
		virtual	std::vector<double> get_value (int d)=0;//  return a realization of the random vector choosen
		virtual double Unif(double a = 0.0, double b = 1.0)=0; // return a uniform random variable defined on [a,b]
		virtual std::vector<double> Normalstd_d(int d = 1)=0; // return a Standard Gaussian vector 
		virtual double Normal(double mu = 0, double sigma = 1)=0; // return a Gaussian with mean=mu, and variance = sigma
		virtual std::vector<double> Normaliid_d(int d, double mu=0, double sigma=1)=0;// return a Gaussian vector mean=mu*I_d, and variance = sigma*I_d
	};

#endif
