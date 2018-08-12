#ifndef MESH_H
#define MESH_H

#include<glad/glad.h>
#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<selfDefine/shader.h>

#include<string>
#include<fstream>
#include<sstream>
#include<iostream>
#include<vector>
using namespace std;

struct Vertex {
	//position
	glm::vec3 Position;
	//normal
	glm::vec3 Normal;
	glm::vec2 TexCoords;
	//tangent
	glm::vec3 Tangent;
	//bitangent
	glm::vec3 Bitangent;
};

struct Texture {
	unsigned int id;
	string type;
	string path;
};

class Mesh {
public:
	/*Mesh Data*/
};
#endif // !MESH_H
