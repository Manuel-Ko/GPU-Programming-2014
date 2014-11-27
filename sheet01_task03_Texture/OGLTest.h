#ifndef OGLTEST_H
#define OGLTEST_H

#include <GL/glew.h>
#include <GL/freeglut.h>

class OGLTest
{
public:
    OGLTest() :
        m_something(0),
        initialized(false)
    {}

    static void displayfunc(void *);
    static void mousefunc(int event, int x, int y, int, void*);

    void setSomething(int i);

    int getSomething();

    void makeCurrentInstance();

    void callingFunc();

private:
    static OGLTest* curr;

    void m_display();

    void initGLCV();

    void setupTextures();

    int m_something;

    bool initialized;

//    GLuint vao;
//    GLuint ibo;
//    GLuint vert_vbo;
//    GLuint tex_vbo;

//    static const unsigned short indices[] = {0,1,2,2,3,0,
//                                             0,1,5,5,4,0,
//                                            0,3,7,7,4,0,
//                                            1,2,6,6,5,1,
//                                            3,2,6,6,7,3,
//                                            4,5,6,6,7,4};

//    static const float verts[] = {

//            -1,-1,-1,
//            -1,-1,1,
//            1,-1,1,
//            1,-1,-1,
//            -1,1,-1,
//            -1,1,1,
//            1,1,1,
//            1,1,-1};

//    static const float texcoords[] = { 0,0,1,0,1,1,0,1,
//                         1,0,1,1,0,1,0,0,
//                         0,0,1,0,1,1,0,1,
//                         0,0,1,0,1,1,0,1,
//                         1,0,1,1,0,1,0,0,
//                         0,0,1,0,1,1,0,1};
};

#endif // OGLTEST_H
