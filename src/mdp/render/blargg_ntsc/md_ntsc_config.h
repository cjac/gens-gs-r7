/* Configure library by modifying this file */

#ifndef MD_NTSC_CONFIG_H
#define MD_NTSC_CONFIG_H

/* Format of source pixels */
#define MD_NTSC_IN_FORMAT MD_NTSC_RGB16
/* #define MD_NTSC_IN_FORMAT MD_NTSC_BGR9 */

/* The following affect the built-in blitter only; a custom blitter can
handle things however it wants. */

/* Bits per pixel of output. Can be 15, 16, 32, or 24 (same as 32). */
#define MD_NTSC_OUT_DEPTH 16

/* Type of input pixel values */
#define MD_NTSC_IN_T unsigned short

/* For each pixel, this is the basic operation:
output_color = MD_NTSC_ADJ_IN( MD_NTSC_IN_T ) */

#endif