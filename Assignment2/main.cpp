/*     TASK_2 Babikov Aleksandr st135743@student.spbu.ru     */


#include <iostream>
#include "myheader.h"

int main() {
    std::string inputFilename = "text.txt";
    std::string outputFilename = "temptext.txt";
    
    size_t fileSize = getFileSize(inputFilename);
    char* data = new char[fileSize];

    std::cout << fileSize << "b file size" << std::endl;

    readFile(inputFilename, data, fileSize);
    reverseData(data, fileSize);

    fileSize = getFileSize(inputFilename);
    std::cout << fileSize << "b file size" << std::endl;

    writeFile(outputFilename, data, fileSize);

    delete[] data;
    return 0;
}

