/*============================================================================
  CMake - Cross Platform Makefile Generator
  Copyright 2013 Stephen Kelly <steveire@gmail.com>

  Distributed under the OSI-approved BSD License (the "License");
  see accompanying file Copyright.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the License for more information.
============================================================================*/
#ifndef cmDocumentConcepts_h
#define cmDocumentConcepts_h

#include "cmStandardIncludes.h"

class cmDocumentConcepts
{
public:
  static void GetDocumentation(std::vector<cmDocumentationEntry>&);
};

#endif