//
//  Shader.hpp
//
//  Created by staff on 2021/1/11.
//  Copyright © 2021 zyq_opengl_exercise. All rights reserved.
//  https://learnopengl-cn.github.io/01%20Getting%20started/05%20Shaders/
//  公用着色器类
//

#ifndef Shader_hpp
#define Shader_hpp

#include <stdio.h>
#include <glad/glad.h> // 包含glad来获取所有的必须OpenGL头文件

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
    // 程序ID
    unsigned int ID;

    // 构造器读取并构建着色器
    Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
    // 使用/激活程序
    void use();
    
    // uniform工具函数
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
    void setVec2(const std::string &name, const glm::vec2 &value) const;
    void setVec2(const std::string &name, float x, float y) const;
      // ------------------------------------------------------------------------
    void setVec3(const std::string &name, const glm::vec3 &value) const;
    void setVec3(const std::string &name, float x, float y, float z) const;
      // ------------------------------------------------------------------------
    void setVec4(const std::string &name, const glm::vec4 &value) const;
    void setVec4(const std::string &name, float x, float y, float z, float w);
      // ------------------------------------------------------------------------
    void setMat2(const std::string &name, const glm::mat2 &mat) const;
      // ------------------------------------------------------------------------
    void setMat3(const std::string &name, const glm::mat3 &mat) const;
      // ------------------------------------------------------------------------
    void setMat4(const std::string &name, const glm::mat4 &mat) const;
    
    void setMatrix4fv(const std::string &name, const GLfloat *value) const;
    
private:
    // utility function for checking shader compilation/linking errors.
    void checkCompileErrors(unsigned int shader, std::string type);
};


#endif /* Shader_hpp */