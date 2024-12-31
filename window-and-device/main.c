#include <SDL3/SDL.h>
#include <assert.h>

int main() {

	SDL_Window* window = SDL_CreateWindow("My Window", 800, 600, 0);
	assert(window);

	SDL_GPUDevice* device = SDL_CreateGPUDevice(SDL_GPU_SHADERFORMAT_SPIRV, false, NULL);
	assert(device);

	bool success = SDL_ClaimWindowForGPUDevice(device, window);
	assert(success);

	bool running = true;
	while (running) {
	    SDL_Event event;
	    while (SDL_PollEvent(&event)) {
	        if (event.type == SDL_EVENT_QUIT) {
	            running = false;
	        }
	    }
	}

	return 0;
}