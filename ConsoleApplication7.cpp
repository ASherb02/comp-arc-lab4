#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    std::string directory_path = "C:/Users/Admin/Desktop/New Folder"; 
    uintmax_t total_size = 0;

    for (const auto& file : fs::recursive_directory_iterator(directory_path)) {
        if (fs::is_regular_file(file)) {
            total_size += fs::file_size(file);
        }
    }

    std::cout << "Total size of files in directory: " << total_size/1024<< " kilobytes" << std::endl;

    return 0;
}

