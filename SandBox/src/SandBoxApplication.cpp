#include "Surreal.h"


class Sandbox : public Surreal::Application {

public:
	
	Sandbox() {}

	~Sandbox() {}
};


Surreal::Application* Surreal::CreateApplication() {
	return new Sandbox();
}