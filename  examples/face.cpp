#include "tivflib.hpp"
#include <iostream>

main() {
    tivf_img img;
    img.set_data("DRRRRRRRDNRRDRRDRRRNRRRRRRRRRNDRRRRRRRD");

    std::cout << "full image:\n";
    img.view_data("full");
    std::cout << "\n\nraw data:\n";
    img.view_data("raw");
}
