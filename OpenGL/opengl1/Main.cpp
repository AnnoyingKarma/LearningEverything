#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

void framebuffer_size_callback(GLFWwindow* window,int height, int width);
void processInput(GLFWwindow* window);

int main() {
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	GLFWwindow* window = glfwCreateWindow(800,600,"My First Window",NULL,NULL);

	if (window == NULL) {
		{
			std::cout << "Failed to create window" << std::endl;
			glfwTerminate();
			return -1;
		}
	}
	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		std::cout << "Failed to initialize glad" << std::endl;
		return -1;
	}
	
	glViewport(0,0,800,600);

	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
	
	while (!glfwWindowShouldClose(window)) {
		//input
		processInput(window);
		
		//rendering commands
		glClearColor(0.2f,0.2f,0.3f,1.0f);
		glClear(GL_COLOR_BUFFER_BIT);


		//check and call events and swap buffer
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
}

void framebuffer_size_callback(GLFWwindow* window, int height, int width) {
	glViewport(0,0,width,height);
}

void processInput(GLFWwindow* window) {
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
		glfwSetWindowShouldClose(window,true);
	}
}