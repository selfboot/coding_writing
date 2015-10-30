#include <iostream>
#include <fstream>

int main()
{
    char text[] = "ABRACADABRA";
    short len = sizeof(text);
    std::ofstream outfile("data/binary_io.dat", std::ios::binary);
    if (!outfile)
    {
        std::cerr << "Open file error!" << std::endl;
        exit(-1);
    }
    for (int i = 0; i < len; i++){
        outfile.write((char*)&text[i], sizeof(text[i]));
    }
    outfile.close();
    return 0;
}
