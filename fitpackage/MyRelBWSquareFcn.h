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

#ifndef MYRELBWSQUAREFCN
#define MYRELBWSQUAREFCN

#include "RooAbsReal.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
 
class MyRelBWSquareFcn : public RooAbsReal {
public:
  MyRelBWSquareFcn() {} ; 
  MyRelBWSquareFcn(const char *name, const char *title,
	      RooAbsReal& _x,
	      RooAbsReal& _mass1,
	      RooAbsReal& _width1,
	      RooAbsReal& _L1,
	      RooAbsReal& _d1,
	      RooAbsReal& _coef1,
	      RooAbsReal& _phi1);
  MyRelBWSquareFcn(const MyRelBWSquareFcn& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new MyRelBWSquareFcn(*this,newname); }
  inline virtual ~MyRelBWSquareFcn() { }

protected:

  RooRealProxy x ;
  RooRealProxy mass1 ;
  RooRealProxy width1 ;
  RooRealProxy L1 ;
  RooRealProxy d1 ;
  RooRealProxy coef1 ;
  RooRealProxy phi1 ;
  
  Double_t evaluate() const ;

private:

  ClassDef(MyRelBWSquareFcn,1) // Your description goes here...
};

#endif
