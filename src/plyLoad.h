//#pragma once
//
//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <vector>
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//
//struct Vertex {
//    float x, y, z;
//};
//
//std::vector<Vertex> vertices;
//std::vector<unsigned int> indices;
//
//void loadPLY(const char* filePath) {
//    std::ifstream file(filePath);
//    std::string line;
//
//    // Read header
//    while (std::getline(file, line)) {
//        if (line.find("element vertex") != std::string::npos) {
//            int vertexCount;
//            std::istringstream(line) >> line >> line >> vertexCount;
//            vertices.resize(vertexCount);
//        }
//        else if (line.find("element face") != std::string::npos) {
//            int faceCount;
//            std::istringstream(line) >> line >> line >> faceCount;
//            indices.reserve(faceCount * 3); // Assuming triangles
//            break; // Done with header
//        }
//    }
//
//    // Read vertices
//    for (int i = 0; i < vertices.size(); ++i) {
//        std::getline(file, line);
//        std::istringstream(line) >> vertices[i].x >> vertices[i].y >> vertices[i].z;
//    }
//
//    // Read faces
//    while (std::getline(file, line)) {
//        if (line.find("end_header") != std::string::npos)
//            break; // Done with faces
//    }
//
//    while (std::getline(file, line)) {
//        std::istringstream faceStream(line);
//        int faceSize;
//        faceStream >> faceSize;
//
//        if (faceSize == 3) { // Assuming triangles
//            unsigned int v1, v2, v3;
//            faceStream >> v1 >> v2 >> v3;
//            indices.push_back(v1);
//            indices.push_back(v2);
//            indices.push_back(v3);
//        }
//        else {
//            // Handle non-triangle faces if needed
//        }
//    }
//}