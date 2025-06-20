#include <wx/wx.h>

class MyApp : public wxApp {
public:
  virtual bool OnInit();
};

class MyFrame : public wxFrame {
public:
  MyFrame(const wxString &title, const wxPoint &pos, const wxSize &size);
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
  MyFrame *frame =
      new MyFrame("Hello a todos!!!!", wxDefaultPosition, wxDefaultSize);
  frame->Show(true);
  return true;
}

MyFrame::MyFrame(const wxString &title, const wxPoint &pos, const wxSize &size)
    : wxFrame(NULL, wxID_ANY, title, pos, size) {
  new wxStaticText(this, wxID_ANY,
                   "Buenas a todos!"); // no need to delete - the parent will do
                                       // it automatically
}
