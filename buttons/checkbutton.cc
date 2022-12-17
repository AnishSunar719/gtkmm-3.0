#include "button.h"
#include <iostream>

Button::Button()
{
    this-> set_default_size(50, 50);
    this-> set_border_width(5);
    check_button.set_label("Maths");
    check_button.signal_clicked().connect(sigc::mem_fun(*this, &Button::on_check_button_clicked));
    this->add(check_button);
    this->show_all_children();
}

Button::~Button(){}

void Button::on_check_button_clicked()
{
    bool button_state = check_button.get_active();
    if(button_state)
        std::cout<< "Checked" << std::endl;
    else
        std::cout<<"Unchecked"<< std::endl;
}