#ifndef _OAUTH2_INT_H_
#define _OAUTH2_INT_H_

/***************************************************************************
 *
 * Copyright (C) 2018-2019 - ZmartZone Holding BV - www.zmartzone.eu
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * @Author: Hans Zandbelt - hans.zandbelt@zmartzone.eu
 *
 **************************************************************************/

#include "oauth2/cfg.h"
#include "oauth2/http.h"
#include "oauth2/log.h"
#include "oauth2/util.h"

#include <cjose/cjose.h>

char *oauth2_verify_options_set_introspect_url(oauth2_log_t *log,
					       const char *value,
					       const oauth2_nv_list_t *params,
					       oauth2_cfg_token_verify_t *);
char *oauth2_verify_options_set_metadata_url(oauth2_log_t *log,
					     const char *value,
					     const oauth2_nv_list_t *params,
					     oauth2_cfg_token_verify_t *);

#endif /* _OAUTH2_INT_H_ */