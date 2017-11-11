/*
 * program_triangles_plain.c
 *
 *  Created on: Nov 10, 2017
 *      Author: nullifiedcat
 */

#include <GL/glew.h>

#include "programs.h"

DECL_PROGRAM_INIT(triangles_plain)
{

}

DECL_PROGRAM_LOAD(triangles_plain)
{
    vertex_buffer_clear(programs[PROGRAM_TRIANGLES_PLAIN].vertex);
}

DECL_PROGRAM_RENDER(triangles_plain)
{
    if (programs[PROGRAM_TRIANGLES_PLAIN].vertex->indices->size == 0)
        return;
    printf("Rendering triangles_plain (%d indices)\n", programs[PROGRAM_TRIANGLES_PLAIN].vertex->indices->size);
    vertex_buffer_render(programs[PROGRAM_TRIANGLES_PLAIN].vertex, GL_TRIANGLES);
}

DECL_PROGRAM_UNLOAD(triangles_plain)
{

}

DECL_PROGRAM_DESTROY(triangles_plain)
{

}