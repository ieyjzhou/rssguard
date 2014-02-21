#ifndef FORMUPDATE_H
#define FORMUPDATE_H

#include <QDialog>

#include "ui_formupdate.h"


namespace Ui {
  class FormUpdate;
}

class FormUpdate : public QDialog {
    Q_OBJECT

  public:
    // Constructors and destructors.
    explicit FormUpdate(QWidget *parent = 0);
    virtual ~FormUpdate();

  protected slots:
    // Check for updates and interprets the results.
    void checkForUpdates();

  private:
    Ui::FormUpdate *m_ui;
};

#endif // FORMUPDATE_H