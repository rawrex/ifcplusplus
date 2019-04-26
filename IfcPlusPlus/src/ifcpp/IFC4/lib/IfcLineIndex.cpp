/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSegmentIndexSelect.h"
#include "ifcpp/IFC4/include/IfcLineIndex.h"

// TYPE IfcLineIndex = LIST [2:?] OF IfcPositiveInteger;
shared_ptr<BuildingObject> IfcLineIndex::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLineIndex> copy_self( new IfcLineIndex() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcLineIndex::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLINEINDEX("; }
	writeNumericTypeList( stream, m_vec );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLineIndex::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcLineIndex> IfcLineIndex::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLineIndex>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLineIndex>(); }
	shared_ptr<IfcLineIndex> type_object( new IfcLineIndex() );
	readTypeOfIntegerList( arg, type_object->m_vec );
	return type_object;
}
