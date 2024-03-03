#version 330 core

layout(location = 0) in vec2 vertex;
layout(location = 1) in vec2 tex;

out vec2 TexCoords;

uniform mat4 model;
uniform mat4 projection;

void main() {
    TexCoords = tex;
    gl_Position = projection * model * vec4(vertex.xy, 0.0f, 1.0f);
}