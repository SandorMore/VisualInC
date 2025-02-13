#include <stdio.h>
#include <GLFW/glfw3.h>

int main(){
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(1280, 720, "Main", NULL, NULL);
    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window)){
        
    }
   
   glfwDestroyWindow(window);
    return 0;
}