/*     TASK_2 Babikov Aleksandr st135743@student.spbu.ru     */


#include "myheader.h"

size_t getFileSize(const std::string& filename) {
    return std::filesystem::file_size(filename);
}

void readFile(const std::string& filename, char* data, size_t size) {
    std::ifstream input_file(filename, std::ios::binary);
    if (input_file) {
        input_file.read(data, size);
        input_file.close();
    }
}

void reverseData(char* data, size_t size) {
    for (size_t i = 0; i < size / 2; ++i) {
        std::swap(data[i], data[size - i - 1]);
    }
}

void writeFile(const std::string& filename, const char* data, size_t size) {
    std::ofstream output_file(filename, std::ios::binary);
    if (output_file) {
        output_file.write(data, size);
        output_file.close();
    }
}

