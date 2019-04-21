#include <Malgachette.hpp>

class Sandbox : public mal::Application
{
public:
	Sandbox() 
	{
	}

	~Sandbox() 
	{
	}
};

mal::Application* mal::CreateApplication()
{
	return new Sandbox();
}
