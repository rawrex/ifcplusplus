/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcInventoryTypeEnum.h"

// TYPE IfcInventoryTypeEnum = ENUMERATION OF	(ASSETINVENTORY	,SPACEINVENTORY	,FURNITUREINVENTORY	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcInventoryTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcInventoryTypeEnum> copy_self( new IfcInventoryTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcInventoryTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCINVENTORYTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ASSETINVENTORY:	stream << ".ASSETINVENTORY."; break;
		case ENUM_SPACEINVENTORY:	stream << ".SPACEINVENTORY."; break;
		case ENUM_FURNITUREINVENTORY:	stream << ".FURNITUREINVENTORY."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcInventoryTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ASSETINVENTORY:	return L"ASSETINVENTORY";
		case ENUM_SPACEINVENTORY:	return L"SPACEINVENTORY";
		case ENUM_FURNITUREINVENTORY:	return L"FURNITUREINVENTORY";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcInventoryTypeEnum> IfcInventoryTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcInventoryTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcInventoryTypeEnum>(); }
	shared_ptr<IfcInventoryTypeEnum> type_object( new IfcInventoryTypeEnum() );
	if( boost::iequals( arg, L".ASSETINVENTORY." ) )
	{
		type_object->m_enum = IfcInventoryTypeEnum::ENUM_ASSETINVENTORY;
	}
	else if( boost::iequals( arg, L".SPACEINVENTORY." ) )
	{
		type_object->m_enum = IfcInventoryTypeEnum::ENUM_SPACEINVENTORY;
	}
	else if( boost::iequals( arg, L".FURNITUREINVENTORY." ) )
	{
		type_object->m_enum = IfcInventoryTypeEnum::ENUM_FURNITUREINVENTORY;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcInventoryTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcInventoryTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
