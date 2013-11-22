/*
 * ZMap Copyright 2013 Regents of the University of Michigan 
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy
 * of the License at http://www.apache.org/licenses/LICENSE-2.0
 */

#include <stdint.h>

#ifndef CYCLIC_H
#define CYCLIC_H

typedef struct cyclic cyclic_t;

cyclic_t* cyclic_init(uint32_t, uint32_t);

// get next IP address to scan
uint32_t cyclic_get_next_ip(cyclic_t *);

// what IP address was returned last
uint32_t cyclic_get_curr_ip(cyclic_t *);

// what primitive root was generated for this current scan
uint32_t cyclic_get_primroot(cyclic_t *);

// how many IPs were blacklisted
uint32_t cyclic_get_blacklisted(cyclic_t *);

void cyclic_free(cyclic_t *);

#endif
