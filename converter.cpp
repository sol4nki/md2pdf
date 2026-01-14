#include <iostream>
#include <fstream>
#include <string>
// using namespace std;

constexpr uint32_t hash(const char* data, size_t const size) noexcept{
    uint32_t hash = 5381;

    for(const char* c = data; c < data + size; ++c)
        hash = ((hash << 5) + hash) + (unsigned char) *c;

    return hash;
}


int main(){
    
    std::ofstream file("./outputs/hi");
    std::string x = "hello world";

    std::cin >> x;

    // cpp doesnt support string switch cases
    // hence stackoverflow solution use hashing
    // source -> https://stackoverflow.com/questions/650162/why-cant-the-switch-statement-be-applied-to-strings
    switch ( hash(x.c_str(), x.size()) ){
        case hash("---",3):
            std::cout << "hi";
            break;

        case hash("#",1):
            std::cout << "hi";
            break;
        case hash("##",2):
            std::cout << "hi";
            break;
        case hash("###",3):
            std::cout << "hi";
            break;
        case hash("####",4):
            std::cout << "hi";
            break;
        // case _:
        //     std::cout << "hi";


    }

    file.close();

}
