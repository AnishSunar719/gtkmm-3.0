#include "button.h"
#include <iostream>

Button::Button()
{
    m_button.add_pixlabel("rain-1.jpg", "rain");
    set_title("Pixmapped button");
    set_border_width(20);

    m_button.signal_clicked().connect(sigc::mem_fun(*this, &Button::on_button_clicked));
    add(m_button);
    show_all_children();
}

Button::~Button()
{

}

void Button::on_button_clicked()
{
    std::cout<<"Button was pressed"<< std::endl;
}