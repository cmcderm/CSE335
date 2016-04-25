#include "connortablewidget.h"

ConnorTableWidget::ConnorTableWidget(QWidget *parent) : QTableWidget(parent)
{

}

void ConnorTableWidget::sortItems( int column, Qt::SortOrder order){
    emit sort(column, order);
    std::cout << "Trying to sort" << std::endl;
    QTableWidget::sortItems(column, order);
}
