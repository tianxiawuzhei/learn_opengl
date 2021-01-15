/*
 变换学习：
 https://learnopengl-cn.github.io/01%20Getting%20started/07%20Transformations/
 
 */

#include <iostream>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

int main(int argc, const char * argv[]) {
    glm::vec4 vec(1.0f, 0.0f, 0.0f, 1.0f);
    
    glm::mat4 trans = glm::mat4(1.0f);
    trans = glm::translate(trans, glm::vec3(1.0f, 1.0f, 0.0f));
    
    vec = trans * vec;
    
    std::cout << vec.x << vec.y << vec.z << std::endl;
    
    return 0;
}
