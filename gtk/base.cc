#include <gtkmm.h>

class MyWindow : public Gtk::Window {
public:
  MyWindow();
};

MyWindow::MyWindow() {
  set_title("Basic application");
  set_default_size(200, 200);
}

int main(int argc, char *argv[]) {
  auto app = Gtk::Application::create(
      "org.gtkmm.examples.base"); /// Creates a Gtk::Application object, stored
                                  /// in a Glib::RefPtr smartpointer.

  return app->make_window_and_run<MyWindow>(
      argc,
      argv); /// After putting the source code in this base.cc we can complie
             /// the above program with gcc using g++ base.cc -o base
             /// `pkg-config gtkmm-4.0 --cflags --libs` on the terminal.
  /// Keep it in mind you have to surround the pkg-config with backqoutes which
  /// the same key of tilde. The backqoutes cause the shell to excute the
  /// command inside them.
}