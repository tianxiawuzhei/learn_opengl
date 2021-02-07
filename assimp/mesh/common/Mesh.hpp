//
// https://learnopengl-cn.github.io/03%20Model%20Loading/02%20Mesh/
//
// https://learnopengl.com/code_viewer_gh.php?code=includes/learnopengl/mesh.h
//
//
//  Mesh.hpp
//

#ifndef Mesh_hpp
#define Mesh_hpp

#include <stdio.h>
#include <vector>

#include <Shader.hpp>

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

using namespace std;

struct Vertex {
    // position
    glm::vec3 Position;
    // normal
    glm::vec3 Normal;
    // texCoords
    glm::vec2 TexCoords;
    // tangent
    glm::vec3 Tangent;
    // bitangent
    glm::vec3 Bitangent;
};


struct Texture {
    unsigned int id;
    string type;
};

class Mesh {
    public:
        /*  网格数据  */
        vector<Vertex> vertices;
        vector<unsigned int> indices;
        vector<Texture> textures;
        /*  函数  */
        Mesh(vector<Vertex> vertices, vector<unsigned int> indices, vector<Texture> textures);
        void Draw(Shader &shader);
    private:
        /*  渲染数据  */
        unsigned int VAO, VBO, EBO;
        /*  函数  */
        void setupMesh();
};


#endif /* Mesh_hpp */
