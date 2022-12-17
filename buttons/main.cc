#include "button.h"
#include <gtkmm/application.h>

int main(int argc, char* argv[])
{
    auto app = Gtk::Application::create(argc, argv, "org.example.pixmapButton");
    Button button;
    return app -> run(button);
}