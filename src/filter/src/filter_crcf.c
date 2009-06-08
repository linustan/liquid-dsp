/*
 * Copyright (c) 2007, 2009 Joseph Gaeddert
 * Copyright (c) 2007, 2009 Virginia Polytechnic Institute & State University
 *
 * This file is part of liquid.
 *
 * liquid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * liquid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with liquid.  If not, see <http://www.gnu.org/licenses/>.
 */

//
// Filter API: complex floating-point
//

#include "liquid.internal.h"

// 
#define FIR_FARROW(name)    LIQUID_CONCAT(fir_farrow_crcf,name)
#define FIR_FILTER(name)    LIQUID_CONCAT(fir_filter_crcf,name)
#define IIR_FILTER(name)    LIQUID_CONCAT(iir_filter_crcf,name)
#define FIRPFB(name)        LIQUID_CONCAT(firpfb_crcf,name)
#define INTERP(name)        LIQUID_CONCAT(interp_crcf,name)
#define DECIM(name)         LIQUID_CONCAT(decim_crcf,name)
#define QMFB(name)          LIQUID_CONCAT(qmfb_crcf,name)
#define RESAMP(name)        LIQUID_CONCAT(resamp_crcf,name)
#define RESAMP2(name)       LIQUID_CONCAT(resamp2_crcf,name)
#define SYMSYNC(name)       LIQUID_CONCAT(symsync_crcf,name)
#define SYMSYNC2(name)      LIQUID_CONCAT(symsync2_crcf,name)

#define PRINTVAL(x)         printf("%12.4e + %12.4ej", crealf(x), cimagf(x))

#define T                   float complex   // general
#define TO                  float complex   // output
#define TC                  float           // coefficients
#define TI                  float complex   // input
#define WINDOW(name)        LIQUID_CONCAT(cfwindow,name)
#define DOTPROD(name)       LIQUID_CONCAT(dotprod_crcf,name)

// source files
#include "fir_farrow.c"
#include "fir_filter.c"
#include "iir_filter.c"
#include "firpfb.c"
#include "interp.c"
#include "decim.c"
#include "qmfb.c"
#include "resamp.c"
#include "resamp2.c"
#include "symsync.c"
#include "symsync2.c"
