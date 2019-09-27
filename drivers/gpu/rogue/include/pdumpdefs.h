/*************************************************************************/ /*!
@File
@Title          PDUMP definitions header
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@Description    PDUMP definitions header
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/

#if !defined (__PDUMPDEFS_H__)
#define __PDUMPDEFS_H__

/*! PDump Pixel Format Enumeration */
typedef enum _PDUMP_PIXEL_FORMAT_
{
	PVRSRV_PDUMP_PIXEL_FORMAT_UNSUPPORTED = 0,
	PVRSRV_PDUMP_PIXEL_FORMAT_RGB8 = 1,
	PVRSRV_PDUMP_PIXEL_FORMAT_RGB332 = 2,
	PVRSRV_PDUMP_PIXEL_FORMAT_KRGB555 = 3,
	PVRSRV_PDUMP_PIXEL_FORMAT_RGB565 = 4,
	PVRSRV_PDUMP_PIXEL_FORMAT_ARGB4444 = 5,
	PVRSRV_PDUMP_PIXEL_FORMAT_ARGB1555 = 6,
	PVRSRV_PDUMP_PIXEL_FORMAT_RGB888 = 7,
	PVRSRV_PDUMP_PIXEL_FORMAT_ARGB8888 = 8,
	PVRSRV_PDUMP_PIXEL_FORMAT_YUV8 = 9,
//	PVRSRV_PDUMP_PIXEL_FORMAT_AYUV4444 = 10,
	PVRSRV_PDUMP_PIXEL_FORMAT_VY0UY1_8888 = 11,
	PVRSRV_PDUMP_PIXEL_FORMAT_UY0VY1_8888 = 12,
	PVRSRV_PDUMP_PIXEL_FORMAT_Y0UY1V_8888 = 13,
	PVRSRV_PDUMP_PIXEL_FORMAT_Y0VY1U_8888 = 14,
	PVRSRV_PDUMP_PIXEL_FORMAT_YUV888 = 15,
	PVRSRV_PDUMP_PIXEL_FORMAT_UYVY10101010 = 16,
	PVRSRV_PDUMP_PIXEL_FORMAT_VYAUYA8888 = 17,
	PVRSRV_PDUMP_PIXEL_FORMAT_AYUV8888 = 18,
	PVRSRV_PDUMP_PIXEL_FORMAT_AYUV2101010 = 19,
	PVRSRV_PDUMP_PIXEL_FORMAT_YUV101010 = 20,
	PVRSRV_PDUMP_PIXEL_FORMAT_PL12Y8 = 21,
	PVRSRV_PDUMP_PIXEL_FORMAT_YUV_IMC2 = 22,
	PVRSRV_PDUMP_PIXEL_FORMAT_YUV_YV12 = 23,
	PVRSRV_PDUMP_PIXEL_FORMAT_YUV_PL8 = 24,
	PVRSRV_PDUMP_PIXEL_FORMAT_YUV_PL12 = 25,
	PVRSRV_PDUMP_PIXEL_FORMAT_422PL12YUV8 = 26,
	PVRSRV_PDUMP_PIXEL_FORMAT_420PL12YUV8 = 27,
	PVRSRV_PDUMP_PIXEL_FORMAT_PL12Y10 = 28,
	PVRSRV_PDUMP_PIXEL_FORMAT_422PL12YUV10 = 29,
	PVRSRV_PDUMP_PIXEL_FORMAT_420PL12YUV10 = 30,
	PVRSRV_PDUMP_PIXEL_FORMAT_ABGR8888 = 31,
	PVRSRV_PDUMP_PIXEL_FORMAT_BGRA8888 = 32,
	PVRSRV_PDUMP_PIXEL_FORMAT_ARGB8332 = 33,
	PVRSRV_PDUMP_PIXEL_FORMAT_RGB555 = 34,
	PVRSRV_PDUMP_PIXEL_FORMAT_F16 = 35,
	PVRSRV_PDUMP_PIXEL_FORMAT_F32 = 36,
	PVRSRV_PDUMP_PIXEL_FORMAT_L16 = 37,
	PVRSRV_PDUMP_PIXEL_FORMAT_L32 = 38,
	PVRSRV_PDUMP_PIXEL_FORMAT_RGBA8888 = 39,
	PVRSRV_PDUMP_PIXEL_FORMAT_ABGR4444 = 40,
	PVRSRV_PDUMP_PIXEL_FORMAT_RGBA4444 = 41,
	PVRSRV_PDUMP_PIXEL_FORMAT_BGRA4444 = 42,
	PVRSRV_PDUMP_PIXEL_FORMAT_ABGR1555 = 43,
	PVRSRV_PDUMP_PIXEL_FORMAT_RGBA5551 = 44,
	PVRSRV_PDUMP_PIXEL_FORMAT_BGRA5551 = 45,
	PVRSRV_PDUMP_PIXEL_FORMAT_BGR565 = 46,
	PVRSRV_PDUMP_PIXEL_FORMAT_A8 = 47,
	PVRSRV_PDUMP_PIXEL_FORMAT_F16F16F16F16 = 49,
	PVRSRV_PDUMP_PIXEL_FORMAT_A4 = 50,
	PVRSRV_PDUMP_PIXEL_FORMAT_ARGB2101010 = 51,
	PVRSRV_PDUMP_PIXEL_FORMAT_RSGSBS888 = 52,
	PVRSRV_PDUMP_PIXEL_FORMAT_F32F32F32F32 = 53,
	PVRSRV_PDUMP_PIXEL_FORMAT_F16F16 = 54,
	PVRSRV_PDUMP_PIXEL_FORMAT_F32F32 = 55,
	PVRSRV_PDUMP_PIXEL_FORMAT_F16F16F16 = 56,
	PVRSRV_PDUMP_PIXEL_FORMAT_F32F32F32 = 57,
	PVRSRV_PDUMP_PIXEL_FORMAT_U8 = 58,
	PVRSRV_PDUMP_PIXEL_FORMAT_U8U8 = 59,
	PVRSRV_PDUMP_PIXEL_FORMAT_U16 = 60,
	PVRSRV_PDUMP_PIXEL_FORMAT_U16U16 = 61,
	PVRSRV_PDUMP_PIXEL_FORMAT_U16U16U16U16 = 62,
	PVRSRV_PDUMP_PIXEL_FORMAT_U32 = 63,
	PVRSRV_PDUMP_PIXEL_FORMAT_U32U32 = 64,
	PVRSRV_PDUMP_PIXEL_FORMAT_U32U32U32U32 = 65,
	
	PVRSRV_PDUMP_PIXEL_FORMAT_FORCE_I32 = 0x7fffffff

} PDUMP_PIXEL_FORMAT;

/*! PDump addrmode */
#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_SHIFT			0
#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_MASK			0x000000FF 

#define PVRSRV_PDUMP_ADDRMODE_STRIDESENSE_SHIFT			8
#define PVRSRV_PDUMP_ADDRMODE_STRIDESENSE_NEGATIVE		(1 << PVRSRV_PDUMP_ADDRMODE_STRIDESENSE_SHIFT)

#define PVRSRV_PDUMP_ADDRMODE_BIFTILE_MODE_SHIFT		12
#define PVRSRV_PDUMP_ADDRMODE_BIFTILE_MODE_MASK			0x000FF000

#define PVRSRV_PDUMP_ADDRMODE_FBCMODE_SHIFT				20
#define PVRSRV_PDUMP_ADDRMODE_FBCMODE_MASK				0x00F00000

#define PVRSRV_PDUMP_ADDRMODE_FBCDECOR_SHIFT			24

#define PVRSRV_PDUMP_ADDRMODE_FBCCOMPAT_SHIFT			28
#define PVRSRV_PDUMP_ADDRMODE_FBCCOMPAT_MASK			0xF0000000

#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_STRIDE			(0 << PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_BIFTILE_STRIDE1 (1 << PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_BIFTILE_STRIDE2 (2 << PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_BIFTILE_STRIDE3 (3 << PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_BIFTILE_STRIDE4 (4 << PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_BIFTILE_STRIDE5 (5 << PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_BIFTILE_STRIDE6 (6 << PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_BIFTILE_STRIDE7 (7 << PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_TWIDDLED		(9 << PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_PAGETILED		(11 << PVRSRV_PDUMP_ADDRMODE_MEMFORMAT_SHIFT)

#define PVRSRV_PDUMP_ADDRMODE_FBCMODE_NONE				(0 << PVRSRV_PDUMP_ADDRMODE_FBCMODE_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_FBCMODE_8X8_DIRECT		(1 << PVRSRV_PDUMP_ADDRMODE_FBCMODE_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_FBCMODE_16X4_DIRECT		(2 << PVRSRV_PDUMP_ADDRMODE_FBCMODE_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_FBCMODE_32X2_DIRECT		(3 << PVRSRV_PDUMP_ADDRMODE_FBCMODE_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_FBCMODE_8X8_INDIRECT		(4 << PVRSRV_PDUMP_ADDRMODE_FBCMODE_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_FBCMODE_16X4_INDIRECT		(5 << PVRSRV_PDUMP_ADDRMODE_FBCMODE_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_FBCMODE_8X8_INDIRECT_4TILE	(6 << PVRSRV_PDUMP_ADDRMODE_FBCMODE_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_FBCMODE_16X4_INDIRECT_4TILE	(7 << PVRSRV_PDUMP_ADDRMODE_FBCMODE_SHIFT)

#define PVRSRV_PDUMP_ADDRMODE_FBC_DECOR					(1 << PVRSRV_PDUMP_ADDRMODE_FBCDECOR_SHIFT)

#define PVRSRV_PDUMP_ADDRMODE_FBCCOMPAT_BASE			(1 << PVRSRV_PDUMP_ADDRMODE_FBCCOMPAT_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_FBCCOMPAT_ENHANCED		(2 << PVRSRV_PDUMP_ADDRMODE_FBCCOMPAT_SHIFT)
#define PVRSRV_PDUMP_ADDRMODE_FBCCOMPAT_V2				(3 << PVRSRV_PDUMP_ADDRMODE_FBCCOMPAT_SHIFT)

/*! PDump Poll Operator */
typedef enum _PDUMP_POLL_OPERATOR
{
	PDUMP_POLL_OPERATOR_EQUAL = 0,
	PDUMP_POLL_OPERATOR_LESS = 1,
	PDUMP_POLL_OPERATOR_LESSEQUAL = 2,
	PDUMP_POLL_OPERATOR_GREATER = 3,
	PDUMP_POLL_OPERATOR_GREATEREQUAL = 4,
	PDUMP_POLL_OPERATOR_NOTEQUAL = 5,
} PDUMP_POLL_OPERATOR;


#define PVRSRV_PDUMP_MAX_FILENAME_SIZE			75  /*!< Max length of a pdump log file name */
#define PVRSRV_PDUMP_MAX_COMMENT_SIZE			350 /*!< Max length of a pdump comment */

/*!
	PDump MMU type
	(Maps to values listed in "PowerVR Tools.Pdump2 Script Functions.doc" Sec 2.13)
*/
typedef enum
{
	PDUMP_MMU_TYPE_4KPAGE_32BIT_STDTILE 	= 1,
	PDUMP_MMU_TYPE_VARPAGE_32BIT_STDTILE 	= 2,
	PDUMP_MMU_TYPE_4KPAGE_36BIT_EXTTILE 	= 3,
	PDUMP_MMU_TYPE_4KPAGE_32BIT_EXTTILE 	= 4,
	PDUMP_MMU_TYPE_4KPAGE_36BIT_STDTILE 	= 5,
	PDUMP_MMU_TYPE_VARPAGE_40BIT 			= 6,
	PDUMP_MMU_TYPE_VIDEO_40BIT_STDTILE		= 7,
	PDUMP_MMU_TYPE_VIDEO_40BIT_EXTTILE		= 8,
	PDUMP_MMU_TYPE_LAST
} PDUMP_MMU_TYPE;

#endif /* __PDUMPDEFS_H__ */

/*****************************************************************************
 End of file (pdumpdefs.h)
*****************************************************************************/

