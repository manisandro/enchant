/* enchant
 * Copyright (C) 2003 Dom Lachowicz
 * Copyright (C) 2016-2023 Reuben Thomas
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along along with this program; if not, see
 * <https://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders
 * give permission to link the code of this program with
 * non-LGPL Spelling Provider libraries (eg: a MSFT Office
 * spell checker backend) and distribute linked combinations including
 * the two.  You must obey the GNU Lesser General Public License in all
 * respects for all of the code used other than said providers.  If you modify
 * this file, you may extend this exception to your version of the
 * file, but you are not obligated to do so.  If you do not wish to
 * do so, delete this exception statement from your version.
 */

#ifndef PWL_H
#define PWL_H

#include "enchant.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct str_enchant_pwl EnchantPWL;

/* Create and initialise a new, empty PWL */
EnchantPWL* enchant_pwl_init(void);
EnchantPWL* enchant_pwl_init_with_file(const char * file);

void enchant_pwl_add(EnchantPWL * me, const char *const word, ssize_t len);
void enchant_pwl_remove(EnchantPWL * me, const char *const word, ssize_t len);
int enchant_pwl_check(EnchantPWL * me, const char *const word, ssize_t len);
void enchant_pwl_free(EnchantPWL* me);

#ifdef __cplusplus
}
#endif

#endif /* PWL_H */
