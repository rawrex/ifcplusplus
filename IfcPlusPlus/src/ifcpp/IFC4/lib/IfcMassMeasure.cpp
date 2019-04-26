/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcMassMeasure.h"

// TYPE IfcMassMeasure = REAL;
IfcMassMeasure::IfcMassMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcMassMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMassMeasure> copy_self( new IfcMassMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcMassMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMASSMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcMassMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcMassMeasure> IfcMassMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcMassMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcMassMeasure>(); }
	shared_ptr<IfcMassMeasure> type_object( new IfcMassMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
