#include "radiobutton.h"

int main(int argc, char* argv[])
{
    auto app = Gtk::Application::create(argc, argv, "org.example.radiobutton");
    RadioButton radio_button;
    return app -> run(radio_button);
}