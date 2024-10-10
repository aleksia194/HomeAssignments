/*     TASK_2 Babikov Aleksandr st135743@student.spbu.ru     */


#ifndef MYHEADER_H
#define MYHEADER_H

#include <fstream>
#include <filesystem>
#include <string>

size_t getFileSize(const std::string& filename);
void readFile(const std::string& filename, char* data, size_t size);
void reverseData(char* data, size_t size);
void writeFile(const std::string& filename, const char* data, size_t size);

#endif // MYHEADER_H

