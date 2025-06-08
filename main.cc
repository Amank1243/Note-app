#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include <cstdlib>


// Struct for holding data members related to task, and functions
struct Task {
    std::string description;
    int id = 1;
    std::string taskToJson() {
        return "  {\n id} ";
    
    }
};


int main(int argc, char* argv[]) {


    // CHANGE c strings into a string; Store general command line actions here
    std::string action = argv[1];
    std::string task = argv[2];

    // MOVED variables outside of IF add scope to make global variables
    std::fstream file{"tasks.json", std::ios::in | std::ios::out | std::ios::app};
    std::string line;
    int Id = 1;

    Task t;

    // NOTE: Instructions in the README.md file will explain how to use the program

    // IF commandline argument EQUALS "add", or "update", or "delete", run something
    if (action == "add") {

        // IF file is open, store task in it, else throw an error
        if (file.is_open()) {
            file  << task;
            file << '\n';
        } else {
            std::cerr << "Error: File failed to open";
        }

        // GET task ID
       
        // Reset the file cursor position, otherwise the while loop would start at the very end
        file.seekg(0, std::ios::beg);

        // WHILE going through every line in the json file, increment a counter. IF task equals line, display the increment counter(ID)
        while (std::getline(file, line)) {
            if (!file.is_open()) {
                std::cerr << "Error: File failed to open.";
                return 0;
            } else if (line == task) {
                break;
            }
            Id++;
        }

        
        // OUTPUT "Task added successfully " along with an ID number for the task
        std::cout << "Task added successfully (ID: " << Id << ")\n";

    } else if (action == "update") {
        // INIT command line argument to be a number, only for the action "UPDATE"

        // WHILE going through the

    } else if (action == "delete") {

    }
return 0;
}