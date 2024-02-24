

#include "App.h"
            //Initialization method
bool App::init(const char* title, int height, int width) {
    // Return false if initialization fails
                if(SDL_Init(SDL_INIT_VIDEO) < 0)
                    return false;
                    //CREATE A SDL WINDOW
    pWindow = SDL_CreateWindow(title,SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,width,height,0);
            //Check if the windows was created successfully
    if(pWindow == NULL)
        return false;
    std::cout << "Window created successfully : " << std::endl;
                //Create A SDL RENDERER
    pRenderer = SDL_CreateRenderer(pWindow,-1,0);
            //Check if the renderer was created successfully
    if(pRenderer == NULL)
        return false;

    return true;
}

App::App() {

}

App::~App() {

}
