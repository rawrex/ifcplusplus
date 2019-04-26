/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSimpleValue.h"
#include "ifcpp/IFC4/include/IfcLabel.h"

// TYPE IfcLabel = STRING(255);
IfcLabel::IfcLabel( std::wstring value ) { m_value = value; }
shared_ptr<BuildingObject> IfcLabel::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLabel> copy_self( new IfcLabel() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcLabel::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLABEL("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLabel::toString() const
{
	return m_value;
}
shared_ptr<IfcLabel> IfcLabel::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLabel>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLabel>(); }
	shared_ptr<IfcLabel> type_object( new IfcLabel() );
	readString( arg, type_object->m_value );
	return type_object;
}
