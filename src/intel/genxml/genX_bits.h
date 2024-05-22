/*
 * Copyright © 2017 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

/* THIS FILE HAS BEEN GENERATED, DO NOT HAND EDIT.
 *
 * Sizes of bitfields in genxml instructions, structures, and registers.
 */

#ifndef GENX_BITS_H
#define GENX_BITS_H

#include <stdint.h>

#include "dev/intel_device_info.h"
#include "util/macros.h"



#ifdef __cplusplus
extern "C" {
#endif

/* 3DSTATE_CLEAR_PARAMS */


#ifndef GFX125_3DSTATE_CLEAR_PARAMS_length
#define GFX125_3DSTATE_CLEAR_PARAMS_length  3
#endif
#ifndef GFX12_3DSTATE_CLEAR_PARAMS_length
#define GFX12_3DSTATE_CLEAR_PARAMS_length  3
#endif
#ifndef GFX11_3DSTATE_CLEAR_PARAMS_length
#define GFX11_3DSTATE_CLEAR_PARAMS_length  3
#endif
#ifndef GFX9_3DSTATE_CLEAR_PARAMS_length
#define GFX9_3DSTATE_CLEAR_PARAMS_length  3
#endif
#ifndef GFX8_3DSTATE_CLEAR_PARAMS_length
#define GFX8_3DSTATE_CLEAR_PARAMS_length  3
#endif

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_CLEAR_PARAMS_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 3;
   case 120: return 3;
   case 110: return 3;
   case 90: return 3;
   case 80: return 3;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* 3DSTATE_CPSIZE_CONTROL_BUFFER */


#ifndef GFX20_3DSTATE_CPSIZE_CONTROL_BUFFER_length
#define GFX20_3DSTATE_CPSIZE_CONTROL_BUFFER_length  8
#endif
#ifndef GFX125_3DSTATE_CPSIZE_CONTROL_BUFFER_length
#define GFX125_3DSTATE_CPSIZE_CONTROL_BUFFER_length  8
#endif

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_CPSIZE_CONTROL_BUFFER_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 8;
   case 125: return 8;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* 3DSTATE_CPSIZE_CONTROL_BUFFER::Surface Base Address */


#define GFX20_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfaceBaseAddress_bits  64
#define GFX125_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfaceBaseAddress_bits  64

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfaceBaseAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfaceBaseAddress_start  64
#define GFX125_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfaceBaseAddress_start  64

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfaceBaseAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* 3DSTATE_CPSIZE_CONTROL_BUFFER::Surface Pitch */


#define GFX20_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfacePitch_bits  17
#define GFX125_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfacePitch_bits  17

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfacePitch_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 17;
   case 125: return 17;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfacePitch_start  32
#define GFX125_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfacePitch_start  32

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_CPSIZE_CONTROL_BUFFER_SurfacePitch_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 32;
   case 125: return 32;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* 3DSTATE_DEPTH_BUFFER */


#ifndef GFX20_3DSTATE_DEPTH_BUFFER_length
#define GFX20_3DSTATE_DEPTH_BUFFER_length  8
#endif
#ifndef GFX125_3DSTATE_DEPTH_BUFFER_length
#define GFX125_3DSTATE_DEPTH_BUFFER_length  10
#endif
#ifndef GFX12_3DSTATE_DEPTH_BUFFER_length
#define GFX12_3DSTATE_DEPTH_BUFFER_length  8
#endif
#ifndef GFX11_3DSTATE_DEPTH_BUFFER_length
#define GFX11_3DSTATE_DEPTH_BUFFER_length  8
#endif
#ifndef GFX9_3DSTATE_DEPTH_BUFFER_length
#define GFX9_3DSTATE_DEPTH_BUFFER_length  8
#endif
#ifndef GFX8_3DSTATE_DEPTH_BUFFER_length
#define GFX8_3DSTATE_DEPTH_BUFFER_length  8
#endif

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_DEPTH_BUFFER_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 8;
   case 125: return 10;
   case 120: return 8;
   case 110: return 8;
   case 90: return 8;
   case 80: return 8;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* 3DSTATE_DEPTH_BUFFER::Surface Base Address */


#define GFX20_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_bits  64
#define GFX125_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_bits  64
#define GFX12_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_bits  64
#define GFX11_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_bits  64
#define GFX9_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_bits  64
#define GFX8_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_bits  64

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 64;
   case 110: return 64;
   case 90: return 64;
   case 80: return 64;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_start  64
#define GFX125_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_start  64
#define GFX12_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_start  64
#define GFX11_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_start  64
#define GFX9_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_start  64
#define GFX8_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_start  64

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_DEPTH_BUFFER_SurfaceBaseAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 64;
   case 110: return 64;
   case 90: return 64;
   case 80: return 64;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* 3DSTATE_DEPTH_BUFFER::Surface Pitch */


#define GFX20_3DSTATE_DEPTH_BUFFER_SurfacePitch_bits  18
#define GFX125_3DSTATE_DEPTH_BUFFER_SurfacePitch_bits  18
#define GFX12_3DSTATE_DEPTH_BUFFER_SurfacePitch_bits  18
#define GFX11_3DSTATE_DEPTH_BUFFER_SurfacePitch_bits  18
#define GFX9_3DSTATE_DEPTH_BUFFER_SurfacePitch_bits  18
#define GFX8_3DSTATE_DEPTH_BUFFER_SurfacePitch_bits  18

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_DEPTH_BUFFER_SurfacePitch_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 18;
   case 125: return 18;
   case 120: return 18;
   case 110: return 18;
   case 90: return 18;
   case 80: return 18;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_3DSTATE_DEPTH_BUFFER_SurfacePitch_start  32
#define GFX125_3DSTATE_DEPTH_BUFFER_SurfacePitch_start  32
#define GFX12_3DSTATE_DEPTH_BUFFER_SurfacePitch_start  32
#define GFX11_3DSTATE_DEPTH_BUFFER_SurfacePitch_start  32
#define GFX9_3DSTATE_DEPTH_BUFFER_SurfacePitch_start  32
#define GFX8_3DSTATE_DEPTH_BUFFER_SurfacePitch_start  32

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_DEPTH_BUFFER_SurfacePitch_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 32;
   case 125: return 32;
   case 120: return 32;
   case 110: return 32;
   case 90: return 32;
   case 80: return 32;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* 3DSTATE_HIER_DEPTH_BUFFER */


#ifndef GFX20_3DSTATE_HIER_DEPTH_BUFFER_length
#define GFX20_3DSTATE_HIER_DEPTH_BUFFER_length  5
#endif
#ifndef GFX125_3DSTATE_HIER_DEPTH_BUFFER_length
#define GFX125_3DSTATE_HIER_DEPTH_BUFFER_length  5
#endif
#ifndef GFX12_3DSTATE_HIER_DEPTH_BUFFER_length
#define GFX12_3DSTATE_HIER_DEPTH_BUFFER_length  5
#endif
#ifndef GFX11_3DSTATE_HIER_DEPTH_BUFFER_length
#define GFX11_3DSTATE_HIER_DEPTH_BUFFER_length  5
#endif
#ifndef GFX9_3DSTATE_HIER_DEPTH_BUFFER_length
#define GFX9_3DSTATE_HIER_DEPTH_BUFFER_length  5
#endif
#ifndef GFX8_3DSTATE_HIER_DEPTH_BUFFER_length
#define GFX8_3DSTATE_HIER_DEPTH_BUFFER_length  5
#endif

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_HIER_DEPTH_BUFFER_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 5;
   case 125: return 5;
   case 120: return 5;
   case 110: return 5;
   case 90: return 5;
   case 80: return 5;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* 3DSTATE_HIER_DEPTH_BUFFER::Surface Base Address */


#define GFX20_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_bits  64
#define GFX125_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_bits  64
#define GFX12_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_bits  64
#define GFX11_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_bits  64
#define GFX9_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_bits  64
#define GFX8_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_bits  64

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 64;
   case 110: return 64;
   case 90: return 64;
   case 80: return 64;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_start  64
#define GFX125_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_start  64
#define GFX12_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_start  64
#define GFX11_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_start  64
#define GFX9_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_start  64
#define GFX8_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_start  64

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_HIER_DEPTH_BUFFER_SurfaceBaseAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 64;
   case 110: return 64;
   case 90: return 64;
   case 80: return 64;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* 3DSTATE_HIER_DEPTH_BUFFER::Surface Pitch */


#define GFX20_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_bits  17
#define GFX125_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_bits  17
#define GFX12_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_bits  17
#define GFX11_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_bits  17
#define GFX9_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_bits  17
#define GFX8_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_bits  17

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 17;
   case 125: return 17;
   case 120: return 17;
   case 110: return 17;
   case 90: return 17;
   case 80: return 17;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_start  32
#define GFX125_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_start  32
#define GFX12_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_start  32
#define GFX11_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_start  32
#define GFX9_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_start  32
#define GFX8_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_start  32

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_HIER_DEPTH_BUFFER_SurfacePitch_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 32;
   case 125: return 32;
   case 120: return 32;
   case 110: return 32;
   case 90: return 32;
   case 80: return 32;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* 3DSTATE_SO_BUFFER */


#ifndef GFX20_3DSTATE_SO_BUFFER_length
#define GFX20_3DSTATE_SO_BUFFER_length  8
#endif
#ifndef GFX125_3DSTATE_SO_BUFFER_length
#define GFX125_3DSTATE_SO_BUFFER_length  8
#endif
#ifndef GFX12_3DSTATE_SO_BUFFER_length
#define GFX12_3DSTATE_SO_BUFFER_length  8
#endif
#ifndef GFX11_3DSTATE_SO_BUFFER_length
#define GFX11_3DSTATE_SO_BUFFER_length  8
#endif
#ifndef GFX9_3DSTATE_SO_BUFFER_length
#define GFX9_3DSTATE_SO_BUFFER_length  8
#endif
#ifndef GFX8_3DSTATE_SO_BUFFER_length
#define GFX8_3DSTATE_SO_BUFFER_length  8
#endif

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_SO_BUFFER_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 8;
   case 125: return 8;
   case 120: return 8;
   case 110: return 8;
   case 90: return 8;
   case 80: return 8;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* 3DSTATE_SO_BUFFER::Stream Offset */


#define GFX20_3DSTATE_SO_BUFFER_StreamOffset_bits  32
#define GFX125_3DSTATE_SO_BUFFER_StreamOffset_bits  32
#define GFX12_3DSTATE_SO_BUFFER_StreamOffset_bits  32
#define GFX11_3DSTATE_SO_BUFFER_StreamOffset_bits  32
#define GFX9_3DSTATE_SO_BUFFER_StreamOffset_bits  32
#define GFX8_3DSTATE_SO_BUFFER_StreamOffset_bits  32

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_SO_BUFFER_StreamOffset_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 32;
   case 125: return 32;
   case 120: return 32;
   case 110: return 32;
   case 90: return 32;
   case 80: return 32;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_3DSTATE_SO_BUFFER_StreamOffset_start  224
#define GFX125_3DSTATE_SO_BUFFER_StreamOffset_start  224
#define GFX12_3DSTATE_SO_BUFFER_StreamOffset_start  224
#define GFX11_3DSTATE_SO_BUFFER_StreamOffset_start  224
#define GFX9_3DSTATE_SO_BUFFER_StreamOffset_start  224
#define GFX8_3DSTATE_SO_BUFFER_StreamOffset_start  224

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_SO_BUFFER_StreamOffset_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 224;
   case 125: return 224;
   case 120: return 224;
   case 110: return 224;
   case 90: return 224;
   case 80: return 224;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* 3DSTATE_SO_BUFFER::Surface Base Address */


#define GFX20_3DSTATE_SO_BUFFER_SurfaceBaseAddress_bits  46
#define GFX125_3DSTATE_SO_BUFFER_SurfaceBaseAddress_bits  46
#define GFX12_3DSTATE_SO_BUFFER_SurfaceBaseAddress_bits  46
#define GFX11_3DSTATE_SO_BUFFER_SurfaceBaseAddress_bits  46
#define GFX9_3DSTATE_SO_BUFFER_SurfaceBaseAddress_bits  46
#define GFX8_3DSTATE_SO_BUFFER_SurfaceBaseAddress_bits  46

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_SO_BUFFER_SurfaceBaseAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 46;
   case 125: return 46;
   case 120: return 46;
   case 110: return 46;
   case 90: return 46;
   case 80: return 46;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_3DSTATE_SO_BUFFER_SurfaceBaseAddress_start  66
#define GFX125_3DSTATE_SO_BUFFER_SurfaceBaseAddress_start  66
#define GFX12_3DSTATE_SO_BUFFER_SurfaceBaseAddress_start  66
#define GFX11_3DSTATE_SO_BUFFER_SurfaceBaseAddress_start  66
#define GFX9_3DSTATE_SO_BUFFER_SurfaceBaseAddress_start  66
#define GFX8_3DSTATE_SO_BUFFER_SurfaceBaseAddress_start  66

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_SO_BUFFER_SurfaceBaseAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 66;
   case 125: return 66;
   case 120: return 66;
   case 110: return 66;
   case 90: return 66;
   case 80: return 66;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* 3DSTATE_STENCIL_BUFFER */


#ifndef GFX20_3DSTATE_STENCIL_BUFFER_length
#define GFX20_3DSTATE_STENCIL_BUFFER_length  8
#endif
#ifndef GFX125_3DSTATE_STENCIL_BUFFER_length
#define GFX125_3DSTATE_STENCIL_BUFFER_length  8
#endif
#ifndef GFX12_3DSTATE_STENCIL_BUFFER_length
#define GFX12_3DSTATE_STENCIL_BUFFER_length  8
#endif
#ifndef GFX11_3DSTATE_STENCIL_BUFFER_length
#define GFX11_3DSTATE_STENCIL_BUFFER_length  5
#endif
#ifndef GFX9_3DSTATE_STENCIL_BUFFER_length
#define GFX9_3DSTATE_STENCIL_BUFFER_length  5
#endif
#ifndef GFX8_3DSTATE_STENCIL_BUFFER_length
#define GFX8_3DSTATE_STENCIL_BUFFER_length  5
#endif

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_STENCIL_BUFFER_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 8;
   case 125: return 8;
   case 120: return 8;
   case 110: return 5;
   case 90: return 5;
   case 80: return 5;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* 3DSTATE_STENCIL_BUFFER::Surface Base Address */


#define GFX20_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_bits  64
#define GFX125_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_bits  64
#define GFX12_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_bits  64
#define GFX11_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_bits  64
#define GFX9_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_bits  64
#define GFX8_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_bits  64

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 64;
   case 110: return 64;
   case 90: return 64;
   case 80: return 64;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_start  64
#define GFX125_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_start  64
#define GFX12_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_start  64
#define GFX11_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_start  64
#define GFX9_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_start  64
#define GFX8_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_start  64

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_STENCIL_BUFFER_SurfaceBaseAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 64;
   case 110: return 64;
   case 90: return 64;
   case 80: return 64;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* 3DSTATE_STENCIL_BUFFER::Surface Pitch */


#define GFX20_3DSTATE_STENCIL_BUFFER_SurfacePitch_bits  17
#define GFX125_3DSTATE_STENCIL_BUFFER_SurfacePitch_bits  17
#define GFX12_3DSTATE_STENCIL_BUFFER_SurfacePitch_bits  17
#define GFX11_3DSTATE_STENCIL_BUFFER_SurfacePitch_bits  17
#define GFX9_3DSTATE_STENCIL_BUFFER_SurfacePitch_bits  17
#define GFX8_3DSTATE_STENCIL_BUFFER_SurfacePitch_bits  17

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_STENCIL_BUFFER_SurfacePitch_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 17;
   case 125: return 17;
   case 120: return 17;
   case 110: return 17;
   case 90: return 17;
   case 80: return 17;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_3DSTATE_STENCIL_BUFFER_SurfacePitch_start  32
#define GFX125_3DSTATE_STENCIL_BUFFER_SurfacePitch_start  32
#define GFX12_3DSTATE_STENCIL_BUFFER_SurfacePitch_start  32
#define GFX11_3DSTATE_STENCIL_BUFFER_SurfacePitch_start  32
#define GFX9_3DSTATE_STENCIL_BUFFER_SurfacePitch_start  32
#define GFX8_3DSTATE_STENCIL_BUFFER_SurfacePitch_start  32

static inline uint32_t ATTRIBUTE_PURE
_3DSTATE_STENCIL_BUFFER_SurfacePitch_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 32;
   case 125: return 32;
   case 120: return 32;
   case 110: return 32;
   case 90: return 32;
   case 80: return 32;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* CLEAR_COLOR */


#ifndef GFX125_CLEAR_COLOR_length
#define GFX125_CLEAR_COLOR_length  8
#endif
#ifndef GFX12_CLEAR_COLOR_length
#define GFX12_CLEAR_COLOR_length  8
#endif
#ifndef GFX11_CLEAR_COLOR_length
#define GFX11_CLEAR_COLOR_length  8
#endif

static inline uint32_t ATTRIBUTE_PURE
CLEAR_COLOR_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 8;
   case 120: return 8;
   case 110: return 8;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* CPS_STATE */


#ifndef GFX20_CPS_STATE_length
#define GFX20_CPS_STATE_length  8
#endif
#ifndef GFX125_CPS_STATE_length
#define GFX125_CPS_STATE_length  8
#endif
#ifndef GFX12_CPS_STATE_length
#define GFX12_CPS_STATE_length  8
#endif

static inline uint32_t ATTRIBUTE_PURE
CPS_STATE_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 8;
   case 125: return 8;
   case 120: return 8;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* MI_BATCH_BUFFER_START */


#ifndef GFX20_MI_BATCH_BUFFER_START_length
#define GFX20_MI_BATCH_BUFFER_START_length  3
#endif
#ifndef GFX125_MI_BATCH_BUFFER_START_length
#define GFX125_MI_BATCH_BUFFER_START_length  3
#endif
#ifndef GFX12_MI_BATCH_BUFFER_START_length
#define GFX12_MI_BATCH_BUFFER_START_length  3
#endif
#ifndef GFX11_MI_BATCH_BUFFER_START_length
#define GFX11_MI_BATCH_BUFFER_START_length  3
#endif
#ifndef GFX9_MI_BATCH_BUFFER_START_length
#define GFX9_MI_BATCH_BUFFER_START_length  3
#endif
#ifndef GFX8_MI_BATCH_BUFFER_START_length
#define GFX8_MI_BATCH_BUFFER_START_length  3
#endif

static inline uint32_t ATTRIBUTE_PURE
MI_BATCH_BUFFER_START_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 3;
   case 125: return 3;
   case 120: return 3;
   case 110: return 3;
   case 90: return 3;
   case 80: return 3;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* MI_BATCH_BUFFER_START::Batch Buffer Start Address */


#define GFX20_MI_BATCH_BUFFER_START_BatchBufferStartAddress_bits  62
#define GFX125_MI_BATCH_BUFFER_START_BatchBufferStartAddress_bits  62
#define GFX12_MI_BATCH_BUFFER_START_BatchBufferStartAddress_bits  62
#define GFX11_MI_BATCH_BUFFER_START_BatchBufferStartAddress_bits  62
#define GFX9_MI_BATCH_BUFFER_START_BatchBufferStartAddress_bits  62
#define GFX8_MI_BATCH_BUFFER_START_BatchBufferStartAddress_bits  46

static inline uint32_t ATTRIBUTE_PURE
MI_BATCH_BUFFER_START_BatchBufferStartAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 62;
   case 125: return 62;
   case 120: return 62;
   case 110: return 62;
   case 90: return 62;
   case 80: return 46;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_MI_BATCH_BUFFER_START_BatchBufferStartAddress_start  34
#define GFX125_MI_BATCH_BUFFER_START_BatchBufferStartAddress_start  34
#define GFX12_MI_BATCH_BUFFER_START_BatchBufferStartAddress_start  34
#define GFX11_MI_BATCH_BUFFER_START_BatchBufferStartAddress_start  34
#define GFX9_MI_BATCH_BUFFER_START_BatchBufferStartAddress_start  34
#define GFX8_MI_BATCH_BUFFER_START_BatchBufferStartAddress_start  34

static inline uint32_t ATTRIBUTE_PURE
MI_BATCH_BUFFER_START_BatchBufferStartAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 34;
   case 125: return 34;
   case 120: return 34;
   case 110: return 34;
   case 90: return 34;
   case 80: return 34;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* MI_REPORT_PERF_COUNT */


#ifndef GFX20_MI_REPORT_PERF_COUNT_length
#define GFX20_MI_REPORT_PERF_COUNT_length  4
#endif
#ifndef GFX125_MI_REPORT_PERF_COUNT_length
#define GFX125_MI_REPORT_PERF_COUNT_length  4
#endif
#ifndef GFX12_MI_REPORT_PERF_COUNT_length
#define GFX12_MI_REPORT_PERF_COUNT_length  4
#endif
#ifndef GFX11_MI_REPORT_PERF_COUNT_length
#define GFX11_MI_REPORT_PERF_COUNT_length  4
#endif
#ifndef GFX9_MI_REPORT_PERF_COUNT_length
#define GFX9_MI_REPORT_PERF_COUNT_length  4
#endif
#ifndef GFX8_MI_REPORT_PERF_COUNT_length
#define GFX8_MI_REPORT_PERF_COUNT_length  4
#endif

static inline uint32_t ATTRIBUTE_PURE
MI_REPORT_PERF_COUNT_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 4;
   case 125: return 4;
   case 120: return 4;
   case 110: return 4;
   case 90: return 4;
   case 80: return 4;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* MI_REPORT_PERF_COUNT::Memory Address */


#define GFX20_MI_REPORT_PERF_COUNT_MemoryAddress_bits  58
#define GFX125_MI_REPORT_PERF_COUNT_MemoryAddress_bits  58
#define GFX12_MI_REPORT_PERF_COUNT_MemoryAddress_bits  58
#define GFX11_MI_REPORT_PERF_COUNT_MemoryAddress_bits  58
#define GFX9_MI_REPORT_PERF_COUNT_MemoryAddress_bits  58
#define GFX8_MI_REPORT_PERF_COUNT_MemoryAddress_bits  58

static inline uint32_t ATTRIBUTE_PURE
MI_REPORT_PERF_COUNT_MemoryAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 58;
   case 125: return 58;
   case 120: return 58;
   case 110: return 58;
   case 90: return 58;
   case 80: return 58;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_MI_REPORT_PERF_COUNT_MemoryAddress_start  38
#define GFX125_MI_REPORT_PERF_COUNT_MemoryAddress_start  38
#define GFX12_MI_REPORT_PERF_COUNT_MemoryAddress_start  38
#define GFX11_MI_REPORT_PERF_COUNT_MemoryAddress_start  38
#define GFX9_MI_REPORT_PERF_COUNT_MemoryAddress_start  38
#define GFX8_MI_REPORT_PERF_COUNT_MemoryAddress_start  38

static inline uint32_t ATTRIBUTE_PURE
MI_REPORT_PERF_COUNT_MemoryAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 38;
   case 125: return 38;
   case 120: return 38;
   case 110: return 38;
   case 90: return 38;
   case 80: return 38;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* MI_STORE_DATA_IMM */


#ifndef GFX20_MI_STORE_DATA_IMM_length
#define GFX20_MI_STORE_DATA_IMM_length  4
#endif
#ifndef GFX125_MI_STORE_DATA_IMM_length
#define GFX125_MI_STORE_DATA_IMM_length  4
#endif
#ifndef GFX12_MI_STORE_DATA_IMM_length
#define GFX12_MI_STORE_DATA_IMM_length  4
#endif
#ifndef GFX11_MI_STORE_DATA_IMM_length
#define GFX11_MI_STORE_DATA_IMM_length  4
#endif
#ifndef GFX9_MI_STORE_DATA_IMM_length
#define GFX9_MI_STORE_DATA_IMM_length  4
#endif
#ifndef GFX8_MI_STORE_DATA_IMM_length
#define GFX8_MI_STORE_DATA_IMM_length  4
#endif

static inline uint32_t ATTRIBUTE_PURE
MI_STORE_DATA_IMM_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 4;
   case 125: return 4;
   case 120: return 4;
   case 110: return 4;
   case 90: return 4;
   case 80: return 4;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* MI_STORE_DATA_IMM::Address */


#define GFX20_MI_STORE_DATA_IMM_Address_bits  46
#define GFX125_MI_STORE_DATA_IMM_Address_bits  46
#define GFX12_MI_STORE_DATA_IMM_Address_bits  46
#define GFX11_MI_STORE_DATA_IMM_Address_bits  46
#define GFX9_MI_STORE_DATA_IMM_Address_bits  46
#define GFX8_MI_STORE_DATA_IMM_Address_bits  46

static inline uint32_t ATTRIBUTE_PURE
MI_STORE_DATA_IMM_Address_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 46;
   case 125: return 46;
   case 120: return 46;
   case 110: return 46;
   case 90: return 46;
   case 80: return 46;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_MI_STORE_DATA_IMM_Address_start  34
#define GFX125_MI_STORE_DATA_IMM_Address_start  34
#define GFX12_MI_STORE_DATA_IMM_Address_start  34
#define GFX11_MI_STORE_DATA_IMM_Address_start  34
#define GFX9_MI_STORE_DATA_IMM_Address_start  34
#define GFX8_MI_STORE_DATA_IMM_Address_start  34

static inline uint32_t ATTRIBUTE_PURE
MI_STORE_DATA_IMM_Address_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 34;
   case 125: return 34;
   case 120: return 34;
   case 110: return 34;
   case 90: return 34;
   case 80: return 34;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* MI_STORE_DATA_IMM::Immediate Data */


#define GFX20_MI_STORE_DATA_IMM_ImmediateData_bits  64
#define GFX125_MI_STORE_DATA_IMM_ImmediateData_bits  64
#define GFX12_MI_STORE_DATA_IMM_ImmediateData_bits  64
#define GFX11_MI_STORE_DATA_IMM_ImmediateData_bits  64
#define GFX9_MI_STORE_DATA_IMM_ImmediateData_bits  64
#define GFX8_MI_STORE_DATA_IMM_ImmediateData_bits  64

static inline uint32_t ATTRIBUTE_PURE
MI_STORE_DATA_IMM_ImmediateData_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 64;
   case 110: return 64;
   case 90: return 64;
   case 80: return 64;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_MI_STORE_DATA_IMM_ImmediateData_start  96
#define GFX125_MI_STORE_DATA_IMM_ImmediateData_start  96
#define GFX12_MI_STORE_DATA_IMM_ImmediateData_start  96
#define GFX11_MI_STORE_DATA_IMM_ImmediateData_start  96
#define GFX9_MI_STORE_DATA_IMM_ImmediateData_start  96
#define GFX8_MI_STORE_DATA_IMM_ImmediateData_start  96

static inline uint32_t ATTRIBUTE_PURE
MI_STORE_DATA_IMM_ImmediateData_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 96;
   case 125: return 96;
   case 120: return 96;
   case 110: return 96;
   case 90: return 96;
   case 80: return 96;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* MI_STORE_REGISTER_MEM */


#ifndef GFX20_MI_STORE_REGISTER_MEM_length
#define GFX20_MI_STORE_REGISTER_MEM_length  4
#endif
#ifndef GFX125_MI_STORE_REGISTER_MEM_length
#define GFX125_MI_STORE_REGISTER_MEM_length  4
#endif
#ifndef GFX12_MI_STORE_REGISTER_MEM_length
#define GFX12_MI_STORE_REGISTER_MEM_length  4
#endif
#ifndef GFX11_MI_STORE_REGISTER_MEM_length
#define GFX11_MI_STORE_REGISTER_MEM_length  4
#endif
#ifndef GFX9_MI_STORE_REGISTER_MEM_length
#define GFX9_MI_STORE_REGISTER_MEM_length  4
#endif
#ifndef GFX8_MI_STORE_REGISTER_MEM_length
#define GFX8_MI_STORE_REGISTER_MEM_length  4
#endif

static inline uint32_t ATTRIBUTE_PURE
MI_STORE_REGISTER_MEM_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 4;
   case 125: return 4;
   case 120: return 4;
   case 110: return 4;
   case 90: return 4;
   case 80: return 4;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* MI_STORE_REGISTER_MEM::Memory Address */


#define GFX20_MI_STORE_REGISTER_MEM_MemoryAddress_bits  62
#define GFX125_MI_STORE_REGISTER_MEM_MemoryAddress_bits  62
#define GFX12_MI_STORE_REGISTER_MEM_MemoryAddress_bits  62
#define GFX11_MI_STORE_REGISTER_MEM_MemoryAddress_bits  62
#define GFX9_MI_STORE_REGISTER_MEM_MemoryAddress_bits  62
#define GFX8_MI_STORE_REGISTER_MEM_MemoryAddress_bits  62

static inline uint32_t ATTRIBUTE_PURE
MI_STORE_REGISTER_MEM_MemoryAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 62;
   case 125: return 62;
   case 120: return 62;
   case 110: return 62;
   case 90: return 62;
   case 80: return 62;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_MI_STORE_REGISTER_MEM_MemoryAddress_start  66
#define GFX125_MI_STORE_REGISTER_MEM_MemoryAddress_start  66
#define GFX12_MI_STORE_REGISTER_MEM_MemoryAddress_start  66
#define GFX11_MI_STORE_REGISTER_MEM_MemoryAddress_start  66
#define GFX9_MI_STORE_REGISTER_MEM_MemoryAddress_start  66
#define GFX8_MI_STORE_REGISTER_MEM_MemoryAddress_start  66

static inline uint32_t ATTRIBUTE_PURE
MI_STORE_REGISTER_MEM_MemoryAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 66;
   case 125: return 66;
   case 120: return 66;
   case 110: return 66;
   case 90: return 66;
   case 80: return 66;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE */


#ifndef GFX20_RENDER_SURFACE_STATE_length
#define GFX20_RENDER_SURFACE_STATE_length  16
#endif
#ifndef GFX125_RENDER_SURFACE_STATE_length
#define GFX125_RENDER_SURFACE_STATE_length  16
#endif
#ifndef GFX12_RENDER_SURFACE_STATE_length
#define GFX12_RENDER_SURFACE_STATE_length  16
#endif
#ifndef GFX11_RENDER_SURFACE_STATE_length
#define GFX11_RENDER_SURFACE_STATE_length  16
#endif
#ifndef GFX9_RENDER_SURFACE_STATE_length
#define GFX9_RENDER_SURFACE_STATE_length  16
#endif
#ifndef GFX8_RENDER_SURFACE_STATE_length
#define GFX8_RENDER_SURFACE_STATE_length  16
#endif

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 16;
   case 125: return 16;
   case 120: return 16;
   case 110: return 16;
   case 90: return 16;
   case 80: return 16;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* RENDER_SURFACE_STATE::Alpha Clear Color */


#define GFX11_RENDER_SURFACE_STATE_AlphaClearColor_bits  32
#define GFX9_RENDER_SURFACE_STATE_AlphaClearColor_bits  32
#define GFX8_RENDER_SURFACE_STATE_AlphaClearColor_bits  1

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_AlphaClearColor_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 0;
   case 120: return 0;
   case 110: return 32;
   case 90: return 32;
   case 80: return 1;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX11_RENDER_SURFACE_STATE_AlphaClearColor_start  480
#define GFX9_RENDER_SURFACE_STATE_AlphaClearColor_start  480
#define GFX8_RENDER_SURFACE_STATE_AlphaClearColor_start  252

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_AlphaClearColor_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 0;
   case 120: return 0;
   case 110: return 480;
   case 90: return 480;
   case 80: return 252;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Auxiliary Surface Base Address */


#define GFX20_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_bits  52
#define GFX125_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_bits  52
#define GFX12_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_bits  52
#define GFX11_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_bits  52
#define GFX9_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_bits  52
#define GFX8_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_bits  52

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 52;
   case 125: return 52;
   case 120: return 52;
   case 110: return 52;
   case 90: return 52;
   case 80: return 52;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_start  332
#define GFX125_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_start  332
#define GFX12_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_start  332
#define GFX11_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_start  332
#define GFX9_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_start  332
#define GFX8_RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_start  332

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_AuxiliarySurfaceBaseAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 332;
   case 125: return 332;
   case 120: return 332;
   case 110: return 332;
   case 90: return 332;
   case 80: return 332;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Auxiliary Surface Pitch */


#define GFX20_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_bits  10
#define GFX125_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_bits  10
#define GFX12_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_bits  9
#define GFX11_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_bits  9
#define GFX9_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_bits  9
#define GFX8_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_bits  9

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_AuxiliarySurfacePitch_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 10;
   case 125: return 10;
   case 120: return 9;
   case 110: return 9;
   case 90: return 9;
   case 80: return 9;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_start  195
#define GFX125_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_start  195
#define GFX12_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_start  195
#define GFX11_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_start  195
#define GFX9_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_start  195
#define GFX8_RENDER_SURFACE_STATE_AuxiliarySurfacePitch_start  195

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_AuxiliarySurfacePitch_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 195;
   case 125: return 195;
   case 120: return 195;
   case 110: return 195;
   case 90: return 195;
   case 80: return 195;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Blue Clear Color */


#define GFX11_RENDER_SURFACE_STATE_BlueClearColor_bits  32
#define GFX9_RENDER_SURFACE_STATE_BlueClearColor_bits  32
#define GFX8_RENDER_SURFACE_STATE_BlueClearColor_bits  1

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_BlueClearColor_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 0;
   case 120: return 0;
   case 110: return 32;
   case 90: return 32;
   case 80: return 1;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX11_RENDER_SURFACE_STATE_BlueClearColor_start  448
#define GFX9_RENDER_SURFACE_STATE_BlueClearColor_start  448
#define GFX8_RENDER_SURFACE_STATE_BlueClearColor_start  253

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_BlueClearColor_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 0;
   case 120: return 0;
   case 110: return 448;
   case 90: return 448;
   case 80: return 253;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Clear Value Address */


#define GFX125_RENDER_SURFACE_STATE_ClearValueAddress_bits  42
#define GFX12_RENDER_SURFACE_STATE_ClearValueAddress_bits  42
#define GFX11_RENDER_SURFACE_STATE_ClearValueAddress_bits  42

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_ClearValueAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 42;
   case 120: return 42;
   case 110: return 42;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX125_RENDER_SURFACE_STATE_ClearValueAddress_start  390
#define GFX12_RENDER_SURFACE_STATE_ClearValueAddress_start  390
#define GFX11_RENDER_SURFACE_STATE_ClearValueAddress_start  390

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_ClearValueAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 390;
   case 120: return 390;
   case 110: return 390;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Depth */


#define GFX20_RENDER_SURFACE_STATE_Depth_bits  11
#define GFX125_RENDER_SURFACE_STATE_Depth_bits  11
#define GFX12_RENDER_SURFACE_STATE_Depth_bits  11
#define GFX11_RENDER_SURFACE_STATE_Depth_bits  11
#define GFX9_RENDER_SURFACE_STATE_Depth_bits  11
#define GFX8_RENDER_SURFACE_STATE_Depth_bits  11

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_Depth_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 11;
   case 125: return 11;
   case 120: return 11;
   case 110: return 11;
   case 90: return 11;
   case 80: return 11;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RENDER_SURFACE_STATE_Depth_start  117
#define GFX125_RENDER_SURFACE_STATE_Depth_start  117
#define GFX12_RENDER_SURFACE_STATE_Depth_start  117
#define GFX11_RENDER_SURFACE_STATE_Depth_start  117
#define GFX9_RENDER_SURFACE_STATE_Depth_start  117
#define GFX8_RENDER_SURFACE_STATE_Depth_start  117

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_Depth_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 117;
   case 125: return 117;
   case 120: return 117;
   case 110: return 117;
   case 90: return 117;
   case 80: return 117;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Green Clear Color */


#define GFX11_RENDER_SURFACE_STATE_GreenClearColor_bits  32
#define GFX9_RENDER_SURFACE_STATE_GreenClearColor_bits  32
#define GFX8_RENDER_SURFACE_STATE_GreenClearColor_bits  1

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_GreenClearColor_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 0;
   case 120: return 0;
   case 110: return 32;
   case 90: return 32;
   case 80: return 1;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX11_RENDER_SURFACE_STATE_GreenClearColor_start  416
#define GFX9_RENDER_SURFACE_STATE_GreenClearColor_start  416
#define GFX8_RENDER_SURFACE_STATE_GreenClearColor_start  254

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_GreenClearColor_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 0;
   case 120: return 0;
   case 110: return 416;
   case 90: return 416;
   case 80: return 254;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Height */


#define GFX20_RENDER_SURFACE_STATE_Height_bits  14
#define GFX125_RENDER_SURFACE_STATE_Height_bits  14
#define GFX12_RENDER_SURFACE_STATE_Height_bits  14
#define GFX11_RENDER_SURFACE_STATE_Height_bits  14
#define GFX9_RENDER_SURFACE_STATE_Height_bits  14
#define GFX8_RENDER_SURFACE_STATE_Height_bits  14

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_Height_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 14;
   case 125: return 14;
   case 120: return 14;
   case 110: return 14;
   case 90: return 14;
   case 80: return 14;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RENDER_SURFACE_STATE_Height_start  80
#define GFX125_RENDER_SURFACE_STATE_Height_start  80
#define GFX12_RENDER_SURFACE_STATE_Height_start  80
#define GFX11_RENDER_SURFACE_STATE_Height_start  80
#define GFX9_RENDER_SURFACE_STATE_Height_start  80
#define GFX8_RENDER_SURFACE_STATE_Height_start  80

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_Height_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 80;
   case 125: return 80;
   case 120: return 80;
   case 110: return 80;
   case 90: return 80;
   case 80: return 80;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Red Clear Color */


#define GFX11_RENDER_SURFACE_STATE_RedClearColor_bits  32
#define GFX9_RENDER_SURFACE_STATE_RedClearColor_bits  32
#define GFX8_RENDER_SURFACE_STATE_RedClearColor_bits  1

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_RedClearColor_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 0;
   case 120: return 0;
   case 110: return 32;
   case 90: return 32;
   case 80: return 1;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX11_RENDER_SURFACE_STATE_RedClearColor_start  384
#define GFX9_RENDER_SURFACE_STATE_RedClearColor_start  384
#define GFX8_RENDER_SURFACE_STATE_RedClearColor_start  255

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_RedClearColor_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 0;
   case 125: return 0;
   case 120: return 0;
   case 110: return 384;
   case 90: return 384;
   case 80: return 255;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Render Target View Extent */


#define GFX20_RENDER_SURFACE_STATE_RenderTargetViewExtent_bits  11
#define GFX125_RENDER_SURFACE_STATE_RenderTargetViewExtent_bits  11
#define GFX12_RENDER_SURFACE_STATE_RenderTargetViewExtent_bits  11
#define GFX11_RENDER_SURFACE_STATE_RenderTargetViewExtent_bits  11
#define GFX9_RENDER_SURFACE_STATE_RenderTargetViewExtent_bits  11
#define GFX8_RENDER_SURFACE_STATE_RenderTargetViewExtent_bits  11

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_RenderTargetViewExtent_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 11;
   case 125: return 11;
   case 120: return 11;
   case 110: return 11;
   case 90: return 11;
   case 80: return 11;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RENDER_SURFACE_STATE_RenderTargetViewExtent_start  135
#define GFX125_RENDER_SURFACE_STATE_RenderTargetViewExtent_start  135
#define GFX12_RENDER_SURFACE_STATE_RenderTargetViewExtent_start  135
#define GFX11_RENDER_SURFACE_STATE_RenderTargetViewExtent_start  135
#define GFX9_RENDER_SURFACE_STATE_RenderTargetViewExtent_start  135
#define GFX8_RENDER_SURFACE_STATE_RenderTargetViewExtent_start  135

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_RenderTargetViewExtent_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 135;
   case 125: return 135;
   case 120: return 135;
   case 110: return 135;
   case 90: return 135;
   case 80: return 135;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Surface Base Address */


#define GFX20_RENDER_SURFACE_STATE_SurfaceBaseAddress_bits  64
#define GFX125_RENDER_SURFACE_STATE_SurfaceBaseAddress_bits  64
#define GFX12_RENDER_SURFACE_STATE_SurfaceBaseAddress_bits  64
#define GFX11_RENDER_SURFACE_STATE_SurfaceBaseAddress_bits  64
#define GFX9_RENDER_SURFACE_STATE_SurfaceBaseAddress_bits  64
#define GFX8_RENDER_SURFACE_STATE_SurfaceBaseAddress_bits  64

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_SurfaceBaseAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 64;
   case 110: return 64;
   case 90: return 64;
   case 80: return 64;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RENDER_SURFACE_STATE_SurfaceBaseAddress_start  256
#define GFX125_RENDER_SURFACE_STATE_SurfaceBaseAddress_start  256
#define GFX12_RENDER_SURFACE_STATE_SurfaceBaseAddress_start  256
#define GFX11_RENDER_SURFACE_STATE_SurfaceBaseAddress_start  256
#define GFX9_RENDER_SURFACE_STATE_SurfaceBaseAddress_start  256
#define GFX8_RENDER_SURFACE_STATE_SurfaceBaseAddress_start  256

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_SurfaceBaseAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 256;
   case 125: return 256;
   case 120: return 256;
   case 110: return 256;
   case 90: return 256;
   case 80: return 256;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Surface Pitch */


#define GFX20_RENDER_SURFACE_STATE_SurfacePitch_bits  18
#define GFX125_RENDER_SURFACE_STATE_SurfacePitch_bits  18
#define GFX12_RENDER_SURFACE_STATE_SurfacePitch_bits  18
#define GFX11_RENDER_SURFACE_STATE_SurfacePitch_bits  18
#define GFX9_RENDER_SURFACE_STATE_SurfacePitch_bits  18
#define GFX8_RENDER_SURFACE_STATE_SurfacePitch_bits  18

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_SurfacePitch_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 18;
   case 125: return 18;
   case 120: return 18;
   case 110: return 18;
   case 90: return 18;
   case 80: return 18;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RENDER_SURFACE_STATE_SurfacePitch_start  96
#define GFX125_RENDER_SURFACE_STATE_SurfacePitch_start  96
#define GFX12_RENDER_SURFACE_STATE_SurfacePitch_start  96
#define GFX11_RENDER_SURFACE_STATE_SurfacePitch_start  96
#define GFX9_RENDER_SURFACE_STATE_SurfacePitch_start  96
#define GFX8_RENDER_SURFACE_STATE_SurfacePitch_start  96

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_SurfacePitch_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 96;
   case 125: return 96;
   case 120: return 96;
   case 110: return 96;
   case 90: return 96;
   case 80: return 96;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Surface Type */


#define GFX20_RENDER_SURFACE_STATE_SurfaceType_bits  3
#define GFX125_RENDER_SURFACE_STATE_SurfaceType_bits  3
#define GFX12_RENDER_SURFACE_STATE_SurfaceType_bits  3
#define GFX11_RENDER_SURFACE_STATE_SurfaceType_bits  3
#define GFX9_RENDER_SURFACE_STATE_SurfaceType_bits  3
#define GFX8_RENDER_SURFACE_STATE_SurfaceType_bits  3

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_SurfaceType_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 3;
   case 125: return 3;
   case 120: return 3;
   case 110: return 3;
   case 90: return 3;
   case 80: return 3;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RENDER_SURFACE_STATE_SurfaceType_start  29
#define GFX125_RENDER_SURFACE_STATE_SurfaceType_start  29
#define GFX12_RENDER_SURFACE_STATE_SurfaceType_start  29
#define GFX11_RENDER_SURFACE_STATE_SurfaceType_start  29
#define GFX9_RENDER_SURFACE_STATE_SurfaceType_start  29
#define GFX8_RENDER_SURFACE_STATE_SurfaceType_start  29

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_SurfaceType_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 29;
   case 125: return 29;
   case 120: return 29;
   case 110: return 29;
   case 90: return 29;
   case 80: return 29;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RENDER_SURFACE_STATE::Width */


#define GFX20_RENDER_SURFACE_STATE_Width_bits  14
#define GFX125_RENDER_SURFACE_STATE_Width_bits  14
#define GFX12_RENDER_SURFACE_STATE_Width_bits  14
#define GFX11_RENDER_SURFACE_STATE_Width_bits  14
#define GFX9_RENDER_SURFACE_STATE_Width_bits  14
#define GFX8_RENDER_SURFACE_STATE_Width_bits  14

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_Width_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 14;
   case 125: return 14;
   case 120: return 14;
   case 110: return 14;
   case 90: return 14;
   case 80: return 14;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RENDER_SURFACE_STATE_Width_start  64
#define GFX125_RENDER_SURFACE_STATE_Width_start  64
#define GFX12_RENDER_SURFACE_STATE_Width_start  64
#define GFX11_RENDER_SURFACE_STATE_Width_start  64
#define GFX9_RENDER_SURFACE_STATE_Width_start  64
#define GFX8_RENDER_SURFACE_STATE_Width_start  64

static inline uint32_t ATTRIBUTE_PURE
RENDER_SURFACE_STATE_Width_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 64;
   case 110: return 64;
   case 90: return 64;
   case 80: return 64;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RT_DISPATCH_GLOBALS */


#ifndef GFX20_RT_DISPATCH_GLOBALS_length
#define GFX20_RT_DISPATCH_GLOBALS_length  20
#endif
#ifndef GFX125_RT_DISPATCH_GLOBALS_length
#define GFX125_RT_DISPATCH_GLOBALS_length  20
#endif

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 20;
   case 125: return 20;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* RT_DISPATCH_GLOBALS::Callable Group Table */


#define GFX20_RT_DISPATCH_GLOBALS_CallableGroupTable_bits  64
#define GFX125_RT_DISPATCH_GLOBALS_CallableGroupTable_bits  64

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_CallableGroupTable_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RT_DISPATCH_GLOBALS_CallableGroupTable_start  512
#define GFX125_RT_DISPATCH_GLOBALS_CallableGroupTable_start  512

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_CallableGroupTable_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 512;
   case 125: return 512;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RT_DISPATCH_GLOBALS::Hit Group Table */


#define GFX20_RT_DISPATCH_GLOBALS_HitGroupTable_bits  64
#define GFX125_RT_DISPATCH_GLOBALS_HitGroupTable_bits  64

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_HitGroupTable_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RT_DISPATCH_GLOBALS_HitGroupTable_start  256
#define GFX125_RT_DISPATCH_GLOBALS_HitGroupTable_start  256

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_HitGroupTable_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 256;
   case 125: return 256;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RT_DISPATCH_GLOBALS::Launch Depth */


#define GFX20_RT_DISPATCH_GLOBALS_LaunchDepth_bits  32
#define GFX125_RT_DISPATCH_GLOBALS_LaunchDepth_bits  32

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_LaunchDepth_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 32;
   case 125: return 32;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RT_DISPATCH_GLOBALS_LaunchDepth_start  480
#define GFX125_RT_DISPATCH_GLOBALS_LaunchDepth_start  480

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_LaunchDepth_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 480;
   case 125: return 480;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RT_DISPATCH_GLOBALS::Launch Height */


#define GFX20_RT_DISPATCH_GLOBALS_LaunchHeight_bits  32
#define GFX125_RT_DISPATCH_GLOBALS_LaunchHeight_bits  32

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_LaunchHeight_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 32;
   case 125: return 32;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RT_DISPATCH_GLOBALS_LaunchHeight_start  448
#define GFX125_RT_DISPATCH_GLOBALS_LaunchHeight_start  448

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_LaunchHeight_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 448;
   case 125: return 448;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RT_DISPATCH_GLOBALS::Launch Width */


#define GFX20_RT_DISPATCH_GLOBALS_LaunchWidth_bits  32
#define GFX125_RT_DISPATCH_GLOBALS_LaunchWidth_bits  32

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_LaunchWidth_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 32;
   case 125: return 32;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RT_DISPATCH_GLOBALS_LaunchWidth_start  416
#define GFX125_RT_DISPATCH_GLOBALS_LaunchWidth_start  416

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_LaunchWidth_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 416;
   case 125: return 416;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* RT_DISPATCH_GLOBALS::Miss Group Table */


#define GFX20_RT_DISPATCH_GLOBALS_MissGroupTable_bits  64
#define GFX125_RT_DISPATCH_GLOBALS_MissGroupTable_bits  64

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_MissGroupTable_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_RT_DISPATCH_GLOBALS_MissGroupTable_start  320
#define GFX125_RT_DISPATCH_GLOBALS_MissGroupTable_start  320

static inline uint32_t ATTRIBUTE_PURE
RT_DISPATCH_GLOBALS_MissGroupTable_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 320;
   case 125: return 320;
   case 120: return 0;
   case 110: return 0;
   case 90: return 0;
   case 80: return 0;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


/* VERTEX_BUFFER_STATE */


#ifndef GFX20_VERTEX_BUFFER_STATE_length
#define GFX20_VERTEX_BUFFER_STATE_length  4
#endif
#ifndef GFX125_VERTEX_BUFFER_STATE_length
#define GFX125_VERTEX_BUFFER_STATE_length  4
#endif
#ifndef GFX12_VERTEX_BUFFER_STATE_length
#define GFX12_VERTEX_BUFFER_STATE_length  4
#endif
#ifndef GFX11_VERTEX_BUFFER_STATE_length
#define GFX11_VERTEX_BUFFER_STATE_length  4
#endif
#ifndef GFX9_VERTEX_BUFFER_STATE_length
#define GFX9_VERTEX_BUFFER_STATE_length  4
#endif
#ifndef GFX8_VERTEX_BUFFER_STATE_length
#define GFX8_VERTEX_BUFFER_STATE_length  4
#endif

static inline uint32_t ATTRIBUTE_PURE
VERTEX_BUFFER_STATE_length(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 4;
   case 125: return 4;
   case 120: return 4;
   case 110: return 4;
   case 90: return 4;
   case 80: return 4;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



/* VERTEX_BUFFER_STATE::Buffer Starting Address */


#define GFX20_VERTEX_BUFFER_STATE_BufferStartingAddress_bits  64
#define GFX125_VERTEX_BUFFER_STATE_BufferStartingAddress_bits  64
#define GFX12_VERTEX_BUFFER_STATE_BufferStartingAddress_bits  64
#define GFX11_VERTEX_BUFFER_STATE_BufferStartingAddress_bits  64
#define GFX9_VERTEX_BUFFER_STATE_BufferStartingAddress_bits  64
#define GFX8_VERTEX_BUFFER_STATE_BufferStartingAddress_bits  64

static inline uint32_t ATTRIBUTE_PURE
VERTEX_BUFFER_STATE_BufferStartingAddress_bits(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 64;
   case 125: return 64;
   case 120: return 64;
   case 110: return 64;
   case 90: return 64;
   case 80: return 64;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}



#define GFX20_VERTEX_BUFFER_STATE_BufferStartingAddress_start  32
#define GFX125_VERTEX_BUFFER_STATE_BufferStartingAddress_start  32
#define GFX12_VERTEX_BUFFER_STATE_BufferStartingAddress_start  32
#define GFX11_VERTEX_BUFFER_STATE_BufferStartingAddress_start  32
#define GFX9_VERTEX_BUFFER_STATE_BufferStartingAddress_start  32
#define GFX8_VERTEX_BUFFER_STATE_BufferStartingAddress_start  32

static inline uint32_t ATTRIBUTE_PURE
VERTEX_BUFFER_STATE_BufferStartingAddress_start(const struct intel_device_info *devinfo)
{
   switch (devinfo->verx10) {
   case 200: return 32;
   case 125: return 32;
   case 120: return 32;
   case 110: return 32;
   case 90: return 32;
   case 80: return 32;
   case 75: return 0;
   case 70: return 0;
   case 60: return 0;
   case 50: return 0;
   case 45: return 0;
   case 40: return 0;
   default:
      unreachable("Invalid hardware generation");
   }
}


#ifdef __cplusplus
}
#endif

#endif /* GENX_BITS_H */