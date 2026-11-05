#version 450
layout(binding = 0) uniform UniformBufferObject {
    mat4 model; mat4 view; mat4 proj; vec4 color;
} ubo;
layout(location = 0) out vec4 outColor;
void main() { outColor = ubo.color; }
