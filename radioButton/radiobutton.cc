#include "radiobutton.h"

RadioButton::RadioButton():
    main_box(Gtk::ORIENTATION_VERTICAL),
    box1(Gtk::ORIENTATION_VERTICAL, 10),
    box2(Gtk::ORIENTATION_VERTICAL, 10),
    r1("Male"),
    r2("Female"),
    r3("Others"),
    close_button("Close")
{
    this -> set_title("Radio Buttons");
    this -> set_border_width(0);

    // Radio Buttons should be grouped
    // so that only one element is chosen
    // from a bunch of elements

    // Putting radio butons r2 and r3 in the same 
    // group as r1
    r2.join_group(r1);
    r3.join_group(r1);

    // Adding an outer box tot te window
    // A window can only contain a single widget is the reason
    this -> add(main_box);
    // Putting inner boxes and the separator in the outer box
    main_box.pack_start(box1);
    main_box.pack_start(separator);
    main_box.pack_start(box2);

    // Setting the inner boxes border
    box1.set_border_width(10);
    box2.set_border_width(10);

    // Putting radio Buttons in box1
    box1.pack_start(r1);
    box1.pack_start(r2);
    box1.pack_start(r3);

    // Putting close_button in box2
    box2.pack_start(close_button);
    close_button.signal_clicked().connect(sigc::mem_fun(*this, &RadioButton::on_button_clicked));

    // Making button default widget
    close_button.set_can_default(); // needs to be default true for getting grab.
    close_button.grab_default(); // which widget is executed when Enter is pressed


    this-> show_all_children();

}

RadioButton::~RadioButton()
{

}

void RadioButton::on_button_clicked()
{
    this -> hide(); // to close the application
}