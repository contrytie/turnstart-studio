//
// Created by contrarytie on 25-5-17.
//
#include "SetFiles.h"
void SetFiles::setFileName() {
    std::string relativePath = "./config.txt"; // Relative path to a file in the same directory
    std::ifstream inputFile(relativePath);
    if (inputFile.is_open()) {
        std::string command = "nano "+relativePath;
        int status = system(command.c_str());
        if (status == -1) {
            std::cout<<"ERROR:failed to run the command"<<std::endl;
            return;
        }
        inputFile.close();
        return;
    }
    else {
        std::cout << "Unable to open file: " << relativePath << std::endl;
    }
}

int SetFiles::setFileName(std::string fileName) {
    std::string relativePath = "./VirtualMap.txt"; // Relative path to a file in the same directory
    std::ifstream inputFile(relativePath);
    if (inputFile.is_open()) {
        std::string command = "nano "+relativePath;
        int status = system(command.c_str());
        if (status == -1) {
            std::cout<<"ERROR:failed to run the command"<<std::endl;
        }
        inputFile.close();
        return 0;
    }
    else {
        std::cout << "Unable to open file: " << relativePath << std::endl;
        return 1;
    }
    return 0;
}