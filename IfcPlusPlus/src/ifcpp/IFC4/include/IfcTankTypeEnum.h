/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcTankTypeEnum = ENUMERATION OF	(BASIN	,BREAKPRESSURE	,EXPANSION	,FEEDANDEXPANSION	,PRESSUREVESSEL	,STORAGE	,VESSEL	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcTankTypeEnum : virtual public BuildingObject
{
public:
	enum IfcTankTypeEnumEnum
	{
		ENUM_BASIN,
		ENUM_BREAKPRESSURE,
		ENUM_EXPANSION,
		ENUM_FEEDANDEXPANSION,
		ENUM_PRESSUREVESSEL,
		ENUM_STORAGE,
		ENUM_VESSEL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcTankTypeEnum() = default;
	IfcTankTypeEnum( IfcTankTypeEnumEnum e ) { m_enum = e; }
	~IfcTankTypeEnum() = default;
	virtual const char* className() const { return "IfcTankTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTankTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcTankTypeEnumEnum m_enum;
};

