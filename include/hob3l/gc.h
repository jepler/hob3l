/* -*- Mode: C -*- */
/* Copyright (C) 2018 by Henrik Theiling, License: GPLv3, see LICENSE file */

#ifndef __CP_GC_H
#define __CP_GC_H

#include <hob3l/gc_tam.h>
#include <hob3lbase/stream_tam.h>

/**
 * Print a string of characters that respresent a modifier in scad syntax.
 */
extern void cp_gc_modifier_put_scad(
    cp_stream_t *s,
    unsigned modifier);

/**
 * Translate a colour name into an rgb colour
 *
 * Return whether the translation was successful (true=success, false=failure).
 */
extern bool cp_color_by_name(
    cp_color_rgb_t *rgb,
    char const *name);

#endif /* __CP_GC_H */
