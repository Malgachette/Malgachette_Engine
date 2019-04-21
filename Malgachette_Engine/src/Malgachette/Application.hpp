#pragma once

#include "Core.hpp"

namespace mal
{
	class MALGACHETTE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
