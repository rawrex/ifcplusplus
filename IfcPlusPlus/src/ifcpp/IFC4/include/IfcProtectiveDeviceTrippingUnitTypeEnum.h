/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcProtectiveDeviceTrippingUnitTypeEnum = ENUMERATION OF	(ELECTRONIC	,ELECTROMAGNETIC	,RESIDUALCURRENT	,THERMAL	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcProtectiveDeviceTrippingUnitTypeEnum : virtual public BuildingObject
{
public:
	enum IfcProtectiveDeviceTrippingUnitTypeEnumEnum
	{
		ENUM_ELECTRONIC,
		ENUM_ELECTROMAGNETIC,
		ENUM_RESIDUALCURRENT,
		ENUM_THERMAL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcProtectiveDeviceTrippingUnitTypeEnum() = default;
	IfcProtectiveDeviceTrippingUnitTypeEnum( IfcProtectiveDeviceTrippingUnitTypeEnumEnum e ) { m_enum = e; }
	~IfcProtectiveDeviceTrippingUnitTypeEnum() = default;
	virtual const char* className() const { return "IfcProtectiveDeviceTrippingUnitTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcProtectiveDeviceTrippingUnitTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcProtectiveDeviceTrippingUnitTypeEnumEnum m_enum;
};

