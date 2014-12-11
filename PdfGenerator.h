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

#ifndef PDFGENERATOR_H_
#define PDFGENERATOR_H_

#include <stdint.h>
#include <stddef.h>
#include <Magick++.h>

class QIODevice;
class QString;
class QImage;
class Dpm;

class PdfGenerator
{
public:
	/**
	 * \brief Generates PDF from TIFF files in specified directory.
	 *
	 * \param file_path The full path to the TIFF files.
	 * \return True on success, false on failure.
	 */
	static bool generatePdf(QString const& dir_path);
	
private:

};

#endif
