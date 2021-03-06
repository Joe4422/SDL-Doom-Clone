#ifndef GRAPHICS_GRAPHICS_H_
#define GRAPHICS_GRAPHICS_H_

// Includes
#include <game/data.h>
#include <graphics/framebuffer.h>

// Function declarations
void Graphics_DrawLine
(
	FRAMEBUFFER_HANDLE * 	handle,
	RENDERER_POINT *		start,
	RENDERER_POINT *		end,
	uint32_t				argb
);

void Graphics_DrawFilledPolygon
(
	FRAMEBUFFER_HANDLE *	handle,
	RENDERER_POLYGON *		polygon,
	uint32_t				argb
);

void Graphics_DrawWall
(
	FRAMEBUFFER_HANDLE *	handle,
	int						aX,
	int						aY1,
	int						aY2,
	int						bX,
	int						bY1,
	int						bY2,
	uint32_t				argb
);

#endif