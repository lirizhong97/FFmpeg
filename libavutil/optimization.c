/*
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/**
 * @file
 * Optimization
 */

Optimization g_opt = {0};

void av_optimization_init(void)
{
    memset(&g_opt, 0x00, sizeof(Optimization));
}

void av_optimization_frame_err(int frame_err)
{
    g_opt.frame_err = frame_err;
}

void av_optimization_decode_err(int decode_err)
{
    g_opt.decode_err = decode_err;
}

void av_optimization_marker_flag(int marker_flag)
{
    g_opt.marker_flag = marker_flag;
}

bool av_optimization_is_frame_err(void)
{
    return g_opt.frame_err;
}

void av_optimization_is_decode_err(void)
{
    return g_opt.decode_err;
}

void av_optimization_is_marker_flag(void)
{
    return g_opt.marker_flag;
}
