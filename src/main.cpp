
#include "wx/wx.h"
#include "main.h"

wxIMPLEMENT_APP(App);

App::App() {

}

App::~App() {

}

bool App::OnInit() {
    mainFrame = new mainframe(nullptr);
    mainFrame->Show();
    return true;
}

