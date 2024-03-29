/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef MYNNUSPSSQUAREFCN
#define MYNNUSPSSQUAREFCN

#include "RooAbsReal.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
 
class MyNnuSpsSquareFcn : public RooAbsReal {
public:
  MyNnuSpsSquareFcn() {} ; 
  MyNnuSpsSquareFcn(const char *name, const char *title,
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
  MyNnuSpsSquareFcn(const MyNnuSpsSquareFcn& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new MyNnuSpsSquareFcn(*this,newname); }
  inline virtual ~MyNnuSpsSquareFcn() { }

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

  ClassDef(MyNnuSpsSquareFcn,1) // Your description goes here...
};
 
#endif
