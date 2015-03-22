/*
*  Copyright (C) 2015 Orbitech
*
*  Authors: xqrzd
*
*  This program is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License version 2 as
*  published by the Free Software Foundation.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program; if not, write to the Free Software
*  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
*  MA 02110-1301, USA.
*/

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#endif

#include <stdio.h>
#include "Scanner.h"
#include "Memory.h"
#include "List.h"
#include "Reference.h"
#include "String2.h"

VOID InitReferenceCounting()
{
	HsInitializeListType();
	HsInitializeStringType();
}

VOID main()
{
	InitReferenceCounting();
	/*HZR_SCANNER scanner;

	HzrInitClamAv();

	if (HzrInitScanner(&scanner))
	{
		HzrLoadClamAvDatabase(&scanner, "C:\\ProgramData\\Hazard Shield", CL_DB_BYTECODE);

		HzrCompileClamAvDatabase(&scanner);

		HzrFreeScanner(&scanner);
	}*/

	getchar();

#ifdef _DEBUG
	_CrtDumpMemoryLeaks();
#endif
}