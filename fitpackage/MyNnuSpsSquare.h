/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef MYNNUSPSSQUARE
#define MYNNUSPSSQUARE

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
 
class MyNnuSpsSquare : public RooAbsPdf {
public:
  MyNnuSpsSquare() {} ; 
  MyNnuSpsSquare(const char *name, const char *title,
	      RooAbsReal& _x,
	      RooAbsReal& _mth,
	      RooAbsReal& _a,
	      RooAbsReal& _p0,
	      RooAbsReal& _p1,
	      RooAbsReal& _p2,
	      RooAbsReal& _p3,
	      RooAbsReal& _p4,
	      RooAbsReal& _coef,
	      RooAbsReal& _phi);
  MyNnuSpsSquare(const MyNnuSpsSquare& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new MyNnuSpsSquare(*this,newname); }
  inline virtual ~MyNnuSpsSquare() { }

protected:

  RooRealProxy x ;
  RooRealProxy mth ;
  RooRealProxy a ;
  RooRealProxy p0 ;
  RooRealProxy p1 ;
  RooRealProxy p2 ;
  RooRealProxy p3 ;
  RooRealProxy p4 ;
  RooRealProxy coef ;
  RooRealProxy phi ;
  
  Double_t evaluate() const ;

private:

  ClassDef(MyNnuSpsSquare,1) // Your description goes here...
};
 
#endif
