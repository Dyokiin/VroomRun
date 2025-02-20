#pragma once

#include <cstdint>
#include <SDL2/SDL.h>
#include <glm/glm.hpp>

class SDLWindowManager {
private:
    SDL_Window* _window;
    SDL_GLContext _glcont;
public:
    SDLWindowManager(uint32_t width, uint32_t height, const char* title);

    ~SDLWindowManager();

    bool pollEvent(SDL_Event& e);

    // button can SDL_BUTTON_LEFT, SDL_BUTTON_RIGHT and SDL_BUTTON_MIDDLE
    bool isMouseButtonPressed(uint32_t button) const;

    glm::ivec2 getMousePosition() const;

    void swapBuffers();

    // Return the time in seconds
    float getTime() const;
};