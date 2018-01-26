#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include "SDL.h"
#include "SDL_image.h"
#include "EventListener.h"
#include "InputManager.h"

using namespace std;

SDL_Window* gameWindow;
SDL_Renderer* gameRenderer;
SDL_Event event;

bool gameRunning = true;

#undef main
int main(int argc, char *args[])
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		exit(0);
	}

	gameWindow = SDL_CreateWindow("InputManager", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 100, 100, SDL_WINDOW_SHOWN);
	gameRenderer = SDL_CreateRenderer(gameWindow, -1, SDL_RENDERER_PRESENTVSYNC);
	SDL_SetRenderDrawBlendMode(gameRenderer, SDL_BLENDMODE_BLEND);

	EventListener * eventListener = new EventListener();
	InputHandler * input = new InputHandler(&event, eventListener);

	while (gameRunning)
	{
		input->InputCheck();
	}

	SDL_Quit();

	return 0;
}