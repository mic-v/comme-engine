// comme_engine.cpp : Defines the entry point for the application.
//

#include "comme_engine.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>

static void setupWindowHints()
{
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_TRUE);
}

int main()
{
	if (!glfwInit())
	{
		std::cout << "Test failed" << std::endl;
	}

	setupWindowHints();

	const int WIDTH = 1280;
	const int HEIGHT = 720;
	GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "test", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}


	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Could not initialize OpenGL!\n";
		return false;
	}

	while (!glfwWindowShouldClose(window))
	{

		glClearColor(0.2f, 0.3f, 0.4f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}


	std::cout << "Hello CMake." << std::endl;
	return 0;
}
