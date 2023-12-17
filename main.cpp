#include <CtrlLib/CtrlLib.h>

using namespace Upp;

struct MyApp : TopWindow {
	void Paint(Draw& w) override {
		//Borde
		w.DrawRect(GetSize(),White);
		w.DrawLine(10,10,GetSize().cx - 10, 10 ,5,Black);
	    w.DrawLine(10,10,10,GetSize().cy - 10, 5, Black);
	    w.DrawLine(GetSize().cx - 10, 10, GetSize().cx - 10, GetSize().cy - 10, 5, Black);
	    w.DrawLine(10,GetSize().cy - 10, GetSize().cx - 10, GetSize().cy - 10, 5, Black);
	    
	    //Columnas
	    w.DrawLine(GetSize().cx/3 ,10,GetSize().cx/3,GetSize().cy - 10, 5, Red);
	    w.DrawLine(2*GetSize().cx/3 ,10,2*GetSize().cx/3,GetSize().cy - 10, 5, Red);
	    w.DrawLine(10,60,GetSize().cx - 10, 60 ,5,Black);
	}
};

GUI_APP_MAIN
{
	MyApp().Sizeable().Run();
}
