#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

int main(int argc, char* argv[]) {


    // CHANGE c strings into a string

    std::string action = argv[1];
    std::string task = argv[2];

    // NOTE: Instructions in the README.md file will explain how to use the program

    // IF commandline argument EQUALS "add", or "update", or "delete", run something
    if (action == "add") {
        // Create an input stream to a json file
        std::fstream file{"tasks.json", std::ios::in | std::ios::out | std::ios::app};

        // IF file is open, store task in it, else throw an error
        if (file.is_open()) {
            file << task;
            file << "\n";
        } else {
            std::cerr << "Error: File failed to open";
        }

        // GET task ID
        int lines = 1;
        std::string line;
        // Reset the file cursor position, otherwise the while loop would start at the very end
        file.seekg(0, std::ios::beg);
        while (std::getline(file, line)) {
            if (!file.is_open()) {
                std::cerr << "Error: File failed to open.";
                return 0;
            } else if (line == task) {
                break;
            }
            lines++;
        }
        // WHILE going through every line in the json file, increment a counter. IF task equals line, display the increment counter(ID)
        
        // OUTPUT "Task added successfully " along with an ID number for the task
        std::cout << "Task added successfully (ID: " << lines << ")\n";

    } else if (action == "update") {

    } else if (action == "delete") {

    }
return 0;
}