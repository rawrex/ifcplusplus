/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcCommunicationsApplianceTypeEnum.h"

// TYPE IfcCommunicationsApplianceTypeEnum = ENUMERATION OF	(ANTENNA	,COMPUTER	,FAX	,GATEWAY	,MODEM	,NETWORKAPPLIANCE	,NETWORKBRIDGE	,NETWORKHUB	,PRINTER	,REPEATER	,ROUTER	,SCANNER	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcCommunicationsApplianceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCommunicationsApplianceTypeEnum> copy_self( new IfcCommunicationsApplianceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcCommunicationsApplianceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCOMMUNICATIONSAPPLIANCETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ANTENNA:	stream << ".ANTENNA."; break;
		case ENUM_COMPUTER:	stream << ".COMPUTER."; break;
		case ENUM_FAX:	stream << ".FAX."; break;
		case ENUM_GATEWAY:	stream << ".GATEWAY."; break;
		case ENUM_MODEM:	stream << ".MODEM."; break;
		case ENUM_NETWORKAPPLIANCE:	stream << ".NETWORKAPPLIANCE."; break;
		case ENUM_NETWORKBRIDGE:	stream << ".NETWORKBRIDGE."; break;
		case ENUM_NETWORKHUB:	stream << ".NETWORKHUB."; break;
		case ENUM_PRINTER:	stream << ".PRINTER."; break;
		case ENUM_REPEATER:	stream << ".REPEATER."; break;
		case ENUM_ROUTER:	stream << ".ROUTER."; break;
		case ENUM_SCANNER:	stream << ".SCANNER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcCommunicationsApplianceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ANTENNA:	return L"ANTENNA";
		case ENUM_COMPUTER:	return L"COMPUTER";
		case ENUM_FAX:	return L"FAX";
		case ENUM_GATEWAY:	return L"GATEWAY";
		case ENUM_MODEM:	return L"MODEM";
		case ENUM_NETWORKAPPLIANCE:	return L"NETWORKAPPLIANCE";
		case ENUM_NETWORKBRIDGE:	return L"NETWORKBRIDGE";
		case ENUM_NETWORKHUB:	return L"NETWORKHUB";
		case ENUM_PRINTER:	return L"PRINTER";
		case ENUM_REPEATER:	return L"REPEATER";
		case ENUM_ROUTER:	return L"ROUTER";
		case ENUM_SCANNER:	return L"SCANNER";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcCommunicationsApplianceTypeEnum> IfcCommunicationsApplianceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCommunicationsApplianceTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCommunicationsApplianceTypeEnum>(); }
	shared_ptr<IfcCommunicationsApplianceTypeEnum> type_object( new IfcCommunicationsApplianceTypeEnum() );
	if( boost::iequals( arg, L".ANTENNA." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_ANTENNA;
	}
	else if( boost::iequals( arg, L".COMPUTER." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_COMPUTER;
	}
	else if( boost::iequals( arg, L".FAX." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_FAX;
	}
	else if( boost::iequals( arg, L".GATEWAY." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_GATEWAY;
	}
	else if( boost::iequals( arg, L".MODEM." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_MODEM;
	}
	else if( boost::iequals( arg, L".NETWORKAPPLIANCE." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_NETWORKAPPLIANCE;
	}
	else if( boost::iequals( arg, L".NETWORKBRIDGE." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_NETWORKBRIDGE;
	}
	else if( boost::iequals( arg, L".NETWORKHUB." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_NETWORKHUB;
	}
	else if( boost::iequals( arg, L".PRINTER." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_PRINTER;
	}
	else if( boost::iequals( arg, L".REPEATER." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_REPEATER;
	}
	else if( boost::iequals( arg, L".ROUTER." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_ROUTER;
	}
	else if( boost::iequals( arg, L".SCANNER." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_SCANNER;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCommunicationsApplianceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
