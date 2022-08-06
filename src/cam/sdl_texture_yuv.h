/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright (C) 2022, Ideas on Board Oy
 *
 * sdl_texture_yuv.h - SDL YUV Textures
 */

#pragma once

#include "sdl_texture.h"

class SDLTextureNV12 : public SDLTexture
{
public:
	SDLTextureNV12(const SDL_Rect &rect, unsigned int stride);
	void update(const std::vector<libcamera::Span<const uint8_t>> &data) override;
};

class SDLTextureYUYV : public SDLTexture
{
public:
	SDLTextureYUYV(const SDL_Rect &rect, unsigned int stride);
	void update(const std::vector<libcamera::Span<const uint8_t>> &data) override;
};
