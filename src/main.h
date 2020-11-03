
#include "ui.h"

class App : public wxApp {
public:
	App();
	~App();
private:
	mainframe* mainFrame = nullptr;
public:
	virtual bool OnInit();
};

