/***************************************************************************

 Copyright (C) 2007  Sergey Prokhorchuk

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA

***************************************************************************/

#ifndef __NGPVIEWTEXMAN_H__
#define __NGPVIEWTEXMAN_H__

#include <string>
#include <map>

#include <ngput/p3dglext.h>
#include <ngput/p3dimage.h>

class NGPTexManager
 {
  public           :

                   NGPTexManager      (const char         *ModelPath,
                                       const char         *TexPath);
                  ~NGPTexManager      ();

  GLuint           LoadTexture        (const char         *TexName);

  private          :

  bool             TryLoadTexture     (P3DImageData       *ImageData,
                                       const std::string  &Path,
                                       const std::string  &Name) const;

  std::map<std::string,GLuint>         Handles;
  P3DImageFmtHandlerComposite          ImageFmtHandler;
  std::string                          ModelPath;
  std::string                          TexPath;
 };

#endif

