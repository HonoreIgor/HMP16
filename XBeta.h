#ifndef XBETA_H
#define XBETA_H

#include <cmath>
#include <iostream>
#include <vector>
#include <iterator>
#include "Fonction.h"
#include <stdlib.h>



class XBeta : public Fonction
{
	protected:
		double m_beta;

	public:
		XBeta(){};
		XBeta(double beta): m_beta(beta) {};
		~XBeta(){};

		// value of f(x)
		 double get_value( double x);
		 double get_value( std::vector<double>  x);
		 double** get_value( double*  x, int d, int r);		
		 std::vector<double> get_value( std::vector<double>  x, int d);
		 std::vector<std::vector<double> > get_value( std::vector<double>  x, int d, int r);
		 std::vector<std::vector<double> > get_value( std::vector<double> & x, int d, int r);
		virtual double get_value( double *  x);
		virtual double * get_value( double *  x, int d);
		// value of \nabla f(x)
		std::vector<double> grad(std::vector<double> x);
		virtual double *grad(double * x);
		double grad(double x);
		// value of D2f(x) 
 		double laplacian(double x);
		std::vector<std::vector<double> > laplacian(std::vector<double>x);
		virtual double ** laplacian(double * x);
		// value of D3f(x)
		virtual double D3(double x);
		virtual double *** D3(double* x);
		// value of D4f(x)
		virtual double D4(double x);	
	
};

#endif

