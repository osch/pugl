/*
  Copyright 2012-2020 David Robillard <d@drobilla.net>

  Permission to use, copy, modify, and/or distribute this software for any
  purpose with or without fee is hereby granted, provided that the above
  copyright notice and this permission notice appear in all copies.

  THIS SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

/**
   @file stub.h
   @brief Definition of generic stub backend functions.
*/

#ifndef PUGL_DETAIL_STUB_H
#define PUGL_DETAIL_STUB_H

#include "pugl/detail/types.h"
#include "pugl/pugl.h"

PUGL_BEGIN_DECLS

static inline PuglStatus
puglStubConfigure(PuglView* view)
{
	(void)view;
	return PUGL_SUCCESS;
}

static inline PuglStatus
puglStubCreate(PuglView* view)
{
	(void)view;
	return PUGL_SUCCESS;
}

static inline PuglStatus
puglStubDestroy(PuglView* view)
{
	(void)view;
	return PUGL_SUCCESS;
}

static inline PuglStatus
puglStubEnter(PuglView* view, const PuglEventExpose* expose, PuglRects* rects)
{
	(void)view;
	(void)expose;
	(void)rects;
	return PUGL_SUCCESS;
}

static inline PuglStatus
puglStubLeave(PuglView* view, const PuglEventExpose* expose, PuglRects* rects)
{
	(void)view;
	(void)expose;
	(void)rects;
	return PUGL_SUCCESS;
}

static inline void*
puglStubGetContext(PuglView* view)
{
	(void)view;
	return NULL;
}

PUGL_END_DECLS

#endif // PUGL_DETAIL_STUB_H
