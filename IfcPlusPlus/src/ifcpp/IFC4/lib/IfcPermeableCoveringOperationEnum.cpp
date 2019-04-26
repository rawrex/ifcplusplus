/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcPermeableCoveringOperationEnum.h"

// TYPE IfcPermeableCoveringOperationEnum = ENUMERATION OF	(GRILL	,LOUVER	,SCREEN	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcPermeableCoveringOperationEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPermeableCoveringOperationEnum> copy_self( new IfcPermeableCoveringOperationEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcPermeableCoveringOperationEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPERMEABLECOVERINGOPERATIONENUM("; }
	switch( m_enum )
	{
		case ENUM_GRILL:	stream << ".GRILL."; break;
		case ENUM_LOUVER:	stream << ".LOUVER."; break;
		case ENUM_SCREEN:	stream << ".SCREEN."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcPermeableCoveringOperationEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_GRILL:	return L"GRILL";
		case ENUM_LOUVER:	return L"LOUVER";
		case ENUM_SCREEN:	return L"SCREEN";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcPermeableCoveringOperationEnum> IfcPermeableCoveringOperationEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPermeableCoveringOperationEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPermeableCoveringOperationEnum>(); }
	shared_ptr<IfcPermeableCoveringOperationEnum> type_object( new IfcPermeableCoveringOperationEnum() );
	if( boost::iequals( arg, L".GRILL." ) )
	{
		type_object->m_enum = IfcPermeableCoveringOperationEnum::ENUM_GRILL;
	}
	else if( boost::iequals( arg, L".LOUVER." ) )
	{
		type_object->m_enum = IfcPermeableCoveringOperationEnum::ENUM_LOUVER;
	}
	else if( boost::iequals( arg, L".SCREEN." ) )
	{
		type_object->m_enum = IfcPermeableCoveringOperationEnum::ENUM_SCREEN;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcPermeableCoveringOperationEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPermeableCoveringOperationEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
