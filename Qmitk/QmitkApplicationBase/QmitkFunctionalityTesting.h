/*=========================================================================

Program:   Medical Imaging & Interaction Toolkit
Module:    $RCSfile$
Language:  C++
Date:      $Date$
Version:   $Revision$

Copyright (c) German Cancer Research Center, Division of Medical and
Biological Informatics. All rights reserved.
See MITKCopyright.txt or http://www.mitk.org/copyright.html for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#include <qobject.h>

class QmitkFctMediator;
class QTimer;

class QmitkFunctionalityTesting : public QObject
{
  Q_OBJECT
public:
  QmitkFunctionalityTesting( QmitkFctMediator* qfm, QObject * parent = 0, const char * name = 0 );
  ~QmitkFunctionalityTesting();
protected slots:
  virtual void ActivateNextFunctionality();
protected:
  QmitkFctMediator* m_QmitkFctMediator;
  QTimer *m_Timer;
};

int StartQmitkFunctionalityTesting(QmitkFctMediator* qfm);
