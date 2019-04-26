/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDistributionSystemEnum.h"

// TYPE IfcDistributionSystemEnum = ENUMERATION OF	(AIRCONDITIONING	,AUDIOVISUAL	,CHEMICAL	,CHILLEDWATER	,COMMUNICATION	,COMPRESSEDAIR	,CONDENSERWATER	,CONTROL	,CONVEYING	,DATA	,DISPOSAL	,DOMESTICCOLDWATER	,DOMESTICHOTWATER	,DRAINAGE	,EARTHING	,ELECTRICAL	,ELECTROACOUSTIC	,EXHAUST	,FIREPROTECTION	,FUEL	,GAS	,HAZARDOUS	,HEATING	,LIGHTING	,LIGHTNINGPROTECTION	,MUNICIPALSOLIDWASTE	,OIL	,OPERATIONAL	,POWERGENERATION	,RAINWATER	,REFRIGERATION	,SECURITY	,SEWAGE	,SIGNAL	,STORMWATER	,TELEPHONE	,TV	,VACUUM	,VENT	,VENTILATION	,WASTEWATER	,WATERSUPPLY	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcDistributionSystemEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDistributionSystemEnum> copy_self( new IfcDistributionSystemEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDistributionSystemEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDISTRIBUTIONSYSTEMENUM("; }
	switch( m_enum )
	{
		case ENUM_AIRCONDITIONING:	stream << ".AIRCONDITIONING."; break;
		case ENUM_AUDIOVISUAL:	stream << ".AUDIOVISUAL."; break;
		case ENUM_CHEMICAL:	stream << ".CHEMICAL."; break;
		case ENUM_CHILLEDWATER:	stream << ".CHILLEDWATER."; break;
		case ENUM_COMMUNICATION:	stream << ".COMMUNICATION."; break;
		case ENUM_COMPRESSEDAIR:	stream << ".COMPRESSEDAIR."; break;
		case ENUM_CONDENSERWATER:	stream << ".CONDENSERWATER."; break;
		case ENUM_CONTROL:	stream << ".CONTROL."; break;
		case ENUM_CONVEYING:	stream << ".CONVEYING."; break;
		case ENUM_DATA:	stream << ".DATA."; break;
		case ENUM_DISPOSAL:	stream << ".DISPOSAL."; break;
		case ENUM_DOMESTICCOLDWATER:	stream << ".DOMESTICCOLDWATER."; break;
		case ENUM_DOMESTICHOTWATER:	stream << ".DOMESTICHOTWATER."; break;
		case ENUM_DRAINAGE:	stream << ".DRAINAGE."; break;
		case ENUM_EARTHING:	stream << ".EARTHING."; break;
		case ENUM_ELECTRICAL:	stream << ".ELECTRICAL."; break;
		case ENUM_ELECTROACOUSTIC:	stream << ".ELECTROACOUSTIC."; break;
		case ENUM_EXHAUST:	stream << ".EXHAUST."; break;
		case ENUM_FIREPROTECTION:	stream << ".FIREPROTECTION."; break;
		case ENUM_FUEL:	stream << ".FUEL."; break;
		case ENUM_GAS:	stream << ".GAS."; break;
		case ENUM_HAZARDOUS:	stream << ".HAZARDOUS."; break;
		case ENUM_HEATING:	stream << ".HEATING."; break;
		case ENUM_LIGHTING:	stream << ".LIGHTING."; break;
		case ENUM_LIGHTNINGPROTECTION:	stream << ".LIGHTNINGPROTECTION."; break;
		case ENUM_MUNICIPALSOLIDWASTE:	stream << ".MUNICIPALSOLIDWASTE."; break;
		case ENUM_OIL:	stream << ".OIL."; break;
		case ENUM_OPERATIONAL:	stream << ".OPERATIONAL."; break;
		case ENUM_POWERGENERATION:	stream << ".POWERGENERATION."; break;
		case ENUM_RAINWATER:	stream << ".RAINWATER."; break;
		case ENUM_REFRIGERATION:	stream << ".REFRIGERATION."; break;
		case ENUM_SECURITY:	stream << ".SECURITY."; break;
		case ENUM_SEWAGE:	stream << ".SEWAGE."; break;
		case ENUM_SIGNAL:	stream << ".SIGNAL."; break;
		case ENUM_STORMWATER:	stream << ".STORMWATER."; break;
		case ENUM_TELEPHONE:	stream << ".TELEPHONE."; break;
		case ENUM_TV:	stream << ".TV."; break;
		case ENUM_VACUUM:	stream << ".VACUUM."; break;
		case ENUM_VENT:	stream << ".VENT."; break;
		case ENUM_VENTILATION:	stream << ".VENTILATION."; break;
		case ENUM_WASTEWATER:	stream << ".WASTEWATER."; break;
		case ENUM_WATERSUPPLY:	stream << ".WATERSUPPLY."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDistributionSystemEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_AIRCONDITIONING:	return L"AIRCONDITIONING";
		case ENUM_AUDIOVISUAL:	return L"AUDIOVISUAL";
		case ENUM_CHEMICAL:	return L"CHEMICAL";
		case ENUM_CHILLEDWATER:	return L"CHILLEDWATER";
		case ENUM_COMMUNICATION:	return L"COMMUNICATION";
		case ENUM_COMPRESSEDAIR:	return L"COMPRESSEDAIR";
		case ENUM_CONDENSERWATER:	return L"CONDENSERWATER";
		case ENUM_CONTROL:	return L"CONTROL";
		case ENUM_CONVEYING:	return L"CONVEYING";
		case ENUM_DATA:	return L"DATA";
		case ENUM_DISPOSAL:	return L"DISPOSAL";
		case ENUM_DOMESTICCOLDWATER:	return L"DOMESTICCOLDWATER";
		case ENUM_DOMESTICHOTWATER:	return L"DOMESTICHOTWATER";
		case ENUM_DRAINAGE:	return L"DRAINAGE";
		case ENUM_EARTHING:	return L"EARTHING";
		case ENUM_ELECTRICAL:	return L"ELECTRICAL";
		case ENUM_ELECTROACOUSTIC:	return L"ELECTROACOUSTIC";
		case ENUM_EXHAUST:	return L"EXHAUST";
		case ENUM_FIREPROTECTION:	return L"FIREPROTECTION";
		case ENUM_FUEL:	return L"FUEL";
		case ENUM_GAS:	return L"GAS";
		case ENUM_HAZARDOUS:	return L"HAZARDOUS";
		case ENUM_HEATING:	return L"HEATING";
		case ENUM_LIGHTING:	return L"LIGHTING";
		case ENUM_LIGHTNINGPROTECTION:	return L"LIGHTNINGPROTECTION";
		case ENUM_MUNICIPALSOLIDWASTE:	return L"MUNICIPALSOLIDWASTE";
		case ENUM_OIL:	return L"OIL";
		case ENUM_OPERATIONAL:	return L"OPERATIONAL";
		case ENUM_POWERGENERATION:	return L"POWERGENERATION";
		case ENUM_RAINWATER:	return L"RAINWATER";
		case ENUM_REFRIGERATION:	return L"REFRIGERATION";
		case ENUM_SECURITY:	return L"SECURITY";
		case ENUM_SEWAGE:	return L"SEWAGE";
		case ENUM_SIGNAL:	return L"SIGNAL";
		case ENUM_STORMWATER:	return L"STORMWATER";
		case ENUM_TELEPHONE:	return L"TELEPHONE";
		case ENUM_TV:	return L"TV";
		case ENUM_VACUUM:	return L"VACUUM";
		case ENUM_VENT:	return L"VENT";
		case ENUM_VENTILATION:	return L"VENTILATION";
		case ENUM_WASTEWATER:	return L"WASTEWATER";
		case ENUM_WATERSUPPLY:	return L"WATERSUPPLY";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcDistributionSystemEnum> IfcDistributionSystemEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDistributionSystemEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDistributionSystemEnum>(); }
	shared_ptr<IfcDistributionSystemEnum> type_object( new IfcDistributionSystemEnum() );
	if( boost::iequals( arg, L".AIRCONDITIONING." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_AIRCONDITIONING;
	}
	else if( boost::iequals( arg, L".AUDIOVISUAL." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_AUDIOVISUAL;
	}
	else if( boost::iequals( arg, L".CHEMICAL." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_CHEMICAL;
	}
	else if( boost::iequals( arg, L".CHILLEDWATER." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_CHILLEDWATER;
	}
	else if( boost::iequals( arg, L".COMMUNICATION." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_COMMUNICATION;
	}
	else if( boost::iequals( arg, L".COMPRESSEDAIR." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_COMPRESSEDAIR;
	}
	else if( boost::iequals( arg, L".CONDENSERWATER." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_CONDENSERWATER;
	}
	else if( boost::iequals( arg, L".CONTROL." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_CONTROL;
	}
	else if( boost::iequals( arg, L".CONVEYING." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_CONVEYING;
	}
	else if( boost::iequals( arg, L".DATA." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_DATA;
	}
	else if( boost::iequals( arg, L".DISPOSAL." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_DISPOSAL;
	}
	else if( boost::iequals( arg, L".DOMESTICCOLDWATER." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_DOMESTICCOLDWATER;
	}
	else if( boost::iequals( arg, L".DOMESTICHOTWATER." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_DOMESTICHOTWATER;
	}
	else if( boost::iequals( arg, L".DRAINAGE." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_DRAINAGE;
	}
	else if( boost::iequals( arg, L".EARTHING." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_EARTHING;
	}
	else if( boost::iequals( arg, L".ELECTRICAL." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_ELECTRICAL;
	}
	else if( boost::iequals( arg, L".ELECTROACOUSTIC." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_ELECTROACOUSTIC;
	}
	else if( boost::iequals( arg, L".EXHAUST." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_EXHAUST;
	}
	else if( boost::iequals( arg, L".FIREPROTECTION." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_FIREPROTECTION;
	}
	else if( boost::iequals( arg, L".FUEL." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_FUEL;
	}
	else if( boost::iequals( arg, L".GAS." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_GAS;
	}
	else if( boost::iequals( arg, L".HAZARDOUS." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_HAZARDOUS;
	}
	else if( boost::iequals( arg, L".HEATING." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_HEATING;
	}
	else if( boost::iequals( arg, L".LIGHTING." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_LIGHTING;
	}
	else if( boost::iequals( arg, L".LIGHTNINGPROTECTION." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_LIGHTNINGPROTECTION;
	}
	else if( boost::iequals( arg, L".MUNICIPALSOLIDWASTE." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_MUNICIPALSOLIDWASTE;
	}
	else if( boost::iequals( arg, L".OIL." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_OIL;
	}
	else if( boost::iequals( arg, L".OPERATIONAL." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_OPERATIONAL;
	}
	else if( boost::iequals( arg, L".POWERGENERATION." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_POWERGENERATION;
	}
	else if( boost::iequals( arg, L".RAINWATER." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_RAINWATER;
	}
	else if( boost::iequals( arg, L".REFRIGERATION." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_REFRIGERATION;
	}
	else if( boost::iequals( arg, L".SECURITY." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_SECURITY;
	}
	else if( boost::iequals( arg, L".SEWAGE." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_SEWAGE;
	}
	else if( boost::iequals( arg, L".SIGNAL." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_SIGNAL;
	}
	else if( boost::iequals( arg, L".STORMWATER." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_STORMWATER;
	}
	else if( boost::iequals( arg, L".TELEPHONE." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_TELEPHONE;
	}
	else if( boost::iequals( arg, L".TV." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_TV;
	}
	else if( boost::iequals( arg, L".VACUUM." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_VACUUM;
	}
	else if( boost::iequals( arg, L".VENT." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_VENT;
	}
	else if( boost::iequals( arg, L".VENTILATION." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_VENTILATION;
	}
	else if( boost::iequals( arg, L".WASTEWATER." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_WASTEWATER;
	}
	else if( boost::iequals( arg, L".WATERSUPPLY." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_WATERSUPPLY;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDistributionSystemEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
