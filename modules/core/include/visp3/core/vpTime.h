/****************************************************************************
 *
 * $Id$
 *
 * This file is part of the ViSP software.
 * Copyright (C) 2005 - 2014 by INRIA. All rights reserved.
 * 
 * This software is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * ("GPL") version 2 as published by the Free Software Foundation.
 * See the file LICENSE.txt at the root directory of this source
 * distribution for additional information about the GNU GPL.
 *
 * For using ViSP with software that can not be combined with the GNU
 * GPL, please contact INRIA about acquiring a ViSP Professional 
 * Edition License.
 *
 * See http://www.irisa.fr/lagadic/visp/visp.html for more information.
 * 
 * This software was developed at:
 * INRIA Rennes - Bretagne Atlantique
 * Campus Universitaire de Beaulieu
 * 35042 Rennes Cedex
 * France
 * http://www.irisa.fr/lagadic
 *
 * If you have questions regarding the use of this file, please contact
 * INRIA at visp@inria.fr
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 *
 * Description:
 * Time management and measurement.
 *
 * Authors:
 * Eric Marchand
 * Fabien Spindler
 *
 *****************************************************************************/


#ifndef vpTime_h
#define vpTime_h

/*!
  \file vpTime.h
  \brief Time management and measurement

*/

#include <visp3/core/vpConfig.h>
#include <visp3/core/vpException.h>

/*!
  \class vpTime
  \ingroup Time
  \brief Time management and measurement.

  The example below shows how to synchronize a loop to a given framerate.

  \code
#include <visp3/core/vpTime.h>

int main()
{
  double t;
  for ( ; ; ) {
    t = vpTime::measureTimeMs();
    ...
    vpTime::wait(t, 40); // Loop time is set to 40 ms, ie 25 Hz
  }
}
  \endcode

*/

namespace vpTime
{

VISP_EXPORT double getMinTimeForUsleepCall();
VISP_EXPORT double measureTimeSecond() ;
VISP_EXPORT double measureTimeMs() ;
VISP_EXPORT double measureTimeMicros() ;
VISP_EXPORT void sleepMs(double t);
VISP_EXPORT int  wait(double t0, double t) ;
VISP_EXPORT void wait(double t) ;

};

#endif
