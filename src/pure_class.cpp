#include "pure_class.h"

pure_class::pure_class()
{

}

void pure_class::output()
{

    if (!is_init)
    {
      std::cout  << "This is intel x86" <<   std::endl;
    }
    else
    {
        std::cout  << "This is aarch64" <<   std::endl;
    }
    
}