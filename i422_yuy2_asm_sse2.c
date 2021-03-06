#include "i422_yuy2.c"
#include "chroma_asm.h"

void cover_I422_YUY2_sse2( filter_t *p_filter, picture_t *p_source,
                                           picture_t *p_dest )
{
	I422_YUY2(p_filter, p_source, p_dest);
}

void cover_I422_YVYU_sse2( filter_t *p_filter, picture_t *p_source,
                                           picture_t *p_dest )
{
	I422_YVYU(p_filter, p_source, p_dest);
}

void cover_I422_UYVY_sse2( filter_t *p_filter, picture_t *p_source,
                                           picture_t *p_dest )
{
	I422_UYVY(p_filter, p_source, p_dest);
}

void cover_I422_cyuv_sse2( filter_t *p_filter, picture_t *p_source,
                                           picture_t *p_dest )
{
	I422_cyuv(p_filter, p_source, p_dest);
}

