

#ifndef APP_H
#define APP_H
#include "string"
#include <SDL.h>
#include <iostream>
class App {
    public:
        App();
        ~App();
        bool init(const char* title, int height, int width);
        void run();
        void close();
        void render();
        void update();
        void handleEvent(SDL_Event* event);
        private:
        SDL_Window* pWindow = nullptr;
        SDL_Renderer* pRenderer = nullptr;
        bool isRunning;
};


#endif

