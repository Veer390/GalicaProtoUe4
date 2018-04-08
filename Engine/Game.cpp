#include "MainWindow.h"
#include "Game.h"


Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	t(900,900)
	
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	if (boo == false)
	{
		for (int i = 0; i < t.GetWidth(); i++)
		{
			for (int j = 0; j < t.GetHeight(); j++)
			{
				t.PutPixel({ i,j }, Color( (255-i),255,(255-j) ));
			}
		}
		boo = true;
	}
}

void Game::ComposeFrame()
{
	for (int i = 0; i < t.GetWidth(); i++)
	{
		for (int j = 0; j < t.GetHeight(); j++)
		{
			gfx.PutPixel(i, j, t.GetPixel({ i,j }));
		}

	}


}
