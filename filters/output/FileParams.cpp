/*
    Scan Tailor - Interactive post-processing tool for scanned pages.
    Copyright (C) 2007-2009  Joseph Artsimovich <joseph_a@mail.ru>

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

#include "FileParams.h"
#include <QDomDocument>
#include <QDomElement>
#include <QString>

namespace output
{

FileParams::FileParams(QDomElement const& el)
:	m_fileFormat(parseFileFormat(el.attribute("fileFormat")))
{
}

QDomElement
FileParams::toXml(QDomDocument& doc, QString const& name) const
{
	QDomElement el(doc.createElement(name));
	el.setAttribute("fileFormat", formatFileFormat(m_fileFormat));
	return el;
}

FileParams::FileFormat
FileParams::parseFileFormat(QString const& str)
{
	if (str == "tiff") {
		return FILE_TIFF;
	} else if (str == "pdf") {
		return FILE_PDF;
	} else {
		return FILE_TIFF;
	}
}

QString
FileParams::formatFileFormat(FileParams::FileFormat const format)
{
	char const* str = "";
	switch (format) {
		case FILE_TIFF:
			str = "tiff";
			break;
		case FILE_PDF:
			str = "pdf";
			break;
	}
	return QString::fromAscii(str);
}

} // namespace output
