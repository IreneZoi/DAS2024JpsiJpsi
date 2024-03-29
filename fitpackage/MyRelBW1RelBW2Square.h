/*
* Author: Jingqing Zhang, jingqing@cern.ch
* Functions for the fit package 
* with/without interference between resonances (and SPS)
*/
/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef MYRELBW1RELBW2SQUARE
#define MYRELBW1RELBW2SQUARE

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
 
class MyRelBW1RelBW2Square : public RooAbsPdf {
public:
  MyRelBW1RelBW2Square() {} ; 
  MyRelBW1RelBW2Square(const char *name, const char *title,
	      RooAbsReal& _x,
	      RooAbsReal& _mass1,
	      RooAbsReal& _width1,
	      RooAbsReal& _L1,
	      RooAbsReal& _d1,
	      RooAbsReal& _coef1,
	      RooAbsReal& _phi1,
	      RooAbsReal& _mass2,
	      RooAbsReal& _width2,
	      RooAbsReal& _L2,
	      RooAbsReal& _d2,
	      RooAbsReal& _coef2,
	      RooAbsReal& _phi2);
  MyRelBW1RelBW2Square(const MyRelBW1RelBW2Square& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new MyRelBW1RelBW2Square(*this,newname); }
  inline virtual ~MyRelBW1RelBW2Square() { }

protected:

  RooRealProxy x ;
  RooRealProxy mass1 ;
  RooRealProxy width1 ;
  RooRealProxy L1 ;
  RooRealProxy d1 ;
  RooRealProxy coef1 ;
  RooRealProxy phi1 ;
  RooRealProxy mass2 ;
  RooRealProxy width2 ;
  RooRealProxy L2 ;
  RooRealProxy d2 ;
  RooRealProxy coef2 ;
  RooRealProxy phi2 ;
  
  Double_t evaluate() const ;

private:

  ClassDef(MyRelBW1RelBW2Square,1) // Your description goes here...
};
 
double Q2(double sa, double sb, double sc);
double BlattWeisskopf(double q2, double d, double L);
#endif
