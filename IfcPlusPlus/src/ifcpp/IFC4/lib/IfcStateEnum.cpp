/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcStateEnum.h"

// TYPE IfcStateEnum = ENUMERATION OF	(READWRITE	,READONLY	,LOCKED	,READWRITELOCKED	,READONLYLOCKED);
shared_ptr<BuildingObject> IfcStateEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStateEnum> copy_self( new IfcStateEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcStateEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSTATEENUM("; }
	switch( m_enum )
	{
		case ENUM_READWRITE:	stream << ".READWRITE."; break;
		case ENUM_READONLY:	stream << ".READONLY."; break;
		case ENUM_LOCKED:	stream << ".LOCKED."; break;
		case ENUM_READWRITELOCKED:	stream << ".READWRITELOCKED."; break;
		case ENUM_READONLYLOCKED:	stream << ".READONLYLOCKED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcStateEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_READWRITE:	return L"READWRITE";
		case ENUM_READONLY:	return L"READONLY";
		case ENUM_LOCKED:	return L"LOCKED";
		case ENUM_READWRITELOCKED:	return L"READWRITELOCKED";
		case ENUM_READONLYLOCKED:	return L"READONLYLOCKED";
	}
	return L"";
}
shared_ptr<IfcStateEnum> IfcStateEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcStateEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcStateEnum>(); }
	shared_ptr<IfcStateEnum> type_object( new IfcStateEnum() );
	if( boost::iequals( arg, L".READWRITE." ) )
	{
		type_object->m_enum = IfcStateEnum::ENUM_READWRITE;
	}
	else if( boost::iequals( arg, L".READONLY." ) )
	{
		type_object->m_enum = IfcStateEnum::ENUM_READONLY;
	}
	else if( boost::iequals( arg, L".LOCKED." ) )
	{
		type_object->m_enum = IfcStateEnum::ENUM_LOCKED;
	}
	else if( boost::iequals( arg, L".READWRITELOCKED." ) )
	{
		type_object->m_enum = IfcStateEnum::ENUM_READWRITELOCKED;
	}
	else if( boost::iequals( arg, L".READONLYLOCKED." ) )
	{
		type_object->m_enum = IfcStateEnum::ENUM_READONLYLOCKED;
	}
	return type_object;
}
