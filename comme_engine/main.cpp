// comme_engine.cpp : Defines the entry point for the application.
//

#include "comme_engine.h"
#include <imgui.h>
#include <imgui_impl_opengl3.h>
#include <imgui_impl_glfw.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>


static void setupWindowHints()
{
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_TRUE);
}

static void showMenuBar()
{
	ImGui::BeginMainMenuBar();
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
	glfwSwapInterval(1);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Could not initialize OpenGL!\n";
		return false;
	}

	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); (void)io;

	ImGui_ImplGlfw_InitForOpenGL(window, true);
	ImGui_ImplOpenGL3_Init("#version 150");

	float f = 0.0f;
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
		glClearColor(0.1f, 0.3f, 0.4f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		// Start the Dear ImGui frame
		ImGui_ImplOpenGL3_NewFrame();
		ImGui_ImplGlfw_NewFrame();
		ImGui::NewFrame();

		if (ImGui::BeginMainMenuBar())
		{
			if(ImGui::BeginMenu("File"))
			{
				ImGui::MenuItem("Exit");
				ImGui::EndMenu();
			}

		}
		ImGui::Separator();
		ImGui::EndMainMenuBar();


		ImGui::Begin("Hello, world!");
		ImGui::Text("This is some useful text.");
		ImGui::End();


		ImGui::Render();
		ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());


		glViewport(0, 0, WIDTH, HEIGHT);
		glfwSwapBuffers(window);

	}

	ImGui_ImplOpenGL3_Shutdown();
	ImGui_ImplGlfw_Shutdown();
	ImGui::DestroyContext();

	std::cout << "Hello CMake." << std::endl;
	return 0;
}
