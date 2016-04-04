/***************************************************************************
                          hstackview.cpp  -  description
                             -------------------
    begin                : Mon Jan 10 2005
    copyright            : (C) 2005 by Philip McLeod
    email                : pmcleod@cs.otago.ac.nz
 
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   
   Please read LICENSE.txt for details.
 ***************************************************************************/
#include "hstackview.h"
#include "hstackwidget.h"

HStackView::HStackView( int viewID_, QWidget *parent, const char *hstack )
 : ViewWidget( viewID_, parent, hstack)
{
  //setCaption("Harmonic Stack");

  hStackWidget = new HStackWidget(this);
  hStackWidget->show();
}

HStackView::~HStackView()
{
  delete hStackWidget;
}

void HStackView::resizeEvent(QResizeEvent *)
{
  hStackWidget->resize(size());
}
