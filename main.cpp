#include <iostream>
#include <emscripten.h>
#include "App/App.h"

int main(int argc, char** argv) {


    App app = App();
    app.init("WebTrace",1280,1024);
    return 0;
}
