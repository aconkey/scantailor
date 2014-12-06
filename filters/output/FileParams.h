/*
    Scan Tailor - Interactive post-processing tool for scanned pages.
    Copyright (C)  Joseph Artsimovich <joseph.artsimovich@gmail.com>

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

#ifndef OUTPUT_FILEPARAMS_H_
#define OUTPUT_FILEPARAMS_H_

class QDomDocument;
class QDomElement;

namespace output
{

class FileParams
{
public:
	enum FileFormat { FILE_TIFF, FILE_PDF };
	
	FileParams(): m_fileFormat(FILE_TIFF) {}
	
	FileParams(QDomElement const& el);
	
	QDomElement toXml(QDomDocument& doc, QString const& name) const;
	
	FileFormat fileFormat() const { return m_fileFormat; }
	
	void setFileFormat(FileFormat format) { m_fileFormat = format; }
	
private:
	static FileFormat parseFileFormat(QString const& str);
	
	static QString formatFileFormat(FileFormat format);
	
	FileFormat m_fileFormat;
};

} // namespace output

#endif
