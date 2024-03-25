#pragma once
#ifndef HYPER_RENDERER_2D_HPP
#define HYPER_RENDERER_2D_HPP

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

namespace hyp
{
	class Renderer2D
	{
	public:
		static void init();
		static void deinit();
		static void beginScene(const glm::mat4& viewProjectionMatrix);
		static void endScene();

	public:
		static void drawQuad(const glm::vec3& position, const glm::vec2& size, const glm::vec4& color);
	private:
		static void startBatch();
		static void nextBatch();
		static void flush();
	};
} // namespace  hyp

#endif