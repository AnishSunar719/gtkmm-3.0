#include "button.h"
#include <iostream>

Button::Button():toggle_button("Toggle Button")
{
    this -> set_border_width(20);
    // Toggle button has toggled() function to toggle the method
    toggle_button.signal_toggled().connect(sigc::mem_fun(*this, &Button::on_toggle_button_clicked));
    this -> add(toggle_button);
    this -> show_all_children();
}

Button::~Button()
{

}

void Button::on_toggle_button_clicked()
{
    bool button_state = toggle_button.get_active();
    if (!button_state)
    {
        std::cout<< "Toggle Button Unpressed" << std::endl;
    }
    std::cout << "Toggle Button Pressed" << std::endl;
}