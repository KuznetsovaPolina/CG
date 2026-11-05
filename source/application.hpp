#pragma once
#include "graphics_internal.hpp"
#include <glm/glm.hpp>

namespace application {
struct Vertex { glm::vec3 position; };
struct UniformBufferObject {
    glm::mat4 model; glm::mat4 view; glm::mat4 proj; glm::vec4 color;
};
bool initialize();
void shutdown();
void update(double time);
void render(const graphics::internal::FrameData& fd);
}
