/***************************************************************************
 *                                                                         *
 *   copyright : (C) 2007 The University of Toronto                        *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef MEMORYWIDGET_H
#define MEMORYWIDGET_H

#include <QTimer>
#include <QLabel>

namespace Kst {

class MemoryWidget : public QLabel {
  Q_OBJECT
  public:
    MemoryWidget(QWidget *parent, int updateMilliSeconds = 5000);
    ~MemoryWidget();

  public Q_SLOTS:
    void updateFreeMemory();

  private:
    QTimer _timer;
};

}

#endif

// vim: ts=2 sw=2 et