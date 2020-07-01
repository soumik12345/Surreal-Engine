#pragma once


#ifdef SR_PLATFORM_WINDOWS

extern Surreal::Application* Surreal::CreateApplication();

int main(int argc, char** argv) {

	sandbox->Run();
	delete sandbox;

	return 0;
}

#endif // SR_PLATFORM_WINDOWS
