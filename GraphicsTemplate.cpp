// GraphicsTemplate.cpp
// 
//////////////////////////////////////////////////////////////////////////////////////////
// includes 
//////////////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"

//////////////////////////////////////////////////////////////////////////////////////////
// externals 
//////////////////////////////////////////////////////////////////////////////////////////
extern cRenderClass graphics;

//////////////////////////////////////////////////////////////////////////////////////////
// renderScene() - render the scene
//////////////////////////////////////////////////////////////////////////////////////////
void renderScene()
{
	int pass = 0;

	// set a colour
	graphics.colour( 0,1,0 );
	
	// set pixel size..
	graphics.pointSize(10);

	// draw to an off screen buffer
	graphics.drawPixel( 200, 200 );

	while( pass < PASSES )
	{
		// render first pass
		graphics.render(pass++);
	}
}

//////////////////////////////////////////////////////////////////////////////////////////
// update() - update function
//////////////////////////////////////////////////////////////////////////////////////////
void update()
{
	// add any update code here...

	// always re-render the scene..
	renderScene();
}



//////////////////////////////////////////////////////////////////////////////////////////
// _tmain() - program entry point
//////////////////////////////////////////////////////////////////////////////////////////
int _tmain(int argc, _TCHAR* argv[])
{	
	// init glut stuff..
	graphics.create(argc, argv);

	// good place for one-off initialisations and objects creation..

	// enter game loop..
	graphics.loop();	

	return 0;
}




