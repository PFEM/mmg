/* =============================================================================
**  This file is part of the MMG3D 5 software package for the tetrahedral
**  mesh modification.
**  Copyright (c) 2014 Inria / Université de Bordeaux, IMB / UPMC, LJLL.
**
**  MMG3D 5 is free software: you can redistribute it and/or modify it
**  under the terms of the GNU Lesser General Public License as published
**  by the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  MMG3D 5 is distributed in the hope that it will be useful, but WITHOUT
**  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
**  FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
**  License for more details.
**
**  You should have received a copy of the GNU Lesser General Public
**  License and of the GNU General Public License along with MMG3D 5 (in
**  files COPYING.LESSER and COPYING). If not, see
**  <http://www.gnu.org/licenses/>. Please read their terms carefully and
**  use this copy of the MMG3D 5 distribution only if you accept them.
** =============================================================================
*/

#ifndef _CHRONO_H
#define _CHRONO_H

#include <time.h>
#include <sys/time.h>
#include <sys/resource.h>

#ifndef  ON
#define  RESET  0
#define  ON     1
#define  OFF    2
#endif

#define  BIG      1e6
#define  BIG1     1e-6
#define  TIMEMAX  12

typedef struct mytime {
  double  gini,gend,gdif,uini,uend,udif,sini,send,sdif;
  struct  timeval rutim;
  struct  rusage  ru;
  int     call;
} mytime;


/* prototypes */
void   chrono(int cmode,mytime *ptt);
void   tminit(mytime *t,int maxtim);
void   printim(double ,char *);

#endif