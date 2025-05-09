/*
 * Copyright (c) 2020-2021 The Linux Foundation. All rights reserved.
 *
 * Copyright (c) 2022, 2024 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *    * Redistributions in binary form must reproduce the above
 *      copyright notice, this list of conditions and the following
 *      disclaimer in the documentation and/or other materials provided
 *      with the distribution.
 *    * Neither the name of The Linux Foundation. nor the names of its
 *      contributors may be used to endorse or promote products derived
 *      from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Copyright (c) 2023-2024 Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#ifndef __QTIGRALLOCDEFS_H__
#define __QTIGRALLOCDEFS_H__

// From gralloc_priv.h

/* Gralloc usage bits indicating the type of allocation that should be used */
/* Refer to BufferUsage in hardware/interfaces/graphics/common/<ver>/types.hal */

/* The bits below are in officially defined vendor space
 * i.e bits 28-31 and 48-63*/
/* Non linear, Universal Bandwidth Compression */
#define GRALLOC_USAGE_PRIVATE_ALLOC_UBWC (UINT32_C(1) << 28)

/* Set this for allocating uncached memory (using O_DSYNC),
 * cannot be used with noncontiguous heaps */
#define GRALLOC_USAGE_PRIVATE_UNCACHED (UINT32_C(1) << 29)

/* This flag is used to indicate 10 bit format.
 * When both GRALLOC_USAGE_PRIVATE_ALLOC_UBWC & GRALLOC_USAGE_PRIVATE_10BIT
 * are set then it will indicate UBWC_TP10 format.
 * When only GRALLOC_USAGE_PRIVATE_10BIT is set it will indicate linear P010/P210 format.
 */
#define GRALLOC_USAGE_PRIVATE_10BIT (UINT32_C(1) << 30)

/* This flag is used for SECURE display usecase */
#define GRALLOC_USAGE_PRIVATE_SECURE_DISPLAY (UINT32_C(1) << 31)

/* unused legacy flags */
#define GRALLOC_USAGE_PRIVATE_MM_HEAP 0
#define GRALLOC_USAGE_PRIVATE_IOMMU_HEAP 0
#define GRALLOC_USAGE_PRIVATE_10BIT_TP 0

/* This flag is set for HEIF usecase */
#define GRALLOC_USAGE_PRIVATE_HEIF (UINT32_C(1) << 27)

/* This flag is used to indicate video NV21 format */
#define GRALLOC_USAGE_PRIVATE_VIDEO_NV21_ENCODER 1ULL << 48

/* This flag indicates PI format is being used */
#define GRALLOC_USAGE_PRIVATE_ALLOC_UBWC_PI      1ULL << 49

/* This flag is set while CDSP accesses the buffer */
#define GRALLOC_USAGE_PRIVATE_CDSP               1ULL << 50

/* This flag is set for WFD usecase */
#define GRALLOC_USAGE_PRIVATE_WFD                1ULL << 51

/* This flag indicates video HW usage */
#define GRALLOC_USAGE_PRIVATE_VIDEO_HW           1ULL << 52

/* This flag indicates trusted VM use case */
#define GRALLOC_USAGE_PRIVATE_TRUSTED_VM         1ULL << 53

/* This flag is used to indicate No UBWC-P support */
#define GRALLOC_USAGE_PRIVATE_NO_UBWC_P          1ULL << 54

/* This flag is used to indicate UBWC_NV124R format usage */
#define GRALLOC_USAGE_PRIVATE_ALLOC_UBWC_4R      1ULL << 55

/* Bit 56 is reserved */

/* This flag is used to indicate UBWC - 2:1 compression ratio */
#define GRALLOC_USAGE_PRIVATE_UBWC_L_2_TO_1      1ULL << 57

/* This flag is used to indicate multiview use case */
#define GRALLOC_USAGE_PRIVATE_MULTIVIEW      1ULL << 58

/* This flag is used to indicate UBWC - 8:5 compression ratio */
#define GRALLOC_USAGE_PRIVATE_UBWC_L_8_TO_5      1ULL << 59

/* Bit 60 is reserved */

// OEM specific HAL formats
#define HAL_PIXEL_FORMAT_RGBA_5551 6
#define HAL_PIXEL_FORMAT_RGBA_4444 7
#define HAL_PIXEL_FORMAT_NV12_ENCODEABLE 0x102
#define HAL_PIXEL_FORMAT_NV21_ENCODEABLE 0x7FA30C00
#define HAL_PIXEL_FORMAT_YCbCr_420_SP_VENUS 0x7FA30C04
#define HAL_PIXEL_FORMAT_YCbCr_420_SP_TILED 0x7FA30C03
#define HAL_PIXEL_FORMAT_YCbCr_420_SP 0x109
#define HAL_PIXEL_FORMAT_YCrCb_420_SP_ADRENO 0x7FA30C01
#define HAL_PIXEL_FORMAT_YCrCb_422_SP 0x10B
#define HAL_PIXEL_FORMAT_R_8 0x10D
#define HAL_PIXEL_FORMAT_RG_88 0x10E
#define HAL_PIXEL_FORMAT_YCbCr_444_SP 0x10F
#define HAL_PIXEL_FORMAT_YCrCb_444_SP 0x110
#define HAL_PIXEL_FORMAT_YCrCb_422_I 0x111
#define HAL_PIXEL_FORMAT_BGRX_8888 0x112
#define HAL_PIXEL_FORMAT_NV21_ZSL 0x113
#define HAL_PIXEL_FORMAT_YCrCb_420_SP_VENUS 0x114
#define HAL_PIXEL_FORMAT_BGR_565 0x115
#define HAL_PIXEL_FORMAT_RAW8 0x123
#define HAL_PIXEL_FORMAT_NV12_HEIF 0x116

// 10 bit
#define HAL_PIXEL_FORMAT_ARGB_2101010 0x117
#define HAL_PIXEL_FORMAT_RGBX_1010102 0x118
#define HAL_PIXEL_FORMAT_XRGB_2101010 0x119
#define HAL_PIXEL_FORMAT_BGRA_1010102 0x11A
#define HAL_PIXEL_FORMAT_ABGR_2101010 0x11B
#define HAL_PIXEL_FORMAT_BGRX_1010102 0x11C
#define HAL_PIXEL_FORMAT_XBGR_2101010 0x11D
#define HAL_PIXEL_FORMAT_YCbCr_420_P010 0x36  // HAL_PIXEL_FORMAT_YCBCR_P010
#define HAL_PIXEL_FORMAT_YCbCr_420_P010_UBWC 0x124
#define HAL_PIXEL_FORMAT_YCbCr_420_P010_VENUS 0x7FA30C0A
#define HAL_PIXEL_FORMAT_YCbCr_422_P210_UBWC 0x133
#define HAL_PIXEL_FORMAT_YCbCr_422_P210 0x3c

#define HAL_PIXEL_FORMAT_CbYCrY_422_I 0x120
#define HAL_PIXEL_FORMAT_BGR_888 0x121

#define HAL_PIXEL_FORMAT_INTERLACE 0x180

// Camera utils format
#define HAL_PIXEL_FORMAT_NV12_LINEAR_FLEX 0x125
#define HAL_PIXEL_FORMAT_NV12_UBWC_FLEX 0x126
#define HAL_PIXEL_FORMAT_MULTIPLANAR_FLEX 0x127
#define HAL_PIXEL_FORMAT_NV12_UBWC_FLEX_2_BATCH 0x128
#define HAL_PIXEL_FORMAT_NV12_UBWC_FLEX_4_BATCH 0x129
#define HAL_PIXEL_FORMAT_NV12_UBWC_FLEX_8_BATCH 0x130
#define HAL_PIXEL_FORMAT_NV12_FLEX_2_BATCH 0x140
#define HAL_PIXEL_FORMAT_NV12_FLEX_4_BATCH 0x141
#define HAL_PIXEL_FORMAT_NV12_FLEX_8_BATCH 0x142

// FSC Formats
#define HAL_PIXEL_FORMAT_RGB888_UBWC_FSC 0x131
#define HAL_PIXEL_FORMAT_RGB101010_UBWC_FSC 0x132

// v4l2_fourcc('Y', 'U', 'Y', 'L'). 24 bpp YUYV 4:2:2 10 bit per component
#define HAL_PIXEL_FORMAT_YCbCr_422_I_10BIT 0x4C595559

// v4l2_fourcc('Y', 'B', 'W', 'C'). 10 bit per component. This compressed
// format reduces the memory access bandwidth
#define HAL_PIXEL_FORMAT_YCbCr_422_I_10BIT_COMPRESSED 0x43574259

// UBWC aligned Venus format
#define HAL_PIXEL_FORMAT_YCbCr_420_SP_VENUS_UBWC 0x7FA30C06
#define HAL_PIXEL_FORMAT_YCbCr_420_SP_4R_UBWC 0x7FA30C07
#define HAL_PIXEL_FORMAT_YCbCr_420_TP10_UBWC 0x7FA30C09

// Khronos ASTC formats
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_4x4_KHR 0x93B0
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_5x4_KHR 0x93B1
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_5x5_KHR 0x93B2
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_6x5_KHR 0x93B3
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_6x6_KHR 0x93B4
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_8x5_KHR 0x93B5
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_8x6_KHR 0x93B6
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_8x8_KHR 0x93B7
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_10x5_KHR 0x93B8
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_10x6_KHR 0x93B9
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_10x8_KHR 0x93BA
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#define HAL_PIXEL_FORMAT_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#define HAL_PIXEL_FORMAT_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD

/*Legacy Colorspace values - Values maps to ColorSpace_t in qdMetadata.h*/
#define HAL_CSC_ITU_R_601 0
#define HAL_CSC_ITU_R_601_FR 1
#define HAL_CSC_ITU_R_709 2
#define HAL_CSC_ITU_R_2020 3
#define HAL_CSC_ITU_R_2020_FR 4
#define HAL_CSC_ITU_R_709_FR 5

enum { BUFFER_TYPE_UI = 0, BUFFER_TYPE_VIDEO };

#endif  //__QTIGRALLOCDEFS_H__
