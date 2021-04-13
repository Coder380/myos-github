
#include <stdint.h>
#include "BasicRenderer.h"


// extern "C" void _start(Framebuffer* framebuffer, PSF1_FONT* psf1_font){
extern "C" void _start(Framebuffer* framebuffer, PSF1_FONT* psf1_font){
	
    BasicRenderer newRenderer;
    newRenderer.CursorPosition.X = {15, 50};
    newRenderer.Print(framebuffer, psf1_font, 0xffffffff, "Test C++ Class");

    return ;
}