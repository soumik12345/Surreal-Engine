#pragma once


#ifdef SR_PLATFORM_WINDOWS

extern Surreal::Application* Surreal::CreateApplication();

int main(int argc, char** argv) {
	printf("It's Surreal!!!");
	auto app = Surreal::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif // SR_PLATFORM_WINDOWS
