// openGL.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <Windows.h>
#include <GL/glut.h>

using namespace std;

#define WINDOW_HEIGHT 300
#define WINDOW_WIDTH 500

GLfloat G_fDistance = 3.6f;
GLfloat G_fAngle_horizen = 0.0f;
GLfloat G_fAngle_vertical = 0.0f;

void myInit(void);
void myReShape(GLsizei w,GLsizei h);
void display(void);

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	//显示模块初始化
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	//定义窗口大小
	glutInitWindowSize(300, 300);

	//定义窗口位置
	glutInitWindowPosition(100, 100);

	//创建窗口
	glutCreateWindow("openGL");

	const char* version = (const char*)glGetString(GL_VERSION);
	cout << "openGL version: " << version << endl;



	//进入GLUT事件处理循环，无限循环
	glutMainLoop();
	return 0;
}