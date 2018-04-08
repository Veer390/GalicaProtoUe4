#pragma once
#include "Graphics.h"
#include "Colors.h"
#include "Vec2.h"


class Texture
{

public:
	Texture(int width, int height)
		:
		width(width),
		height(height)
	{
		pPixels = new Color[width*height];
	}


private:
	Color * pPixels=nullptr;
	int width;
	int height;


public:
	void PutPixel(vector loc, Color c);
	Color GetPixel(vector loc);


public:
	int GetWidth();
	int GetHeight();

};

