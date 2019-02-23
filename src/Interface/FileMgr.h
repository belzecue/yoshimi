/*
    fileMgr.h

    Copyright 2019 Will Godfrey

    This file is part of yoshimi, which is free software: you can redistribute
    it and/or modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either version 2 of
    the License, or (at your option) any later version.

    yoshimi is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE.   See the GNU General Public License (version 2 or
    later) for more details.

    You should have received a copy of the GNU General Public License along with
    yoshimi; if not, write to the Free Software Foundation, Inc., 51 Franklin
    Street, Fifth Floor, Boston, MA  02110-1301, USA.

    Created February 2019
*/

#ifndef FILEMGR_H
#define FILEMGR_H

#include <cmath>
#include <string>

using namespace std;

#include "globals.h"

class FileMgr
{
    public:
        FileMgr(){ }
        ~FileMgr(){ };
        bool TestFunc(int result);
        void legit_filename(string& fname);
        void legit_pathname(string& fname);
        string findfile(string path, string filename, string extension);
        string findleafname(string name);
        string setExtension(string fname, string ext);

};

#endif
