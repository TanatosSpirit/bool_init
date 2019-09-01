#include <iostream>
#include "pure_class.h"


int main()
{
    bool init;
    
    std::cout  << "If just create bool variable" <<   std::endl;
   
    if (!init)
    {
        std::cout  << "This is intel x86" <<   std::endl;
    }
    else
    {
        std::cout  << "This is aarch64" <<   std::endl;
    }

    std::cout  << "But if create instance of class" <<   std::endl;

    pure_class pc;
    
    pc.output();
    
    std::cout  << "if you didn’t see the difference, you have intell x86, else you have aarch64" <<   std::endl;

    return 0;

}
