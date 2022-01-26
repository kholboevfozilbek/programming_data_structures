

#include <iostream>
#include <vector>


int main()
{
    std::cout << std::endl;
    std::vector<int> uni(10);

    for (int i=0; i<uni.size(); ++i)
    {
        uni.at(i) = i;
    }

    std::cout << "Our vector:  ";
    for(int i=0; i<uni.size(); ++i)
        std::cout << uni.at(i) << "  ";

    uni.front() = 4;

    std::cout << "\n\nOur vector:  ";
    for(int i=0; i<uni.size(); ++i)
        std::cout << uni.at(i) << "  ";
    puts("\n\n");
    return 0;
}

