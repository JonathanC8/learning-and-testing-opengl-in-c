#include <iostream>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <windows.h>
#include "Application.h"

void Application();

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Application();
	
	return 0;
}