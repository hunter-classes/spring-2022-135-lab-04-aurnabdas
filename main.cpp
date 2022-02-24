#include <iostream>
#include "all.h"
#include <string>



int main()
{
    std::cout << "---------" << std::endl;
    std::cout << "box width 7 height 4" << std::endl;
    std::cout << box(7,4) << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << "checkerbaord width 11 height 6" << std::endl;
    std::cout << checkerboard(11,6) << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << "cross size 8 " << std::endl;
    std::cout << cross(8) << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << "lower lenght 6" << std::endl;
    std::cout << lower(6) << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << "upper length 5" << std::endl;
    std::cout << upper(5) << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << "upside down triangle width 12 height 5" << std::endl;
    std::cout << triangle(12,5) << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << "upside down triangle width 5 height 3" << std::endl;
    std::cout << triangle(5,3) << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << "upside down triangle width 12 height 7" << std::endl;
    std::cout << triangle(12,7) << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << "checkerboard 3x3 width 16 height 11" << std::endl;
    std::cout << checkerboard3x3(16,11) << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << "checkerboard 3x3 width 27 height 27" << std::endl;
    std::cout << checkerboard3x3(27,27) << std::endl;



}