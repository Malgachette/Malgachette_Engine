#pragma once

#ifdef ML_PLATFORM_WINDOWS

extern mal::Application* mal::CreateApplication();

int main(int argc, char** argv)
{
	auto app = mal::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif // ML_PLATFORW_WINDOWS

