/***************************************************************************
                          fftview.h  -  description
                             -------------------
    begin                : May 18 2005
    copyright            : (C) 2005 by Philip McLeod
    email                : pmcleod@cs.otago.ac.nz
    copyright            : (C) 2016 by Julien Thevenon
    email                : julien_thevenon at yahoo.fr
 
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   
   Please read LICENSE.txt for details.
 ***************************************************************************/
#ifndef FFTVIEW_H
#define FFTVIEW_H

#include "viewwidget.h"
#include <QResizeEvent>

class FFTWidget;

class FFTView: public ViewWidget
{
  Q_OBJECT

  public:
    FFTView( int p_view_id
           , QWidget *p_parent = 0
           );
    virtual ~FFTView();

    void resizeEvent(QResizeEvent *);

    QSize sizeHint() const;

  private:
    FFTWidget * m_fft_widget;
};

#endif // FFTVIEW_H
// EOF

