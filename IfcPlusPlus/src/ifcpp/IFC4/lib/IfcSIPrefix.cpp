/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSIPrefix.h"

// TYPE IfcSIPrefix = ENUMERATION OF	(EXA	,PETA	,TERA	,GIGA	,MEGA	,KILO	,HECTO	,DECA	,DECI	,CENTI	,MILLI	,MICRO	,NANO	,PICO	,FEMTO	,ATTO);
shared_ptr<BuildingObject> IfcSIPrefix::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSIPrefix> copy_self( new IfcSIPrefix() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSIPrefix::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSIPREFIX("; }
	switch( m_enum )
	{
		case ENUM_EXA:	stream << ".EXA."; break;
		case ENUM_PETA:	stream << ".PETA."; break;
		case ENUM_TERA:	stream << ".TERA."; break;
		case ENUM_GIGA:	stream << ".GIGA."; break;
		case ENUM_MEGA:	stream << ".MEGA."; break;
		case ENUM_KILO:	stream << ".KILO."; break;
		case ENUM_HECTO:	stream << ".HECTO."; break;
		case ENUM_DECA:	stream << ".DECA."; break;
		case ENUM_DECI:	stream << ".DECI."; break;
		case ENUM_CENTI:	stream << ".CENTI."; break;
		case ENUM_MILLI:	stream << ".MILLI."; break;
		case ENUM_MICRO:	stream << ".MICRO."; break;
		case ENUM_NANO:	stream << ".NANO."; break;
		case ENUM_PICO:	stream << ".PICO."; break;
		case ENUM_FEMTO:	stream << ".FEMTO."; break;
		case ENUM_ATTO:	stream << ".ATTO."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSIPrefix::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_EXA:	return L"EXA";
		case ENUM_PETA:	return L"PETA";
		case ENUM_TERA:	return L"TERA";
		case ENUM_GIGA:	return L"GIGA";
		case ENUM_MEGA:	return L"MEGA";
		case ENUM_KILO:	return L"KILO";
		case ENUM_HECTO:	return L"HECTO";
		case ENUM_DECA:	return L"DECA";
		case ENUM_DECI:	return L"DECI";
		case ENUM_CENTI:	return L"CENTI";
		case ENUM_MILLI:	return L"MILLI";
		case ENUM_MICRO:	return L"MICRO";
		case ENUM_NANO:	return L"NANO";
		case ENUM_PICO:	return L"PICO";
		case ENUM_FEMTO:	return L"FEMTO";
		case ENUM_ATTO:	return L"ATTO";
	}
	return L"";
}
shared_ptr<IfcSIPrefix> IfcSIPrefix::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSIPrefix>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSIPrefix>(); }
	shared_ptr<IfcSIPrefix> type_object( new IfcSIPrefix() );
	if( boost::iequals( arg, L".EXA." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_EXA;
	}
	else if( boost::iequals( arg, L".PETA." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_PETA;
	}
	else if( boost::iequals( arg, L".TERA." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_TERA;
	}
	else if( boost::iequals( arg, L".GIGA." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_GIGA;
	}
	else if( boost::iequals( arg, L".MEGA." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_MEGA;
	}
	else if( boost::iequals( arg, L".KILO." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_KILO;
	}
	else if( boost::iequals( arg, L".HECTO." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_HECTO;
	}
	else if( boost::iequals( arg, L".DECA." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_DECA;
	}
	else if( boost::iequals( arg, L".DECI." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_DECI;
	}
	else if( boost::iequals( arg, L".CENTI." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_CENTI;
	}
	else if( boost::iequals( arg, L".MILLI." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_MILLI;
	}
	else if( boost::iequals( arg, L".MICRO." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_MICRO;
	}
	else if( boost::iequals( arg, L".NANO." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_NANO;
	}
	else if( boost::iequals( arg, L".PICO." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_PICO;
	}
	else if( boost::iequals( arg, L".FEMTO." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_FEMTO;
	}
	else if( boost::iequals( arg, L".ATTO." ) )
	{
		type_object->m_enum = IfcSIPrefix::ENUM_ATTO;
	}
	return type_object;
}
