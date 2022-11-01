#include <iostream>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <windows.h>
#include "Application.h"

void SetUpGLFW();
void Run();
void Draw();
void Update();
GLFWwindow* window;

void error_callback(int error, const char* description) {
	fputs(description, stderr);
}

void Application() {
	SetUpGLFW();

	glfwDestroyWindow(window);
	glfwTerminate();
}

void SetUpGLFW() {
	
	glfwSetErrorCallback(error_callback);

	if (!glfwInit()) {
		exit(EXIT_FAILURE);
		return;
	}

	window = glfwCreateWindow(640, 480, "Chat room", NULL, NULL);

	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
		return;
	}

	glfwMakeContextCurrent(window);

	glClearColor(255, 255, 255, 255);

}

void Run() {

	while (!glfwWindowShouldClose(window)) {

		if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
			glfwSetWindowShouldClose(window, true);

		int width, height;
		glfwGetFramebufferSize(window, &width, &height);
		glViewport(0, 0, width, height);

		Update();
		Draw();

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

}

void Draw() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

}

void Update() {

}