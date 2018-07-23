#ifdef  CAMERA_H
#define CAMERA_H
#endif //  CAMERA_H

#include<glad\glad.h>
#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<vector>

//define camera movement
enum Camera_Movement {
	FORWARD,
	BACKWARD,
	LEFT,
	RIGHT
};

//default camera values
const float YAW = -90.0f;
const float PITCH = 0.0f;
const float SPEED = 2.5f;
const float SENSITIVITY = 0.1f;
const float ZOOM = 45.0f;

//An abstract camera class that processes input and caculates the corresponding Euler Angles, Vector and Matrices for use in OGL
class Camera {
public:
	//camera attributes
	glm::vec3 Position;
	glm::vec3 Front;
	glm::vec3 Up;
	glm::vec3 Right;
	glm::vec3 WorldUp;

	//Euler Angles
	float YAW;
	float PITCH;
	//Camera Option
	float MovementSpeed;
	float MouseSensitivity;
	float Zoom;

	//constructor with vectors
	//Camera(glm::vec3 position = glm::vec3(0.0f,0.0f,0.0f), glm::vec3 up = )

	

};