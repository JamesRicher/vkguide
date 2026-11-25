#include <vk_engine.h>

int main(int argc, char* argv[])
{
    #ifdef NDEBUG
        fmt::print("In Release Mode\n");
    #else
        fmt::print("In Debug Mode\n");
    #endif

	VulkanEngine engine;

	engine.init();	
	
	engine.run();	

	engine.cleanup();	

	return 0;
}
