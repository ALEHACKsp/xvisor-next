#ifndef _LINUX_ERROR_H
#define _LINUX_ERROR_H

#include <vmm_error.h>

#define EFAIL			-(VMM_EFAIL)
#define EUNKNOWN		-(VMM_EUNKOWN)
#define ENOTAVAIL		-(VMM_ENOTAVAIL)
#define EALREADY		-(VMM_EALREADY)
#define EINVALID		-(VMM_EINVALID)
#define EOVERFLOW		-(VMM_EOVERFLOW)
#define ENOMEM			-(VMM_ENOMEM)
#define ENODEV			-(VMM_ENODEV)
#define ETIMEDOUT		-(VMM_ETIMEDOUT)

#endif /* defined(_LINUX_ERROR_H) */
