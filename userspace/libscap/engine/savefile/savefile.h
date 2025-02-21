/*
Copyright (C) 2022 The Falco Authors.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

*/
#pragma once

#include <stdint.h>
#include <stddef.h>

#define SCAP_HANDLE_T struct savefile_engine

typedef struct scap_reader scap_reader_t;
typedef struct _scap_machine_info scap_machine_info;
struct scap_proclist;
struct scap_addrlist;
struct scap_userlist;

struct savefile_engine
{
	char* m_lasterr;
	scap_reader_t* m_reader;
	uint64_t m_unexpected_block_readsize;
	char* m_reader_evt_buf;
	size_t m_reader_evt_buf_size;
	uint32_t m_last_evt_dump_flags;
};

