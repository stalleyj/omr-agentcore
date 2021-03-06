/*******************************************************************************
 * Copyright 2016 IBM Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/


#ifndef ibmras_common_common_h
#define ibmras_common_common_h

#include <sstream>
namespace ibmras {
namespace common {

template <class T>
std::string itoa(T t) {
#ifdef _WINDOWS
    return std::to_string(static_cast<long long>(t));
#else
	std::stringstream s;
	s << t;
	return s.str();
#endif
}

}
}


#endif /* ibmras_common_common_h */
