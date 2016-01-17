/* Copyright 2015 Bernd Lehmann (der-b@der-b.com)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __ASTM_H__
#define __ASTM_H__

#include <stdint.h>
#include <sys/types.h>

typedef ssize_t ASTMRet;

#define ASTM_RET_SUCCESS     ( 0)
#define ASTM_RET_UNKNOWN     (-1)
#define ASTM_RET_ENDNOTFOUND (-2)

#include <astm/astm-1381-95.h>
#include <astm/astm-1394-91.h>

#endif
