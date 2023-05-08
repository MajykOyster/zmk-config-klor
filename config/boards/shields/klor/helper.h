/*
 * helper.h
 *
 * Convenience macros simplifying ZMK's keymap configuration.
 * See https://github.com/urob/zmk-nodefree-config for documentation.
 */

#pragma once

#define ZMK_UNICODE_SINGLE(name, L0, L1, L2, L3) \
    UC_MACRO(name ## _lower, &kp L0 &kp L1 &kp L2 &kp L3) \
    UC_MODMORPH(name, &name ## _lower, &none)

#define ZMK_UNICODE_PAIR(name, L0, L1, L2, L3, U0, U1, U2, U3) \
    UC_MACRO(name ## _lower, &kp L0 &kp L1 &kp L2 &kp L3) \
    UC_MACRO(name ## _upper, &kp U0 &kp U1 &kp U2 &kp U3) \
    UC_MODMORPH(name, &name ## _lower, &name ## _upper)