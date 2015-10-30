# include <iostream>
# include <fstream>

int main()
{
    std::ifstream infile("data/binary_io.dat", std::ios::binary);

    if (!infile)
    {
        std::cerr << "Open file error!" << std::endl;
        exit(-1);
    }

    unsigned char number;
    while (infile.read((char*)&number, 1)) {
        std::cout << number;
    }
    infile.close();
}
