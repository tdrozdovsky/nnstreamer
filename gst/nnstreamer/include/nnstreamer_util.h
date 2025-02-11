/* SPDX-License-Identifier: LGPL-2.1-only */
/**
 * NNStreamer Common Utility Header for Plug-Ins and Users
 * Copyright (C) 2021 MyungJoo Ham <myungjoo.ham@samsung.com>
 */
/**
 * @file  nnstreamer_util.h
 * @date  28 Jul 2021
 * @brief Optional NNStreamer utility functions for sub-plugin writers and users.
 * @see https://github.com/nnstreamer/nnstreamer
 * @author  MyungJoo Ham <myungjoo.ham@samsung.com>
 * @bug No known bugs except for NYI items
 */

#ifndef __NNSTREAMER_UTIL_H__
#define __NNSTREAMER_UTIL_H__

/**
 * @brief Utility to silence unused parameter warning for intentionally unused parameters (e.g., callback functions of a framework)
 */
#ifndef UNUSED
#define UNUSED(expr) do { (void)(expr); } while (0)
#endif

#endif /* __NNSTREAMER_UTIL_H__ */
