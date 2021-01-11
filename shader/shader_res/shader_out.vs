#version 330 core
layout (location = 0) in vec3 aPos;

out vec4 ourColor; // 向片段着色器输出一个颜色
void main()
{
    gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);
    ourColor = vec4(aPos.x, aPos.y, aPos.z, 1.0);
}
