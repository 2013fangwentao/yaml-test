/**
 * @file yaml-cpp.cpp
 * @author fwt (fangwentaowhu@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "yaml-cpp/yaml.h"
#include <iostream>
#include <string>
#include <vector>

#define options_key(x) #x

int main(int argc, char const *argv[])
{
    double camera_rate_hz;
    int max_points;
    std::string data_name;
    std::vector<int> image_size;
    std::vector<double> extri_R;

    std::string config_path = PROJECT_PATH;
    config_path.append("/config/test.yaml");

    YAML::Node configures = YAML::LoadFile(config_path);
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "Yaml Node:" << std::endl;
    std::cout << configures << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;

    camera_rate_hz = configures[options_key(camera_rate_hz)].as<decltype(camera_rate_hz)>();
    max_points = configures[options_key(max_points)].as<decltype(max_points)>();
    data_name = configures[options_key(data_name)].as<decltype(data_name)>();
    image_size = configures[options_key(image_size)].as<decltype(image_size)>();
    extri_R = configures[options_key(extri_R)].as<decltype(extri_R)>();

    std::cout << "config:" << std::endl;
    std::cout << "camera_rate_hz: " << camera_rate_hz << std::endl;
    std::cout << "max_points: " << max_points << std::endl;
    std::cout << "data_name: " << data_name << std::endl;
    std::cout << "image_size: [" << image_size[0] << "," << image_size[1] <<"]"<< std::endl;
    std::cout << "extri_R: " ;
    for (size_t i = 0; i < 9; i++)
    {
        std::cout << extri_R[i] << ",";
    }
    std::cout << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;

    return 0;
}
