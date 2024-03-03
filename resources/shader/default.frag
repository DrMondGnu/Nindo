#version 330 core

in vec2 TexCoords;
out vec4 outColor;

uniform sampler2D image;
uniform vec3 color;
uniform bool useTexture;

void main() {
    if(useTexture) {
        outColor = vec4(color, 1.0) * texture(image, TexCoords);
    }else {
        outColor = vec4(color, 1.0);
    }
}