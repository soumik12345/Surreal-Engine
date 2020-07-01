#include "Surreal.h"


class Sandbox : public Surreal::Application {

public:
	
	Sandbox() {}

	~Sandbox() {}
};


int main() {
	
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;

	return 0;
}