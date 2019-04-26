/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcStructuralSurfaceActivityTypeEnum = ENUMERATION OF	(CONST	,BILINEAR	,DISCRETE	,ISOCONTOUR	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcStructuralSurfaceActivityTypeEnum : virtual public BuildingObject
{
public:
	enum IfcStructuralSurfaceActivityTypeEnumEnum
	{
		ENUM_CONST,
		ENUM_BILINEAR,
		ENUM_DISCRETE,
		ENUM_ISOCONTOUR,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcStructuralSurfaceActivityTypeEnum() = default;
	IfcStructuralSurfaceActivityTypeEnum( IfcStructuralSurfaceActivityTypeEnumEnum e ) { m_enum = e; }
	~IfcStructuralSurfaceActivityTypeEnum() = default;
	virtual const char* className() const { return "IfcStructuralSurfaceActivityTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcStructuralSurfaceActivityTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcStructuralSurfaceActivityTypeEnumEnum m_enum;
};

