#ifndef BUTTON_H
#define BUTTON_H

#include <gtkmm/button.h>
#include <gtkmm/togglebutton.h>
#include <gtkmm/checkbutton.h>
#include <gtkmm/window.h>

class Button: public Gtk::Window
{
    public:
    Button();
    virtual ~Button();

    protected:
    // Signal handlers
    void on_button_clicked();
    void on_toggle_button_clicked();
    void on_check_button_clicked();
    // Child Widget
    Gtk::Button m_button;
    Gtk::ToggleButton toggle_button;
    Gtk::CheckButton check_button;
};

#endif // BUTTON_H