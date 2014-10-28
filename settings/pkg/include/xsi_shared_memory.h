/*
 * Copyright 2011, Haiku Inc. All rights reserved.
 * Distributed under the terms of the MIT License.
 */
#ifndef KERNEL_XSI_SHARED_MEMORY_H
#define KERNEL_XSI_SHARED_MEMORY_H


#include "shm.h"
#include <sys/cdefs.h>

__BEGIN_DECLS

extern void	xsi_shm_init();
typedef unsigned long status_t;

/* user calls */
status_t _user_xsi_shmat(int id, const void* address, int flags, void** _returnAddress); 
int _user_xsi_shmctl(int id, int command, struct shmid_ds* buffer); 
int	_user_xsi_shmdt(const void* address);
int	_user_xsi_shmget(key_t key, size_t size, int flags);

/* POSIX XSI shared memory syscalls */
extern status_t     _kern_xsi_shmat(int id, const void* address, int flags,
						void** _returnAddress);
extern int			_kern_xsi_shmctl(int id, int command,
						struct shmid_ds* buffer);
extern int			_kern_xsi_shmdt(const void* address);
extern int			_kern_xsi_shmget(key_t key, size_t size, int flags);


__END_DECLS

#endif	/* KERNEL_XSI_SHARED_MEMORY_H */
