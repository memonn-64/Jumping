/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */

	void DrawFace();
	void DrawPlatform(int x1, int y1);
	int boundaryX(int x);
	int boundaryY(int y);
	int checkfloor(int y, int ground1);
	bool OverlapTest(int box0x, int box0y, int box1x, int box1y);




	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */

	int x = 100; 
	int y = 300;
	int g = 10;
	int dy = 0;
	int dx = 0;


	int ground = 500;
	int ground0 = 500;
	int ground1 = 490; 
	int ground2 = 450;
	int ground3 = 410;
	int ground4 = 370;
	int ground5 = 330;
	int ground6 = 290;

	int x1 = 200;
	int x2 = 255;
	int x3 = 210;
	int x4 = 270;
	int x5 = 300;
	int x6 = 380;

	bool inhibitLeft = false; 
	bool inhibitRight = false; 

	bool jumping = false; 



	/********************************/
};