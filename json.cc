#include <string>


// Struct for holding data members related to task, and functions
struct Task {
    std::string description;
    int id = 1; // How would we use this to track a task?

    std::string addToJson(std::string task) { // Store task to json file
        return "\n {\"task\": \"" +  task +  
        "\", \"id\": " + std::to_string(id) + ", }\n";
    }
};
