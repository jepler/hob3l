/* -*- Mode: C -*- */
/* Copyright (C) 2018 by Henrik Theiling, License: GPLv3, see LICENSE file */

#include "internal.h"

#ifdef PSTRACE
FILE *cp_debug_ps_file = NULL;
cp_stream_t *cp_debug_ps = NULL;
size_t cp_debug_ps_page_cnt = 0;
cp_ps_xform_t cp_debug_ps_xform = CP_PS_XFORM_MM;
cp_ps_opt_t const *cp_debug_ps_opt = NULL;
size_t cp_debug_ps_skip_page = 0;
#endif

extern int cp_trace_level(int i)
{
    static int level = 0;
    if (i > 0) { level += i; }
    int l = level;
    if (i < 0) { level += i; }
    return l;
}
