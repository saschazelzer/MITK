#include "mitkMapper.h"
#include "mitkCSwigMacros.h"

#ifdef CABLE_CONFIGURATION

namespace _cable_
{
     const char* const group="Mapper";
     namespace wrappers
     {
         MITK_WRAP_OBJECT(Mapper)
     }
}

#endif

