#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include "task.h"

using json = nlohmann::json;

int main(int argc, char* argv[]) {
    std::cout << "Welcome to your task manager!\n";
    std::cout << "===============================\n";
    std::cout << "Type any of the following to do an action: \n";
    std::cout << "Type 'exit' to leave\n";
    std::cout << "What do you want to do?\n";

    std::string input;
    std::cin >> input;

    if (input == "exit" || input == "Exit") {
        return 0;
    } else {
        if (input == "add" || "Add") {

        }
    }

    /*
    json j;

    
    std::ofstream file("tasks.json");
    file << j.dump(2);
    file.close();
    */
    // write data to json file
}