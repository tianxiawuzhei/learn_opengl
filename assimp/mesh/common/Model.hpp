//
// https://learnopengl-cn.github.io/03%20Model%20Loading/03%20Model/
//
// https://learnopengl.com/code_viewer_gh.php?code=includes/learnopengl/mesh.h
//
//
//  Model.hpp
//

#ifndef Model_hpp
#define Model_hpp

#include <stdio.h>
#include <vector>

#include <common/Shader.hpp>
#include <common/Mesh.hpp>

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

using namespace std;

class Model
{
    public:
        /*  函数   */
        Model(string const &path, bool gamma = false);
        void Draw(Shader &shader);
    private:
        // model data
       vector<Texture> textures_loaded;    // stores all the textures loaded so far, optimization to make sure textures aren't loaded more than once.
       vector<Mesh>    meshes;
       string directory;
       bool gammaCorrection;
    
        /*  函数   */
        void loadModel(string const &path);
        void processNode(aiNode *node, const aiScene *scene);
        Mesh processMesh(aiMesh *mesh, const aiScene *scene);
        vector<Texture> loadMaterialTextures(aiMaterial *mat, aiTextureType type,
                                             string typeName);
};

#endif /* Model_hpp */
