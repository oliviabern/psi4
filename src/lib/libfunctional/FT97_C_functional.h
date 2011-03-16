#ifndef FT97_C_functional_h
#define FT97_C_functional_h
/**********************************************************
* FT97_C_functional.h: declarations for FT97_C_functional for KS-DFT
* Robert Parrish, robparrish@gmail.com
* Autogenerated by MATLAB Script on 27-Oct-2010
*
***********************************************************/
#include "functional.h"

namespace psi { namespace functional {

class FT97_C_Functional : public Functional {
public:
    FT97_C_Functional(int npoints, int deriv);
    virtual ~FT97_C_Functional();
    virtual void computeRKSFunctional(boost::shared_ptr<Properties> prop);
    virtual void computeUKSFunctional(boost::shared_ptr<Properties> prop);
};
}}
#endif
