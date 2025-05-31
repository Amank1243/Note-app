#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[]) {

    // creat e filesystem
    std::fstream file;

    // turn c string into a string

    std::string arg1 = argv[1];

    // Instructions in the README.md file will explain how to use the program

    // If commandline argument EQUALS "add", or "update", or "delete", run something
    if (arg1 == "add") {
        file.open("tasks.json");
        file << argv[1];
        std::cout << "adding\n";
    } else if (arg1 == "update") {

    } else if (arg1 == "delete") {

    }

}