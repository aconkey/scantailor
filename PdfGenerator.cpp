/*
    Scan Tailor - Interactive post-processing tool for scanned pages.
    Copyright (C) 2007-2008  Joseph Artsimovich <joseph_a@mail.ru>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

//#include "imageproc/Constants.h"
//#include <QtGlobal>
//#include <QFile>
//#include <QIODevice>
//#include <QImage>
//#include <QColor>
//#include <QVector>
//#include <QSize>
//#include <QDebug>
#include <QString>
#include <QDir>
#include <QDirIterator>
//#include <vector>
//#include <tiff.h>
//#include <tiffio.h>
//#include <string.h>
//#include <math.h>
//#include <assert.h>
#include "PdfGenerator.h"

bool
PdfGenerator::generatePdf(QString const& dir_path)
{
	if (dir_path.isEmpty()) {
		return false;
	}

	QDir dir(dir_path);

	if (!dir.exists()) {
		return false;
	}

	QDirIterator it(dir);

	if (!it.hasNext()) {
		return false;
	}
	
	

	return true;
}
