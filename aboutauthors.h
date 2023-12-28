#ifndef ABOUTAUTHORS_H
#define ABOUTAUTHORS_H
#include <QWidget>
namespace Ui {
class AboutAuthors;
}

class AboutAuthors : public QWidget
{
    Q_OBJECT

public:
    explicit AboutAuthors(QWidget *parent = nullptr);
    ~AboutAuthors();

private slots:
    void on_pushButton_4_pressed();

    void on_pushButton_3_pressed();

private:
    Ui::AboutAuthors *ui;
};

#endif // ABOUTAUTHORS_H
