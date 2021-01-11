#version 330 core
layout (location = 0) in vec3 aPos;

uniform float off;
void main()
{
    gl_Position = vec4(aPos.x+off, aPos.y, aPos.z, 1.0);
}
