#ifndef RADIO_BUTT0N_H
#define RADIO_BUTTON_H

#include <gtkmm/box.h>
#include <gtkmm/radiobutton.h>
#include <gtkmm/separator.h>
#include <gtkmm/window.h>

class RadioButton: public Gtk::Window
{
    public:
        RadioButton();
        virtual ~RadioButton();

    protected:
        // Child Widgets
        Gtk::RadioButton r1,r2,r3;
        Gtk::Box main_box, box1, box2;
        Gtk::Button close_button;
        Gtk::Separator separator;

        // Signal Handlers
        void on_button_clicked();
};

#endif // RADIO_BUTTON_H