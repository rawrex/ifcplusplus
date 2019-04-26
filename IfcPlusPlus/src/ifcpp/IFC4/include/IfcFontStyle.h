/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcFontStyle = STRING;
class IFCQUERY_EXPORT IfcFontStyle : public BuildingObject
{
public:
	IfcFontStyle() = default;
	IfcFontStyle( std::wstring value );
	~IfcFontStyle() = default;
	virtual const char* className() const { return "IfcFontStyle"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcFontStyle> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	std::wstring m_value;
};

